#define _CRT_SECURE_NO_WARNINGS 1

// 求二进制中不同位的个数，两个int（32位）整数m,n的二进制表达式中，有多少个位 (bit)不同

#include<stdio.h>

int Count(int x,int y)
{
	int i = 0;
	int count = 0;

	i = x ^ y;
	while (i)
	{
		i = i & (i - 1);
		count++;
	}
	return count;
}

int main()
{
	int m=0;
	int n=0;

	scanf("%d,%d",&m,&n);
	int c = Count(m, n);
	printf("%d\n",c);

	return 0;
}
