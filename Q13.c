#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// ���������������������������Լ��
// Given two numbers, find the greatest common divisor of these two numbers

int MAX(int x, int y)
{
	if (x > y)
		return x;
	else if (x < y)
	{
		int k = 0;
		k = y;
		y = x;
		x = k;
		return x;
	}
}

int MIN(int x, int y)
{
	if (x > y)
		return y;
	else if (x < y)
	{
		int k = 0;
		k = x;
		x = y;
		y = k;
		return y;
	}
}


int main()
{
	int a = 0, b = 0;
	scanf("%d,%d", &a, &b);
	int x, y;

	x = MAX(a, b);
	y = MIN(a, b);

	int i = 0;
	while (x % y)
	{
		i = x % y;
		x = y;
		y = i;
	}
	printf("%d��%d�����Լ��Ϊ:%d", a, b, y);


	return 0;
}