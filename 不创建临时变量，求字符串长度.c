#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

// ��д��������������ʱ���������ַ�������
// (�����ݹ��˼��)


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
	printf("�ַ�������Ϊ= %d", len);

	return 0;
}