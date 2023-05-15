#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//��¥��������㷨˼·���£�
//
//1.����һ������dp������dp[i]��ʾ������i��̨�׵ķ�����
//2.������i��̨��ֻ���������:
//	(1) �ӵ� i-1 ��̨�� �� һ�� �ִ
//	(2) �ӵ� i-2 ��̨�� �� ���� �ִ
//  ��ˣ�dp[i]=dp[i-1]+dp[i-2]
//3.��ʼ������dp��ǰ����Ԫ�أ�
//	(1) dp[0]=1  ��ʾ������0��̨�׵ķ�����Ϊ 1 ������Ҫ����
//	(2) dp[1]=1  ��ʾ������1��̨�׵ķ�����Ϊ 1 ��ֻ����һ����
//4.�ӵڶ���̨�׿�ʼ��������dp �����μ���� dp[i] ��ֵ
//5.���գ�dp[n]��ֵ��������¥�ݶ����Ĳ�ͬ������,���� n Ϊ¥�ݵ���̨����


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



// �Ż�������
int climbStairs(int n)
{
	if (n == 0 || n == 1)
		return 1;

	int prev1 = 1;    // ����ǰһ��̨�׵ķ�����
	int prev2 = 1;    // ����ǰ����̨�׵ķ�����
	int result = 0;

	for (int i = 2; i <= n; i++)
	{
		result = prev1 + prev2;
		prev2 = prev1;
		prev1 = result;
	}

	return result;
}

// ��ʹ���������������洢������ʹ�����飬���ռ临�Ӷȴ� O(n) ����Ϊ O(1)