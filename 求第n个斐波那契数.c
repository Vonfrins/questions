#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// 求第n个斐波那契数

// 斐波那契数列（兔子数列）： 从第3项开始，每一项都等于前两项之和
// 1,1,2,3,5,8,13,21,34,55.......



// 大量重复计算，效率低下（不适合使用递归）：

// int count=0;
int Fib1(int n)
{
//	if (n == 3)    // 测试第3个斐波那契数的计算次数
//		count++;
	if (n > 2)
	{
		return Fib1(n - 1) + Fib1(n - 2);
	}
	else
		return 1;
}




// 循环方式提升效率

int Fib2(int n)
{
	int a = 1, b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}



int main()
{
	int n = 0;
	scanf("%d", &n);

	int ret = Fib2(n);
	printf("第%d个斐波那契数为:%d", n, ret);
 //	printf("count执行了%d次", count);

	return 0;
}



 
