#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

char* longestCommonPrefix(char** strs, int strsSize)
{
	int i, j, flag = 0;

	if (strsSize == 0)
		return "";

	for (j = 0; j < strlen(strs[0]); j++)
	{
		for (i = 1; i < strsSize; i++)
		{
			if (strs[0][j] != strs[i][j])
			{
				strs[0][j] = '\0';
				flag = 1;
				break;
			}
		}
	}
	return strs[0];
}

#define MAXSIZE 100
int main()
{
	char* str[MAXSIZE];
	int flag = 1, i = 0;

	while (flag)
	{
		printf("请输入字符串\n");
		str[i] = (char*)malloc(sizeof(char) * MAXSIZE);
		scanf("%s", str[i]);
		i++;

		printf("继续输入请按1，停止输入请按0\n");
		scanf("%d", &flag);
	}

	printf("输入所有数组的最大前缀为:%s\n", longestCommonPrefix(str, i));

	return 0;
}

