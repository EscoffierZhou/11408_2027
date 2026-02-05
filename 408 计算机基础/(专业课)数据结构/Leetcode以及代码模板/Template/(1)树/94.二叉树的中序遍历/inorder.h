#ifndef INORDER_94_H
#define INORDER_94_H

#include <vector>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// C++ 版本
inline void inorder_cpp(TreeNode* root, std::vector<int>& res) {
    if (!root) return;
    inorder_cpp(root->left, res);
    res.push_back(root->val);
    inorder_cpp(root->right, res);
}

// C 版本
inline void inorder_c(struct TreeNode* root, int* res, int* resSize) {
    if (!root) return;
    inorder_c(root->left, res, resSize);
    res[(*resSize)++] = root->val;
    inorder_c(root->right, res, resSize);
}

#endif
