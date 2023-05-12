#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* addBinary(char* a, char* b)
{
	int lenA = strlen(a);   // 计算字符串a,b的长度
	int lenB = strlen(b);
	int maxlen = (lenA > lenB) ? lenA : lenB;  // 判断a b中较长的字符串的长度
	int resultlen = maxlen + 1;   // 结果的长度可能比最长的输入字符串长度多 1
	char* result = (char*)malloc((resultlen + 1) * sizeof(char));  // 动态分配内存（注意最后的free） 
	result[resultlen] = '\0';   //  添加字符串结束符 (避免乱码) 

	int i = lenA - 1;
	int j = lenB - 1;
	int k = resultlen - 1;
	int carry = 0;

	for (; k >= 0; i--, j--, k--)
	{
		int bitA = (i >= 0) ? (a[i] - '0') : 0;  // a[i],b[j]代表的是字符'1'和'0'，对应的ASCII码值为49，48,并非能够直接参与运算的1,0，故需要减去'0'
		int bitB = (j >= 0) ? (b[j] - '0') : 0;  // 不够最高位的话需要补0

		int sum = bitA + bitB + carry;  // 计算当前位的和

		carry = sum / 2;  // 更新进位

		result[k] = sum % 2 + '0';   // 更新结果
	}

	// 移除前导0 （如果有）
	if (result[0] == '0' && result[1] != '\0')
	{
		for (int l = 0; l < resultlen; l++)
		{
			result[l] = result[l + 1];
		}
		resultlen - 1;
	}

	return result;

}


int main()
{
	char a[] = "11";
	char b[] = "1";

	char* sum = addBinary(a, b);
	printf("相加的结果为：%s\n", sum);

	free(sum); // 释放动态分配的内存

	return 0;
}