#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* addBinary(char* a, char* b)
{
	int lenA = strlen(a);   // �����ַ���a,b�ĳ���
	int lenB = strlen(b);
	int maxlen = (lenA > lenB) ? lenA : lenB;  // �ж�a b�нϳ����ַ����ĳ���
	int resultlen = maxlen + 1;   // ����ĳ��ȿ��ܱ���������ַ������ȶ� 1
	char* result = (char*)malloc((resultlen + 1) * sizeof(char));  // ��̬�����ڴ棨ע������free�� 
	result[resultlen] = '\0';   //  ����ַ��������� (��������) 

	int i = lenA - 1;
	int j = lenB - 1;
	int k = resultlen - 1;
	int carry = 0;

	for (; k >= 0; i--, j--, k--)
	{
		int bitA = (i >= 0) ? (a[i] - '0') : 0;  // a[i],b[j]��������ַ�'1'��'0'����Ӧ��ASCII��ֵΪ49��48,�����ܹ�ֱ�Ӳ��������1,0������Ҫ��ȥ'0'
		int bitB = (j >= 0) ? (b[j] - '0') : 0;  // �������λ�Ļ���Ҫ��0

		int sum = bitA + bitB + carry;  // ���㵱ǰλ�ĺ�

		carry = sum / 2;  // ���½�λ

		result[k] = sum % 2 + '0';   // ���½��
	}

	// �Ƴ�ǰ��0 ������У�
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
	printf("��ӵĽ��Ϊ��%s\n", sum);

	free(sum); // �ͷŶ�̬������ڴ�

	return 0;
}