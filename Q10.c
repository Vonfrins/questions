#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>


// 演示多个字符从两端移动，向中间汇聚
//Demonstrates that multiple characters move from both ends, converging toward the middle



int main()
{
	char str1[100];
	char str2[100];

	fgets(str1,sizeof(str1),stdin);
	int sz=strlen(str1)-1;

	for (int i = 0,  j=sz-1; i < j; i++)
	{
		str2[i] = '-';
		str2[j] = '-';
	}

	str2[sz] = '\0';

	printf("%s",str2);

	return 0;
}

