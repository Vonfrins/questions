#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>


// 演示多个字符从两端移动，向中间汇聚
//Demonstrates that multiple characters move from both ends, converging toward the middle



int main()
{
	char str1[10];
	char str2[10];

	fgets(str1, sizeof(str1), stdin);
	int sz = strlen(str1) - 1;

	for (int i = 0; i < sz; i++)
	{
		str2[i] = str1[i];
	}


	for (int i = 0, j = sz; i < j; i++, j--)
	{
		str2[i] = '-';
		str2[j] = '-';
		printf("%s", str2);
		Sleep(500);
	}


	return 0;
}