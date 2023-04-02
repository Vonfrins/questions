//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
//
////在一个有序数组中查找具体的某个数字n
////Find the number n in a sorted array
//
//
//int Search(int* arr, int x,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] == x)
//			return i;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int x = 0;
//	scanf("%d", &x);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//
//	if (Search(arr,x,sz) != 0)
//		printf("找到了，且下标为:%d", Search(arr,x,sz));
//	else
//		printf("未找到");
//
//
//	return 0;
//}