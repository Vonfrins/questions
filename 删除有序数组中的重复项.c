#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// 删除有序数组中的重复项

//给你一个升序排列的数组 nums ，请你原地删除重复出现的元素，使每个元素只出现一次，返回删除后数组的新长度。
//元素的相对顺序应该保持一致。然后返回 nums 中唯一元素的个数。


// 思路：使用双指针

int removeDuplicates(int* nums, int numsSize)
{
	if (numsSize == 0)
		return 0;

	int i = 0;                    // 设置两个指针 i,j ，i指向数组首元素地址，j指向第二个元素的地址，用i来表示修改后数组的末尾
	for (int j = 1; j < numsSize; j++)  // 用j来 遍历数组，寻找重复元素
	{
		if (nums[j] != nums[i])   // (如果遇到相等的元素，则i不改变)若遇到不相同的元素，即新的非重复元素则
		{
			i++;                  // 则将i指针后移
			nums[i] = nums[j];    // 并将新的非重复元素（nums[j]）赋给i
		}
	}
	return i + 1;   // 最后返回新数组元素的个数
}


// 实例测试函数
int main()
{
	int nums[] = { 1, 1, 2, 2, 3, 4, 4, 4, 5 };
	int numsSize = sizeof(nums) / sizeof(int);
	int newLength = removeDuplicates(nums, numsSize);

	printf("新长度为：%d\n", newLength);
	for (int i = 0; i < newLength; i++)
	{
		printf("%d ", nums[i]);
	}
	return 0;
}

