#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

 //дһ�������ӡ1-100֮��3�ı���
 //Write a code that prints multiples of 3 between 1 and 100

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d\n", i);
	}

	return 0;
}