#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

// ����һ���������ĸ��ڵ� root ����������������� ��
 
//eg:
//���룺root = [1, null, 2, 3]
//�����[1, 3, 2]



struct TreeNode
{
	int data;
	struct TreeNode* lchild, * rchild;
};


void Inorder(struct TreeNode* root, int* res, int* resSize)  // ��������������������ǰ�����Ľ��"root"���������"res"���������Ĵ�Сָ��"resSize"
{
	if (!root)    // ����ǰ���Ϊ�գ�����ֹ���
	{
		return 0;
	}
	Inorder(root->lchild, res, resSize);  // �ȱ���������
	res[(*resSize)++] = root->data;       // ����ǰ����ֵ������������,��ͨ������"resSize"ָ�������½������Ĵ�С
	Inorder(root->rchild, res, resSize);  // �ٱ���������
}



int* InorderTraversal(struct TreeNode* root, int* returnSize)
{
	int* res = (int*)malloc(sizeof(int) * 501);  // ������������res ���ڴ洢����������
	*returnSize = 0;     // �����е�Ԫ�ظ���
	Inorder(root, res, returnSize);
	return res;
}