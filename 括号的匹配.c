#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


// ջ��ʵ������ƥ��
//bool BracketCheck(char* s)
//{
//	SqStack S;
//	InitStack(S);
//	int len = strlen(s);
//
//	for (int i=0;i<len;i++)
//	{
//		if (s[i] == '(' || s[i] == '[' || s[i]=='{')
//		{
//			Push(S, s[i]);
//		}
//		else
//		{
//			if (StackEmpty(S))
//				return false;
//			char topElem;
//			Pop(S,topElem);
//			if (s[i] == ')' && topElem != '(')
//				return false;
//			if (s[i] == ']' && topElem != '[')
//				return false;
//			if (s[i] == '}' && topElem != '{')
//				return false;
//		}
//	}
//	return StackEmpty(S);
//}
//



// ���������������������׶���
#include<stdbool.h>
bool isValid(char* s)
{
	int len = strlen(s);
	char* stack = (char*)malloc(len * sizeof(char));
	int top = -1;

	for (int i = 0; i < len; i++)
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
		{
			top += 1;
			stack[top] = s[i];
		}
		else if (s[i] == ')')
		{
			if (top < 0 || stack[top] != '(')
			{
				free(stack);
				return false;
			}
			else
				top--;
		}
		else if (s[i] == ']')
		{
			if (top < 0 || stack[top] != '[')
			{
				free(stack);
				return false;
			}
			else
				top--;
		}
		else if (s[i] == '}')
		{
			if (top < 0 || stack[top] != '{')
			{
				free(stack);
				return false;
			}
			else
				top--;
		}
	}
	if (top == -1)
	{
		free(stack);
		return true;
	}
	else
	{
		free(stack);
		return false;
	}
}




// �����취����ݣ�

bool isValid(char* s) {
	char a[10000] = " ", t; // ����һ����СΪ10000���ַ�����a����ʼ��Ϊ�ո�tΪ��ʱ����
	int i = 0, top = 0; // iΪѭ��������topΪջ��ָ��

	while (s[i] != '\0') { // �����ַ���s
		if (s[i] == '(' || s[i] == '{' || s[i] == '[') { // �����������
			if (s[i] == '(') t = ')'; // �������������ͣ�������Ӧ��������
			if (s[i] == '{') t = '}';
			if (s[i] == '[') t = ']';
			top++; // ջ��ָ������
			a[top] = t; // ��������ջ
		}
		else { // �����������
			if (a[top] != s[i])
				return false; // ջ��Ԫ���������Ų�ƥ�䣬����false
			else
				top--; // ջ��ָ������
		}
		i++; // i����
	}
	if (top == 0)
		return true; // ջΪ�գ��������Ŷ�ƥ��ɹ�������true
	else
		return false; // ջ��Ϊ�գ�����ƥ��ʧ�ܣ�����false
}



// �����������ڲ��Կ�ִ����
int main()
{
	char input[100];
	printf("������һ��ֻ�������ŵ��ַ�����\n");
	gets(input);
	bool result = isValid(input);
	if (result)
	{
		printf("����ƥ��ɹ���\n");
	}
	else
	{
		printf("����ƥ��ʧ�ܣ�\n");
	}
	return 0;
}
