#define _CRT_SECURE_NO_WARNINGS 1

// 判断一个整型数是否为奇数
// Determine whether an integer is odd

#include<stdio.h>



int main()
{
	int i = 0;

	scanf("%d",&i);
	if (i % 2 == 0)
		printf("No \n");
	else
		printf("Yes \n");
	return 0;
}