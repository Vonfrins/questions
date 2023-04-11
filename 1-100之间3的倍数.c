#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

 //写一个代码打印1-100之间3的倍数
 //Write a code that prints multiples of 3 between 1 and 100

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d\n", i);
	}

	return 0;
}