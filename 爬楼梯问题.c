#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//爬楼梯问题的算法思路如下：
//
//1.定义一个数组dp，其中dp[i]表示爬到第i个台阶的方法数
//2.爬到第i个台阶只有两种情况:
//	(1) 从第 i-1 个台阶 爬 一步 抵达；
//	(2) 从第 i-2 个台阶 爬 两步 抵达；
//  因此，dp[i]=dp[i-1]+dp[i-2]
//3.初始化数组dp的前两个元素：
//	(1) dp[0]=1  表示爬到第0个台阶的方法数为 1 （不需要爬）
//	(2) dp[1]=1  表示爬到第1个台阶的方法数为 1 （只能爬一步）
//4.从第二个台阶开始遍历数组dp ，依次计算出 dp[i] 的值
//5.最终，dp[n]的值就是爬到楼梯顶部的不同方法数,其中 n 为楼梯的总台阶数


int climbStairs(int n)
{
	int* num = (int*)malloc(sizeof(int) * (n + 1));
	num[0] = 1;
	num[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		num[i] = num[i - 1] + num[i - 2];
	}
	int result = num[n];
	free(num);
	return result;
}



// 优化方法：
int climbStairs(int n)
{
	if (n == 0 || n == 1)
		return 1;

	int prev1 = 1;    // 爬到前一个台阶的方法数
	int prev2 = 1;    // 爬到前两个台阶的方法数
	int result = 0;

	for (int i = 2; i <= n; i++)
	{
		result = prev1 + prev2;
		prev2 = prev1;
		prev1 = result;
	}

	return result;
}

// 仅使用了三个变量来存储，无需使用数组，将空间复杂度从 O(n) 降低为 O(1)