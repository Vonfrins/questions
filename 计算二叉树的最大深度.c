#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct TreeNode
{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
};


int maxDepth(struct TreeNode* root)
{
	if (root == NULL)
		return 0;     // 如果树为空，则返回0
	else
	{
		int leftdepth = maxDepth(root->left);    // 递归计算左子树深度
		int rightdepth = maxDepth(root->right);  // 递归计算右子树深度
		return ((leftdepth > rightdepth) ? (leftdepth + 1) : (rightdepth + 1));  // 返回较大深度+1
	}
}