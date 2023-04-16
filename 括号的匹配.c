#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


// 栈来实现括号匹配
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



// 笨蛋方法（很慢，但是易懂）
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




// 聪明办法（快捷）

bool isValid(char* s) {
	char a[10000] = " ", t; // 创建一个大小为10000的字符数组a，初始化为空格，t为临时变量
	int i = 0, top = 0; // i为循环变量，top为栈顶指针

	while (s[i] != '\0') { // 遍历字符串s
		if (s[i] == '(' || s[i] == '{' || s[i] == '[') { // 如果是左括号
			if (s[i] == '(') t = ')'; // 根据左括号类型，设置相应的右括号
			if (s[i] == '{') t = '}';
			if (s[i] == '[') t = ']';
			top++; // 栈顶指针上移
			a[top] = t; // 右括号入栈
		}
		else { // 如果是右括号
			if (a[top] != s[i])
				return false; // 栈顶元素与右括号不匹配，返回false
			else
				top--; // 栈顶指针下移
		}
		i++; // i自增
	}
	if (top == 0)
		return true; // 栈为空，所有括号都匹配成功，返回true
	else
		return false; // 栈不为空，括号匹配失败，返回false
}



// 主函数，用于测试可执行性
int main()
{
	char input[100];
	printf("请输入一个只包含括号的字符串：\n");
	gets(input);
	bool result = isValid(input);
	if (result)
	{
		printf("括号匹配成功！\n");
	}
	else
	{
		printf("括号匹配失败！\n");
	}
	return 0;
}
