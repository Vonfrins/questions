#define _CRT_SECURE_NO_WARNINGS 1

// ÄæÖÃÒ»¸ö×Ö·û´®

#include <stdio.h>
#include<stdlib.h>

void reverse(char* str,int len)
{
	char* start = str;
	char* end = str;
	char tmp;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}

int main()
{	
	char str[] = "I wanna be a great programmer";
	int len = strlen(str);

	reverse(str,len);
	printf("%s\n",str);

	return 0;
}