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

int Depth(struct TreeNode* root)
{
	if (root == NULL)
		return 0;
	int leftdepth = Depth(root->left);
	int rightdepth = Depth(root->right);
	return ((leftdepth > rightdepth) ? leftdepth : rightdepth) + 1;
}



bool isBalanced(struct TreeNode* root)
{
	if (root == NULL)
		return true;

	else
	{
		int leftdepth = Depth(root->left);
		int rightdepth = Depth(root->right);

		int diff = abs(leftdepth - rightdepth);
		if (diff > 1)
			return false;
	}
	return isBalanced(root->left) && isBalanced(root->right);
}