// https://leetcode.com/problems/invert-binary-tree/

#include<iostream>
#include"../inc/solution.hpp"


// function to visualise result of invertTree() call
void PrintPreorder(TreeNode* node)
{
    if(!node){ return; }
    std::cout << node->val << ' ';
	PrintPreorder(node->left);
    PrintPreorder(node->right);
}

int main()
{
	TreeNode n7(9);
	TreeNode n6(6);
	TreeNode n5(3);
	TreeNode n4(1);
	TreeNode n3(7, &n6, &n7);
	TreeNode n2(2, &n4, &n5);
	TreeNode root(4, &n2, &n3);  // before call, preorder traversal: 4 2 1 3 7 6 9

	PrintPreorder(Solution().invertTree(&root));  // after call, preorder traversal: 4 7 9 6 2 3 1
	return 0;
}
