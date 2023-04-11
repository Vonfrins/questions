#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// 整数的求逆
// The inverse of an integer



int main()
{
	int x = 0;
	scanf("%d", &x);

	int a = 0;
	int b = 0;

	while (x != 0)
	{
		a = x % 10;
		b = x / 10;
		x = b;
		printf("%d", a);
	}

	return 0;
}