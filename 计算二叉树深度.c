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
		return 0;     // �����Ϊ�գ��򷵻�0
	else
	{
		int leftdepth = maxDepth(root->left);    // �ݹ�������������
		int rightdepth = maxDepth(root->right);  // �ݹ�������������
		return ((leftdepth > rightdepth) ? (leftdepth + 1) : (rightdepth + 1));  // ���ؽϴ����+1
	}
}