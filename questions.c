#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>




//// 判断一个数是否是奇数

//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	if (n % 2 == 1)
//		printf("是奇数");
//
//	return 0;
//}


// 输出0-100之间的奇数

//int main()
//{
//	int  n =1;
//	while (n<= 100)
//	{
//		if (n % 2 == 1)
//			printf("%d\n", n);
//		n++;
//	}
//	return 0;
//}


// 打印100-200之间的素数 (调用函数形式)

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i)== 1)
//			printf("%d\n", i);
//	}
//	return 0; 
//}

//打印100-200之间的素数 (正常形式)

//int main()
//{
//	int i;
//	for (i = 100; i < 200; i++)
//	{
//		int n;
//		int is_prime = 1;
//		for (n = 2; n < i; n++)
//		{
//			if (i % n ==0)
//				is_prime = 0;
//			break;
//		}
//		if (is_prime == 1)
//			printf("%d\n", i);
//	}
//	printf("\n");	
//}



//// 写一个函数判断一年是不是闰年

//int main()
//{
//	int year = 0;
//	scanf_s("%d", &year);
//	if (is_leap_year(year) == 1)
//		printf("是闰年");
//	return 0;
//}



//写一个函数实现一个整形有序数列的二分查找

//int main()
//{
//	int arr[] = { 1,2,3,5,7,9,17,21,56,100 };
//	int k ;
//	scanf_s("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int net = binary_search(arr, k, sz);
//	if (net == 1)
//		 printf("没找到");
//	else
//		 printf("找到了，且下标为 %d", net);
//	return 0;
//}



//写一个函数，每调用一次这个函数，就会将num的值增加1

//int main()
//{
//	int num = 0;
//	SB(&num);
//	SB(&num);
//	SB(&num);
//	SB(&num);
//	printf("num= %d", num);
//
//}



//计算n的阶乘

//int main()
//{
//	int n ,i;
//	int m = 1;
//	scanf_s("%d", &n);
//	if (n <= 0)
//		printf("不存在阶乘");
//	else
//	{
//		for (i = 1; i <= n ; i++)
//		{
//			m *= i;
//		}
//		printf("%d", m);
//	}
//	return 0;
//}



// 计算1！+2！+3！+.....+10!

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 1;
//	for (m = 1; m <= 10; m++)
//	{
//		i *= m;
//		n += i;
//	}
//	printf("%d", n);
//	return 0;
//}



//在一个有序数组中查找具体的某个数字n (同二分法)

//int main()
//{
//	int arr[] = { 1,3,6,32,46,67,89,91,109,176 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n;
//	scanf_s("%d", &n);
//	int i = binary_search(arr, n, sz);
//	if (i == 1)
//		printf("未找到");
//	else
//		printf("找到了，且下标为 %d", i);
//	return 0;
//		
//}



//演示多个字符从两端移动，向中间汇聚

//int main()
//{
//	char arr1[] = "without no sacrifice there can be no victory";
//	char arr2[] = "--------------------------------------------";
//	int sz = strlen(arr1) - 1;
//	int left = 0;
//	int right = sz;
//	while (left < right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//
//	}
//	return 0;
//}




//写入一个代码，将三个数由大到小排序

// 代码一

//int main()
//{
//	int a, b, c;
//	int x, y, z;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		x = a;
//		if (c > a)
//			x = c;
//		else if (c > b)
//		{
//			y = c;
//			z = b;
//		}
//		else
//		{
//			y = b;
//			z = c;
//		}
//	}
//	else
//	{
//		x = b;
//		if (c > b)
//			x = c;
//		else if (c > a)
//		{
//			y = c;
//			z = a;
//		}
//		else
//		{
//			y = a;
//			z = c;
//		}
//	}
//	printf("%d %d %d", x, y, z);
//	return 0;
//}

//代码二

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int n = a;
//		a = b;
//		b = n;
//	}
//	if (a < c)
//	{
//		int n = a;
//		a = c;
//		c = n;
//	}
//	if (b < c)
//	{
//		int n = b;
//		b = c;
//		c = n;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
// }


//写一个代码打印1-100之间3的倍数

//int main()
//{
//	int n = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		int i = n % 3;
//		if (i == 0)
//		{
//			printf("%d\n", n);
//		}
//	}
//	return 0;
//}


//给定两个数，求这两个数的最大公约数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf_s(" %d %d", &a, &b);
//	if (a > b)
//	{
//		while (a%b)
//		{
//			i = a % b;
//			a = b;
//			b = i;
//		}
//		printf("%d\n",b);
//	}
//	return 0;
//}


// 打印1000-2000年之间的闰年

