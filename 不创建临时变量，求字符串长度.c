#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

// 编写函数不允许创建临时变量，求字符串长度
// (函数递归的思想)


int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;

}

int main()
{
	char str[10];
	gets(str);

	int len = my_strlen(str);
	printf("字符串长度为= %d", len);

	return 0;
}