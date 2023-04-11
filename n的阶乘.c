#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//  计算n的阶乘
//  Calculate the factorial of n


// 基础算法
int test1()
{
	int n = 0;
	int i = 0;

	scanf("%d", &n);
	int m = n;

	for (i=1;i<n;i++)
	{
		m *= i;
	}
	
	printf("%d", m);

	return 0;
}




// 利用递归思想求n的阶乘

int Fac(int i)
{
	if (i <= 1)
		return 1;
	else
		return i * Fac(i - 1);

}

int test2()
{
	int i = 0;
	scanf("%d", &i);
	
	int ret = Fac(i);
	printf("%d\n", ret);

	return 0;
}