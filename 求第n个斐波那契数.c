#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// ���n��쳲�������

// 쳲��������У��������У��� �ӵ�3�ʼ��ÿһ�����ǰ����֮��
// 1,1,2,3,5,8,13,21,34,55.......



// �����ظ����㣬Ч�ʵ��£����ʺ�ʹ�õݹ飩��

// int count=0;
int Fib1(int n)
{
//	if (n == 3)    // ���Ե�3��쳲��������ļ������
//		count++;
	if (n > 2)
	{
		return Fib1(n - 1) + Fib1(n - 2);
	}
	else
		return 1;
}




// ѭ����ʽ����Ч��

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
	printf("��%d��쳲�������Ϊ:%d", n, ret);
 //	printf("countִ����%d��", count);

	return 0;
}



 
