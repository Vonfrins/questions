#define _CRT_SECURE_NO_WARNINGS 1

// 输出0-100之间的奇数
//	Output an odd number between 0 and 100

#include<stdio.h>


int main()
{
	int i;
	for (i = 0; i <= 100; i++)
	{
		if (i % 2 == 1)
			printf("%d\n",i);
	}

	return 0;
}