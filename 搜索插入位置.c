#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。



int searchInsert(int* nums, int numsSize, int target)
{
	int left = 0;
	int right = numsSize - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (target > nums[mid])
			left = mid + 1;
		else if (target < nums[mid])
			right = mid - 1;
		else if (target == nums[mid])
			return mid;

	}
	if (target > nums[numsSize - 1])
		return numsSize;
	else if (target < nums[0])
		return 0;
	else
		return left;
}


int main()
{
	int nums[] = { 1,3,5,6 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int target = 0;
	scanf("%d", &target);

	printf("%d\n", searchInsert(nums, numsSize, target));
	return 0;
}
