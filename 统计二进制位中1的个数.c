#define _CRT_SECURE_NO_WARNINGS 1

// ͳ�ƶ�����λ��1�ĸ��� (32)
// Count the number of ones in the binary bit


// �ҵı����ⷨ��
 
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



// ���Ҵ���һ��ģ� (��Ҫ�Ǹ���Ч)

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