//int main()
//{
//	int year;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//			printf(" %d\n", year);
//	}
//	return 0;
//}




//猜数

//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand(time(0));
//	int num = rand() % 100;
//	int x=0;
//	int count = 0;
//	while (x != num)
//	{
//		scanf_s("%d", &x);
//		if (x > num)
//		{
//			printf("猜错了，大了");
//			count++;
//		else if (x < num)
//		}
//		{
//			printf("猜错了，小了");
//			count++;
//		}
//	}
//	count++;
//	printf("猜对了,您一共猜了%d次", count);
//	return 0;
//}



//整数的求逆

//int main()
//{
//	int num = 0;
//	int x = 0;
//	scanf_s("%d", &num);
//	while (num!=0)
//	{
//		x=num % 10;
//		printf("%d", x);
//		num /= 10;
//	}
//	return 0;
//}




//整数的分解

//int main()
//{
//	int x = 0;
//	int t;
//	int ref = 1;
//	scanf_s("%d", &x);
//	t = x;
//
//	while (t > 9)
//	{
//		t /= 10;
//		ref *= 10;
//	}
//
//	while (ref>0)
//	{
//		int y=x /ref;
//		printf("%d", y);
//		if (ref > 9)
//			printf(" ");
//		x %= ref;
//		ref /= 10;
//	}
//	return 0;
//}



// 判断对称数

//这他妈的是老子想了一天的！

//int main()
//{
//	int x;
//	int n;
//	int ref = 1;
//	int count = 1;
//
//	scanf_s("%d", &x);
//	n = x;
//
//	while (n > 9)
//	{
//		n /= 10;
//		ref *= 10;
//		count++;
//	}
//
//
//	int a, b,m;
//
//		for(m=count;m>1;m-=2,ref/=100)
//		{
//			a = x / ref;
//			b = x % 10;
//			x = (x - a *ref - b)/10;
//			if (a == b)
//				continue;
//			else
//			{
//				printf("no");
//				return 0;
//			}
//		}
//		printf("yes");
//
//	return 0;
//}


//最优解（聪明woc）

//int main()
//{
//	int a, b, c, ref;
//	scanf_s("%d", &a);
//	c = a;
//	b = 0;
//	while (a)
//	{
//		ref = a % 10;
//		b = b * 10 + ref;
//		a /= 10;
//	}
//	if (c == b)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}




//写一个程序，输入数量不确定的[0,9]范围内的整数，统计每一种数字出现的次数输入-I表示结束(数组的应用)

//int main()
//{
//	const int number = 10;
//	int i;
//	int count[10];
//	int x = 0;
//
//	for (i=0;i<number;i++)
//	{
//		count[i] = 0;
//	}
//
//	scanf_s("%d", &x);
//	while (x != -1)
//	{
//		if (0 <= x && x <= 9)
//			count[x]++;
//		scanf_s("%d", &x);
//	}
//	for (i = 0; i < number; i++)
//	{
//		printf("%d: %d\n",i,count[i]);
//	}
//	return 0;
//}
// 
//
//



//求和（函数）

// int sum(int begin, int end)
//{
//	int i;
//	int sum = 0;
//	for (i = begin; i <= end; i++)
//	{
//		sum += i;
//	}
//	printf("%d 到 %d 的和是 %d", begin, end, sum);
//}
//
//int main()
//{
//	int a, b;
//	scanf_s("%d %d",&a,&b);
//	sum(a, b);
//	return 0;
//}



//某人想将手中的一张面值100元的人民币换成10元、5元、2元和1元面值的票子。要求换正好40张，且每种票子至少一张。问：有几种换法？

//int main()
//{
//	int a, b, c, d;
//	int total = 0;
//	for (a = 1;a <= 40; a++)
//	{
//		for (b = 1; b <= 40; b++)
//		{
//			for (c = 1; c <= 40; c++)
//			{
//				for (d = 1; d <= 40; d++)
//				{
//					if (10 * a + 5 * b + 2 * c + d == 100 && a + b + c + d == 40)
//						total += 1;
//				}
//			}
//		}
//	}
//	printf("%d",total);
//	return 0;
//}




//输入N个数（N小于等于100），输出所输入的数字的出现次数；
//输入的格式是两行
//第一行输入要输的元素个数，比如5
//第二行输入  1 2 2 3 2，那么输出结果为3，因为2出现了3次

//int main()
//{
//	int n;
//	int i;
//	int k;
//	int m;
//	scanf_s("%d\n", &n);
//	int count[100];
//	for (i = 0; i < 100; i++)
//	{
//		count[i] = 0;
//	}
//	scanf_s("%d ",&k);
//	for (m = 1; m < n; m++)
//	{
//		count[k]++;
//		scanf_s("%d", &k);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d 出现了 %d 次\n", i, count[i]);
//	}
//	
//
//	return 0;
//}


