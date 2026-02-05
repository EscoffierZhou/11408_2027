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
class Solution1_Cpp {
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
    void inorder(struct TreeNode* root, int* res, int* resSize) {
        if (!root) {
            return;
        }
        inorder(root->left, res, resSize);
        res[(*resSize)++] = root->val;
        inorder(root->right, res, resSize);
    }
    int* inorderTraversal(struct TreeNode* root, int* returnSize) {
        int* res = malloc(sizeof(int) * 501);
        *returnSize = 0;
        inorder(root, res, returnSize);
        return res;
    }
};

int main(){

}
