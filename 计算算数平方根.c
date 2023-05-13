#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//����һ���Ǹ����� x �����㲢���� x �� ����ƽ���� 

//���ڷ������������������ֻ������������ ��С�����ֽ�����ȥ


// ţ�ٵ����� α�������˼·
//def squareRoot(n) :
//    if n == 0 :
//        return 0
//
//    guess = n / 2  // ��ʼ�²�ֵΪ n ��һ��
//    precision = 0.0001  // ������ֵ
//
//    while abs(guess * guess - n) > precision:
//      guess = (guess + n / guess) / 2   // ƽ�����ĵ�����ʽ
//
//    return int(guess)  // ������������ֵת��Ϊ����������


// �����㷨��ȱ���ǣ�ʱ�����

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



// ʹ�ö��ַ����

int mySqrt(int x)
{
	if (x <= 1)     // ��������Ϊ0�������ֱ�ӷ���0
		return 0;

	int low = 0;     // �����½�
	int high = x;    // �����Ͻ�
	int result = 0;  // ������  

	while (low <= high)
	{
		int mid = low + (high - low) / 2;  // ���������е�

		if (mid <= x / mid)     // ����е��ƽ��С�ڵ���x�����½�������������Ұ�����  (ע��˴�����д�� mid*mid<=x,����ᵼ���з����������)
		{
			result = mid;
			low = mid + 1;
		}
		else   // ����е��ƽ������x���������������
		{
			high = mid - 1;
		}
	}

	return result;

}



