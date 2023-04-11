#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//  ¼ÆËãnµÄ½×³Ë
//  Calculate the factorial of n



int main()
{
	int n = 0;
	int i = 0;

	scanf("%d", &n);
	int m = n;

	for (i=1;i<n;i++)
	{
		m *= i;
	}
	
	printf("%d", m);

	return 0;
}