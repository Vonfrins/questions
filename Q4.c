#define _CRT_SECURE_NO_WARNINGS 1

// дһ�������ж���������Ƿ�Ϊ����
// Write a function to determine whether the input year is a leap year

#include<stdio.h>

int Is_leap_year(int y)
{
	if (y % 400 == 0 || y % 100 != 0 && y % 4 == 0)
		return 1; 
}

int main()
{
	int year = 0;

	scanf("%d",&year);
	int k=Is_leap_year(year);
	if (1 == k)
		printf("%d��������", year);
	else
		printf("%d�겻������", year);

	return 0;
}