#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//  ����n�Ľ׳�
//  Calculate the factorial of n


// �����㷨
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




// ���õݹ�˼����n�Ľ׳�

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