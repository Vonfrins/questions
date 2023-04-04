#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// 写入一个代码，将三个数由大到小排序
// Write a code that sorts three numbers from largest to smallest


// 笨蛋办法

int main()
{
	int x = 0, y = 0, z = 0;
	scanf("%d,%d,%d",&x,&y,&z);
	
	if (x > y)
	{
		if (x > z)
		{
			if (y > z)
				printf("%d,%d,%d", x, y, z);
			else
				printf("%d,%d,%d", x, z, y);
		}
		else
			printf("%d,%d,%d",z,x,y);
	}
	else
	{
		if (y > z)
		{
			if (x > z)
				printf("%d,%d,%d", y, x, z);
			else
				printf("%d,%d,%d", y, z, x);
		}
		else
			printf("%d,%d,%d", z, y, x);
	}
	return 0;
}




// 聪明办法

int main()
{
	int x = 0, y = 0, z = 0;
	scanf("%d,%d,%d",&x,&y,&z);

	if (x < y)
	{
		int n = 0;
		n = y;
		y = x;
		x = n;
	}
	if (x < z)
	{
		int n = 0;
		n = z;
		z = x;
		x = n;
	}
	if (y < z)
	{
		int n = 0;
		n = z;
		z = y;
		y = n;
	}
	printf("%d > %d > %d", x, y, z);

	return 0;
}