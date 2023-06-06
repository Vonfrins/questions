#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


int* getRow(int rowIndex, int* returnSize)
{
	int* returnnum = (int*)malloc(sizeof(int) * (rowIndex + 1));
	*returnSize = rowIndex + 1;
	for (int i = 0; i < rowIndex + 1; i++)
	{
		returnnum[i] = 1;
		for (int j = i - 1; j >= 1; j--)
		{
			returnnum[j] = returnnum[j] + returnnum[j - 1];
		}
	}
	return returnnum;
}


int* getRow(int rowIndex, int* returnSize)
{
	*returnSize = rowIndex + 1;
	int* C[rowIndex + 1];
	for (int i = 0; i < rowIndex + 1; i++)
	{
		C[i] = (int*)malloc(sizeof(int) * (i + 1));
		C[i][0] = C[i][i] = 1;
		for (int j = 1; j < i; j++)
		{
			C[i][j] = C[i - 1][j-1] + C[i - 1][j];
		}
	}
	return C[rowIndex];
}