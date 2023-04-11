#define _CRT_SECURE_NO_WARNINGS 1

// 统计二进制位中1的个数 (32)
// Count the number of ones in the binary bit


// 我的笨蛋解法：
 
#include<stdio.h>

int Count(int x);

//int Count(int x)
//{
//	int j = 0; 
//	for (int i = 0; i < 32; i++)
//	{
//		if (1 == (x >> i & 1))
//		{
//			j++;
//		}
//	}
//	return j;
//}
//
//
//int main()
//{
//	int x = 0;
//	int c;
//
//	scanf("%d",&x);
//	c = Count(x);
//	printf("%d",c);
//
//	return 0;
//}



// 比我聪明一点的： (主要是更高效)

int Count(int x)
{
	int count = 0;
	while (x)
	{
		x = x & (x - 1);
		count++;
	}
	return count;
}

int main()
{
	int x = 0;
	int c = 0;

	scanf("%d", &x);
	c = Count(x);
	printf("%d",c);

	return 0;
}