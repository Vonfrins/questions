#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// (ԭ��)�Ƴ�ָ���������е�Ԫ��

// ˫ָ�뷨

int removeElement(int* nums, int numsSize, int val)
{
	int head = 0;       // // ������� head ����¼��һ�������� val ��Ԫ��Ӧ�ô�ŵ�λ�ã���ʼֵΪ 0��

	for (int i = 0; i < numsSize; i++)        // ѭ��������������
	{
		if (nums[i] != val)         // �����ǰԪ�ز�����Ҫ�Ƴ���Ԫ�� val
		{
			nums[head] = nums[i];             // ����ǰԪ�ظ�ֵ�� head ָ���λ��
			head++;                 // �� head ָ������ƶ�һλ
		}
	}
	return head;       // �����Ƴ�������鳤��
}


// ����: ����δ����� ɾ�������ظ��� �Ա��Ķ�

// ע�����ֶ�������