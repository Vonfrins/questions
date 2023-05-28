#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdbool.h>

struct TreeNode
{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
};


bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
	if (p == NULL && q == NULL)
		return true;
	else if (p == NULL || q == NULL)
		return false;
	else if (p != NULL && q != NULL)
	{
		if (p->val != q->val)
			return false;
		else
			return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
	}
	return false;
}