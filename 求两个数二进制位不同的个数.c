#define _CRT_SECURE_NO_WARNINGS 1

// ��������в�ͬλ�ĸ���������int��32λ������m,n�Ķ����Ʊ��ʽ�У��ж��ٸ�λ (bit)��ͬ

#include<stdio.h>

int Count(int x,int y)
{
	int i = 0;
	int count = 0;

	i = x ^ y;
	while (i)
	{
		i = i & (i - 1);
		count++;
	}
	return count;
}

int main()
{
	int m=0;
	int n=0;

	scanf("%d,%d",&m,&n);
	int c = Count(m, n);
	printf("%d\n",c);

	return 0;
}
