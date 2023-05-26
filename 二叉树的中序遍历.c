#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

// 给定一个二叉树的根节点 root ，返回它的中序遍历 。
 
//eg:
//输入：root = [1, null, 2, 3]
//输出：[1, 3, 2]



struct TreeNode
{
	int data;
	struct TreeNode* lchild, * rchild;
};


void Inorder(struct TreeNode* root, int* res, int* resSize)  // 函数接收三个参数：当前遍历的结点"root"，结果数组"res"，结果数组的大小指针"resSize"
{
	if (!root)    // 若当前结点为空，则终止检查
	{
		return 0;
	}
	Inorder(root->lchild, res, resSize);  // 先遍历左子树
	res[(*resSize)++] = root->data;       // 将当前结点的值存入结果数组中,并通过递增"resSize"指针来更新结果数组的大小
	Inorder(root->rchild, res, resSize);  // 再遍历右子树
}



int* InorderTraversal(struct TreeNode* root, int* returnSize)
{
	int* res = (int*)malloc(sizeof(int) * 501);  // 分配整型数组res 用于存储中序遍历结果
	*returnSize = 0;     // 数组中的元素个数
	Inorder(root, res, returnSize);
	return res;
}