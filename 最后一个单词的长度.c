#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//����һ���ַ��� s�������ɵ�����ɣ�����ǰ����һЩ�ո��ַ������������ַ����� ���һ�� ���ʵĳ��ȡ�
//���� ��ָ������ĸ��ɡ��������κοո��ַ���������ַ�����

int lengthOfLastWord(char* s)
{
	int length = strlen(s);
	int count = 0;

	int i = length - 1;
	while (i >= 0 && s[i] == ' ')
	{
		i--;
	}
	for (i; i >= 0 && s[i] != ' '; i--)
	{
		count++;
	}
	return count;
}


int main()
{
	char s[100];
	gets(s);
	int l = lengthOfLastWord(s);
	printf("%d", l);
}