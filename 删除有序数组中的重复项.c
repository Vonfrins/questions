#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// ɾ�����������е��ظ���

//����һ���������е����� nums ������ԭ��ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ��ֻ����һ�Σ�����ɾ����������³��ȡ�
//Ԫ�ص����˳��Ӧ�ñ���һ�¡�Ȼ�󷵻� nums ��ΨһԪ�صĸ�����


// ˼·��ʹ��˫ָ��

int removeDuplicates(int* nums, int numsSize)
{
	if (numsSize == 0)
		return 0;

	int i = 0;                    // ��������ָ�� i,j ��iָ��������Ԫ�ص�ַ��jָ��ڶ���Ԫ�صĵ�ַ����i����ʾ�޸ĺ������ĩβ
	for (int j = 1; j < numsSize; j++)  // ��j�� �������飬Ѱ���ظ�Ԫ��
	{
		if (nums[j] != nums[i])   // (���������ȵ�Ԫ�أ���i���ı�)����������ͬ��Ԫ�أ����µķ��ظ�Ԫ����
		{
			i++;                  // ��iָ�����
			nums[i] = nums[j];    // �����µķ��ظ�Ԫ�أ�nums[j]������i
		}
	}
	return i + 1;   // ��󷵻�������Ԫ�صĸ���
}


// ʵ�����Ժ���
int main()
{
	int nums[] = { 1, 1, 2, 2, 3, 4, 4, 4, 5 };
	int numsSize = sizeof(nums) / sizeof(int);
	int newLength = removeDuplicates(nums, numsSize);

	printf("�³���Ϊ��%d\n", newLength);
	for (int i = 0; i < newLength; i++)
	{
		printf("%d ", nums[i]);
	}
	return 0;
}

