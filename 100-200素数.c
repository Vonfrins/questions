#define _CRT_SECURE_NO_WARNINGS 1

// 打印100-200之间的素数
// Print prime numbers between 100 and 200


#include<stdio.h>

int Is_prime(int j)
{
	for (int k = 2; k < j; k++)
	{
		int l = j % k;
		if (l == 0)
			return 0;
	}
	return 1;
}

int main()
{

	for (int i = 100; i <= 200; i++)
	{
		int x=Is_prime(i);
		if (x == 1)
			printf("%d\n", i);
	}


	return 0;
}
