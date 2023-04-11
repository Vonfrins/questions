#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h>


// 猜数
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
			printf("猜小了，再试一次\n");
		}

		else if (num < x)
		{
			printf("猜大了，再试一次\n");
		}

		else
		{
			printf("恭喜猜对了\n您一共猜了%d次", count + 1);
			break;
		}
		count++;
	}


	return 0;
}