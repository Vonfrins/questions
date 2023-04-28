#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//给你一个字符串 s，由若干单词组成，单词前后用一些空格字符隔开。返回字符串中 最后一个 单词的长度。
//单词 是指仅由字母组成、不包含任何空格字符的最大子字符串。

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