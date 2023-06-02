#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

struct TreeNode
{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
};

int minDepth(struct TreeNode* root)
{
	if (root == NULL)
		return 0;

	if (root->left == NULL)
		return minDepth(root->right) + 1;

	if (root->right == NULL)
		return minDepth(root->left) + 1;

	int leftdepth = minDepth(root->left);
	int rightdepth = minDepth(root->right);
	return ((leftdepth < rightdepth) ? leftdepth + 1 : rightdepth + 1);

}