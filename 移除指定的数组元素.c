#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// (原地)移除指定的数组中的元素

// 双指针法

int removeElement(int* nums, int numsSize, int val)
{
	int head = 0;       // // 定义变量 head 来记录下一个不等于 val 的元素应该存放的位置，初始值为 0。

	for (int i = 0; i < numsSize; i++)        // 循环遍历整个数组
	{
		if (nums[i] != val)         // 如果当前元素不等于要移除的元素 val
		{
			nums[head] = nums[i];             // 将当前元素赋值给 head 指向的位置
			head++;                 // 将 head 指针向后移动一位
		}
	}
	return head;       // 返回移除后的数组长度
}


// 建议: 将这段代码与 删除数组重复项 对比阅读

// 注意区分二者区别！