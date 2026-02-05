#include <iostream>
#include <vector>
#include <stdlib.h>
#include "inorder.h"
using namespace std;
// 中序遍历:左子树-根节点-右子树的方式进行遍历
// 整体思路:
// 1.定义一个vector用于存储结果(C++:STL/C:链式存储malloc)
// 2a.进行中序遍历(Cpp)
    // a.判空,返回空vector
    // b.递归调用inorder(root->left),push_back,inorder(root->right)
    // c.返回结果
// 2b.进行中序遍历(Cpp)
    // a.判空,返回空vector
    // b.递归调用inorder(root->left),push_back,inorder(root->right)
    // c.返回结果
class Solution_Cpp {
public:
    void inorder(TreeNode* root, vector<int>& res) {
        if (!root) {
            return;
        }
        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorder(root, res);
        return res;
    }
};

class Solution_C{
public:
    void inorder(struct TreeNode* root, int* res, int* resSize) {
        if (!root) {
            return;
        }
        inorder(root->left, res, resSize);
        res[(*resSize)++] = root->val;
        inorder(root->right, res, resSize);
    }
    int* inorderTraversal(struct TreeNode* root, int* returnSize) {
        int* res = (int*)malloc(sizeof(int) * 501);
        *returnSize = 0;
        inorder(root, res, returnSize);
        return res;
    }
    void destroyTree(TreeNode* root) {
        if (root == nullptr) return;
        destroyTree(root->left);  // 先杀左子树
        destroyTree(root->right); // 再杀右子树
        delete root;              // 最后杀根节点（后序遍历的应用）
    }
};




int main() {
    // --- 1. 构建一颗简单的二叉树 ---
    //       1
    //      / \
    //     2   3
    //    /
    //   4
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

    cout << "Expected Inorder: 4 2 1 3" << endl;

    // --- 2. 测试 C++ 版本 (Solution_Cpp) ---
    Solution_Cpp cpp_sol;
    vector<int> cpp_res = cpp_sol.inorderTraversal(root);
    cout << "C++ Result: ";
    for (int val : cpp_res) {
        cout << val << " ";
    }
    cout << endl;

    // --- 3. 测试 C 版本 (Solution_C) ---
    Solution_C c_sol;
    int returnSize = 0;
    int* c_res = c_sol.inorderTraversal(root, &returnSize);

    cout << "C Result:   ";
    for (int i = 0; i < returnSize; i++) {
        cout << c_res[i] << " ";
    }
    cout << endl;

    // --- 4. 释放内存 (良好的编程习惯) ---
    free(c_res);
    c_sol.destroyTree(root);
    return 0;
}
