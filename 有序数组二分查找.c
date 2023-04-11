#define _CRT_SECURE_NO_WARNINGS 1

// 写一个函数，实现一个整型有序数组的二分查找
// Write a function to implement binary search of an integer ordered sequence


#include<stdio.h>

int Binary_search(int* arr, int sz, int i)
{
	int left = 0;
	int right = sz-1;
	

	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (i < arr[mid])
			right = mid - 1;
		else if (i > arr[mid])
			left = mid + 1;
		else
			return mid;
	}
	return 0;


}

int main()
{
	int arr[] = { 2,4,6,8,10,12,14,16,18,20 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	scanf("%d",&i);
	if (Binary_search(arr, sz, i) != 0)
		printf("找到了，且下标为%d", Binary_search(arr, sz, i));

	else
		printf("没找到");
	return 0;
}