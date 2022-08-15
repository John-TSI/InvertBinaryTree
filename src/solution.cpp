#include"../inc/solution.hpp"


TreeNode* Solution::invertTree(TreeNode* root)
{
    if(!root || (!root->left && !root->right)){ return root; }  // handle single node / root node cases
    // exchange left and right subtrees using a temporary variable
    TreeNode* tmp{root->left};
    root->left = root->right;
    root->right = tmp;

    // make recursive calls on the left and right subtrees
    invertTree(root->left);
    invertTree(root->right);

    return root;
}