#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// ����һ���� ���� ��ɵ� �ǿ� ��������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��
//���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢�������֡�
//����Լ���������� 0 ֮�⣬��������������㿪ͷ��

// eg. ���룺digits = [1, 2, 3]
//     �����[1, 2, 4]
//     ���ͣ����������ʾ���� 123

// ע���������:
	// ����: digits = [9,9,9]
    // ���: digits = [1,0,0,0]
    // ����: ���������ʾ���� 999


// ����һ:  ���ý�λcarry

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



// ������: 

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