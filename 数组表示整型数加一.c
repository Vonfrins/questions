#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// 给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。
//最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。
//你可以假设除了整数 0 之外，这个整数不会以零开头。

// eg. 输入：digits = [1, 2, 3]
//     输出：[1, 2, 4]
//     解释：输入数组表示数字 123

// 注意特殊情况:
	// 输入: digits = [9,9,9]
    // 输出: digits = [1,0,0,0]
    // 解释: 输入数组表示数字 999


// 方法一:  设置进位carry

int* plusOne(int* digits, int* digitsSize, int* returnSize)
{
    int carry = 1;
    for (int i = digitsSize - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            carry = 0;
            digits[i]++;
            break;
        }
        else
            digits[i] = 0;
    }
    if (carry)
    {
        *returnSize = digitsSize + 1;
        int* newdigits = (int*)malloc((*returnSize) * sizeof(int));
        newdigits[0] = 1;
        for (int j = 0; j < digitsSize; j++)
        {
            newdigits[i + 1] = digits[i];
        }
        return newdigits;
    }
    else
    {
        *returnSize = digitsSize;
        return digits;
    }
}



// 方法二: 

int* plusOne(int* digits, int* digitsSize, int* returnSize)
{
    for (int i = digitsSize - 1; i >= 0; i--)
    {
        if (digits[i] != 9)
        {
            digits[i]++;
            break;
        }
        digits[i] = 0;
    }
    if (digits[0] == 0)
    {
        *returnSize = digitsSize+1;
        int* newdigits = (int*)malloc((*returnSize) * sizeof(int));
        int newdigits[0] = 1;
        for (int j = 1; j < digitsSize + 1; j++)
        {
            newdigits[j] = digits[j - 1];
        }
        return newdigits;
    }
    *returnSize = digitsSize;
    return digits;
}