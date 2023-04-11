#define _CRT_SECURE_NO_WARNINGS 1

// ���������ȳ����������
// Swap the contents of two equal-length arrays


#include<stdio.h>

// �ҵķ�����(�е㱿��)
// My solution

//void Swap(int, int);
//
//void Swap(int A[],int B[],int sz)
//{
//	int i;
//	int arr[5] = {0};
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = A[i];
//		A[i] = B[i];
//		B[i] = arr[i];
//	}
//}
//
//
//
//int main()
//{
//	int A[5] = { 0 };
//	int B[5] = { 0 };
//	int sz = sizeof(A) / sizeof(A[0]);
//
//	printf("A ��ʼΪ: \n");
//	for (int i = 0; i < sz; i++)
//	{
//		A[i] = i + 1;
//		printf("%d ", A[i]);
//	}
//	printf("\n");
//
//	printf("B ��ʼΪ: \n");
//	for (int i = 0; i < sz; i++)
//	{
//		B[i] = i + 6;
//		printf("%d ",B[i]);
//	}
//	printf("\n");
//
//	Swap(A,B,sz);
//
//	printf("A ����Ϊ: \n");
//	for (int j = 0; j < sz; j++)
//	{
//		printf("%d ",A[j]);
//	}
//	printf("\n");
//
//	printf("B ����Ϊ: \n");
//	for (int j = 0; j < sz; j++)
//	{
//		printf("%d ",B[j]);
//	}
//
//	return 0;
//}
//

// �����Ǹ��õķ�����
// Probably the better way

int main()
{
	int A[] = { 1,2,3,4,5 };
	int B[] = { 6,7,8,9,0 };
	int sz = sizeof(A) / sizeof(A[0]);
	int tmp = 0;

	for (int i = 0; i < sz; i++)
	{
		tmp = A[i];
		A[i] = B[i];
		B[i] = tmp;
	}

	for (int i=0;i<sz;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");

	for (int i=0;i<sz;i++)
	{
		printf("%d ",B[i]);
	}

	return 0;
}