//输入N个数（N小于等于100），输出2的出现次数；
//输入的格式是两行
//第一行输入要输的元素个数，比如5
//第二行输入  1 2 2 3 2，那么输出结果为3，因为2出现了3次


//我的解法

//int main()
//{
//	int n;
//	int i;
//	int k;
//	int m;
//	scanf_s("%d\n", &n);
//	int count[100];
//	for (i = 0; i < 100; i++)
//	{
//		count[i] = 0;
//	}
//	scanf_s("%d ",&k);
//	for (m = 1; m < n; m++)
//	{
//		count[k]++;
//		scanf_s("%d", &k);
//	}
//	printf("%d", count[2]);
//	return 0;
//}



//聪明解法

//int main()
//{
//	int a[100];
//	int total = 0;
//	int b;
//	scanf_s("%d",&b);
//	for (int i = 0; i < b; i++)
//	{
//		scanf_s("%d", &a[i]);
//		if (a[i] == 2)
//			total++;
//	}
//	printf("%d", total);
//	return 0;
//}




// 冒泡排序（数组）

//void bubble_sort(int arr[])
//{
//	int i;
//	for (i=0;i<5-1;i++)                               // 确定冒泡排序的趟数
//	{
//		// 每一趟冒泡排序的内容
//		int flag = 1;                                 // 假设这一趟要排序的数据已经有序
//		int j; 
//		for (j = 0; j < 5-1-i; j++)                   // 每一趟的比较次数 (每一趟的比较次数都在变化)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int n = 0;
//				n = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = n;
//				flag = 0;                             // 本趟排序的数据不完全有序
//			}
//		}
//		if (flag == 1)                                // 进行一次排序发现没有进行交换，就无需继续比较
//			break;
//	}
//}
//
//
//
//int main()
//{
//	int i=0;
//	int k = 0;
//	int arr[5];
//	for (i = 0; i < 5; i++)
//	{
//		arr[i] = 0;
//	}
//	while (k < 5)
//	{
//		scanf_s("%d ",&arr[k]);
//		k++;
//	}
//	bubble_sort(arr);
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//



// 不创建临时变量，实现两个数的交换

// 方法一 加减法 (此方法有缺陷，可能会溢出)

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
// 
//	printf("before  a=%d,b=%d\n", a,b);
// 
//	a = a + b;
//	b = a - b;
//	a = a - b;
// 
//	printf("after  a=%d,b=%d\n ",a,b);
// 
//	return 0;
//}



// 方法二  异或法 (执行效率低，可读性差)

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//
//	printf("before  a=%d,b=%d\n",a,b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("after  a=%d,b=%d\n",a,b);
//	return 0;
//}
//




// 求一个整数存储在内存中的二进制中 1 的个数

//int main()
//{
//	int i;
//	int count = 0;
//	int x = 0;
//	scanf("%d",&x);
//
//	for (i = 0; i < 32; i++)
//	{;
//		if (1==((x>>i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n",count);
//
//
//	return 0;
//}





// 模拟实现 strlen 三种方法

// 方法一：

//#include<string.h>
// int my_strlen(char* str)
//{
//  int count = 0;
//  while (*str != '\0')
//{
//	count++;
//	str++;
//}
//return count;
//}
// 
//int main()
//{
//	char arr[] = "fuck you";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//}



// 方法二：

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
// }
//
//int main()
//{
//	char arr[] = "fuck you";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//}
//



// 方法三： 

// 代码原理： （大）指针减去（小）指针， 得到的是指针之间元素的个数

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//
//
//int main()
//{
//	char arr[] = "I will be a great programmer";
//	int p = my_strlen(arr);
//
//	printf("%d\n",p);
//	return 0;
//}




// 指针与数组 注意区分

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p ", &arr[i]);                  // 数组中所有元素地址 
//	}
//	printf("\n");
//
// 
//	for (i = 0; i < 10; i++)                    // 数组首元素的地址
//	{
//		printf("%p ", p);
//	}
//	printf("\n");
//
// 
//	for (i = 0; i < 10; i++)                    //  解引用
//	{
//		printf("%p ", *p);
//	}
//	printf("\n");
// 
// 
// 	for (i = 0; i < 10; i++)                    // 数组中所有元素的地址
//	{
//		printf("%p ", p + i);
//	}
//	printf("\n");
// 
// 
//	for (i = 0; i < 10; i++)                    // 解引用
//	{
//		printf("%p ", *(p + i));
//	}
//	printf("\n");
//
//	return 0;
//}
