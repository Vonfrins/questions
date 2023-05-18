#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// 使用双"指针"法 （这里的"指针"并不是指真的指针,而是起指针作用的整型数组下标）

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	int i = m - 1;
	int j = n - 1;
	int k = m + n - 1;

	while (i >= 0 && j >= 0)
	{
		if (nums1[i] > nums2[j])
		{
			nums1[k] = nums1[i];
			i--;
		}
		else
		{
			nums1[k] = nums2[j];
			j--;
		}
		k--;
	}

	while (j >= 0)
	{
		nums1[k] = nums2[j];
		j--;
		k--;
	}

}