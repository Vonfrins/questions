#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// 打印1000-2000年之间的闰年
// Prints leap years between 1000 and 2000

int main()
{
	for (int i = 1000; i <= 2000; i++)
	{
		if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0)
			printf("%d\n", i);
	}

	return 0;
}
