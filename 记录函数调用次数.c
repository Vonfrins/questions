#define _CRT_SECURE_NO_WARNINGS 1

// дһ��������ÿ����һ�����������num��ֵ������1
// Write a function that increases the value of num by 1 each time the function is called

#include<stdio.h>

void Call(int* p)
{
	(*p)++;
}

int main()
{
	int p = 0;
	
	Call(&p);
	Call(&p);
	Call(&p);
	printf("%d\n",p);

	return 0;
}