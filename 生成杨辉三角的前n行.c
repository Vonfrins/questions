#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


int** generate(int numRows, int* returnSize, int** returnColumnSizes)
{
	int** returnnum = (int**)malloc(sizeof(int*) * numRows);
	*returnSize = numRows;
	*returnColumnSizes = (int*)malloc(sizeof(int) * numRows);
	int i, j;
	for (i = 0; i < numRows; i++)
	{
		returnnum[i] = (int*)malloc(sizeof(int) * (i + 1));
		(*returnColumnSizes)[i] = i + 1;
		returnnum[i][0] = 1;
		returnnum[i][i] = 1;
		if (i >= 2)
		{
			for (j = 1; j < i; j++)
				returnnum[i][j] = returnnum[i - 1][j - 1] + returnnum[i - 1][j];
		}
	}
	return returnnum;
}

