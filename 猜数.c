#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h>


// ����
// Guess a number

int main()
{
	srand(time(0));
	int num = rand() % 10;

	int x = 0;
	int count = 0;

	while (1)
	{
		scanf("%d", &x);
		if (num > x)
		{
			printf("��С�ˣ�����һ��\n");
		}

		else if (num < x)
		{
			printf("�´��ˣ�����һ��\n");
		}

		else
		{
			printf("��ϲ�¶���\n��һ������%d��", count + 1);
			break;
		}
		count++;
	}


	return 0;
}