#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdbool.h>

struct TreeNode
{
	int data;
	struct TreeNode* left;
	struct TreeNode* right;
};

bool isMirror(struct TreeNode* rootleft, struct TreeNode* rootright)
{
	if (rootleft == NULL && rootright == NULL)
		return true;
	else if (rootleft == NULL || rootright == NULL)
		return false;
	else
	{
		if (rootleft->data == rootright->data)
			return isMirror(rootleft->left, rootright->right) && isMirror(rootleft->right, rootright->left);
		else
			return false;
	}
}


bool isSymmetric(struct TreeNode* root)
{
	if (root == NULL)
		return true;
	else
		return isMirror(root->left, root->right);
}
