#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//给你一个非负整数 x ，计算并返回 x 的 算术平方根 

//由于返回类型是整数，结果只保留整数部分 ，小数部分将被舍去


// 牛顿迭代法 伪代码解释思路
//def squareRoot(n) :
//    if n == 0 :
//        return 0
//
//    guess = n / 2  // 初始猜测值为 n 的一半
//    precision = 0.0001  // 精度阈值
//
//    while abs(guess * guess - n) > precision:
//      guess = (guess + n / guess) / 2   // 平方根的迭代公式
//
//    return int(guess)  // 将浮点数近似值转换为整数并返回


// 这种算法的缺点是：时间过长

//int mySqrt(int x)
//{
//	if (x == 0)
//		return 0;
//
//	int guess = x/2;
//	int prevGuess;
//
//	do {
//		prevGuess = guess;
//		guess = (guess + x / guess) / 2;
//	} while (prevGuess != guess);
//
//	return guess;
//
//}



// 使用二分法解决

int mySqrt(int x)
{
	if (x <= 1)     // 对于输入为0的情况，直接返回0
		return 0;

	int low = 0;     // 区间下界
	int high = x;    // 区间上界
	int result = 0;  // 保存结果  

	while (low <= high)
	{
		int mid = low + (high - low) / 2;  // 计算区间中点

		if (mid <= x / mid)     // 如果中点的平方小于等于x，更新结果，并继续在右半区间  (注意此处不能写成 mid*mid<=x,否则会导致有符号整型溢出)
		{
			result = mid;
			low = mid + 1;
		}
		else   // 如果中点的平方大于x，在左半区间搜索
		{
			high = mid - 1;
		}
	}

	return result;

}



