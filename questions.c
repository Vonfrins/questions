#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>




//// �ж�һ�����Ƿ�������

//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	if (n % 2 == 1)
//		printf("������");
//
//	return 0;
//}


// ���0-100֮�������

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


// ��ӡ100-200֮������� (���ú�����ʽ)

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

//��ӡ100-200֮������� (������ʽ)

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



//// дһ�������ж�һ���ǲ�������

//int main()
//{
//	int year = 0;
//	scanf_s("%d", &year);
//	if (is_leap_year(year) == 1)
//		printf("������");
//	return 0;
//}



//дһ������ʵ��һ�������������еĶ��ֲ���

//int main()
//{
//	int arr[] = { 1,2,3,5,7,9,17,21,56,100 };
//	int k ;
//	scanf_s("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int net = binary_search(arr, k, sz);
//	if (net == 1)
//		 printf("û�ҵ�");
//	else
//		 printf("�ҵ��ˣ����±�Ϊ %d", net);
//	return 0;
//}



//дһ��������ÿ����һ������������ͻὫnum��ֵ����1

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



//����n�Ľ׳�

//int main()
//{
//	int n ,i;
//	int m = 1;
//	scanf_s("%d", &n);
//	if (n <= 0)
//		printf("�����ڽ׳�");
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



// ����1��+2��+3��+.....+10!

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



//��һ�����������в��Ҿ����ĳ������n (ͬ���ַ�)

//int main()
//{
//	int arr[] = { 1,3,6,32,46,67,89,91,109,176 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n;
//	scanf_s("%d", &n);
//	int i = binary_search(arr, n, sz);
//	if (i == 1)
//		printf("δ�ҵ�");
//	else
//		printf("�ҵ��ˣ����±�Ϊ %d", i);
//	return 0;
//		
//}



//��ʾ����ַ��������ƶ������м���

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




//д��һ�����룬���������ɴ�С����

// ����һ

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

//�����

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


//дһ�������ӡ1-100֮��3�ı���

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


//���������������������������Լ��

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


// ��ӡ1000-2000��֮�������

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




//����

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
//			printf("�´��ˣ�����");
//			count++;
//		else if (x < num)
//		}
//		{
//			printf("�´��ˣ�С��");
//			count++;
//		}
//	}
//	count++;
//	printf("�¶���,��һ������%d��", count);
//	return 0;
//}



//����������

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




//�����ķֽ�

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



// �ж϶Գ���

//�����������������һ��ģ�

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


//���Ž⣨����woc��

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




//дһ����������������ȷ����[0,9]��Χ�ڵ�������ͳ��ÿһ�����ֳ��ֵĴ�������-I��ʾ����(�����Ӧ��)

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



//��ͣ�������

// int sum(int begin, int end)
//{
//	int i;
//	int sum = 0;
//	for (i = begin; i <= end; i++)
//	{
//		sum += i;
//	}
//	printf("%d �� %d �ĺ��� %d", begin, end, sum);
//}
//
//int main()
//{
//	int a, b;
//	scanf_s("%d %d",&a,&b);
//	sum(a, b);
//	return 0;
//}



//ĳ���뽫���е�һ����ֵ100Ԫ������һ���10Ԫ��5Ԫ��2Ԫ��1Ԫ��ֵ��Ʊ�ӡ�Ҫ������40�ţ���ÿ��Ʊ������һ�š��ʣ��м��ֻ�����

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




//����N������NС�ڵ���100�����������������ֵĳ��ִ�����
//����ĸ�ʽ������
//��һ������Ҫ���Ԫ�ظ���������5
//�ڶ�������  1 2 2 3 2����ô������Ϊ3����Ϊ2������3��

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
//		printf("%d ������ %d ��\n", i, count[i]);
//	}
//	
//
//	return 0;
//}


//����N������NС�ڵ���100�������2�ĳ��ִ�����
//����ĸ�ʽ������
//��һ������Ҫ���Ԫ�ظ���������5
//�ڶ�������  1 2 2 3 2����ô������Ϊ3����Ϊ2������3��


//�ҵĽⷨ

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



//�����ⷨ

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




// ð���������飩

//void bubble_sort(int arr[])
//{
//	int i;
//	for (i=0;i<5-1;i++)                               // ȷ��ð�����������
//	{
//		// ÿһ��ð�����������
//		int flag = 1;                                 // ������һ��Ҫ����������Ѿ�����
//		int j; 
//		for (j = 0; j < 5-1-i; j++)                   // ÿһ�˵ıȽϴ��� (ÿһ�˵ıȽϴ������ڱ仯)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int n = 0;
//				n = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = n;
//				flag = 0;                             // ������������ݲ���ȫ����
//			}
//		}
//		if (flag == 1)                                // ����һ��������û�н��н���������������Ƚ�
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



// ��������ʱ������ʵ���������Ľ���

// ����һ �Ӽ��� (�˷�����ȱ�ݣ����ܻ����)

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



// ������  ��� (ִ��Ч�ʵͣ��ɶ��Բ�)

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




// ��һ�������洢���ڴ��еĶ������� 1 �ĸ���

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





// ģ��ʵ�� strlen ���ַ���

// ����һ��

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



// ��������

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



// �������� 

// ����ԭ�� ����ָ���ȥ��С��ָ�룬 �õ�����ָ��֮��Ԫ�صĸ���

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




// ָ�������� ע������

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p ", &arr[i]);                  // ����������Ԫ�ص�ַ 
//	}
//	printf("\n");
//
// 
//	for (i = 0; i < 10; i++)                    // ������Ԫ�صĵ�ַ
//	{
//		printf("%p ", p);
//	}
//	printf("\n");
//
// 
//	for (i = 0; i < 10; i++)                    //  ������
//	{
//		printf("%p ", *p);
//	}
//	printf("\n");
// 
// 
// 	for (i = 0; i < 10; i++)                    // ����������Ԫ�صĵ�ַ
//	{
//		printf("%p ", p + i);
//	}
//	printf("\n");
// 
// 
//	for (i = 0; i < 10; i++)                    // ������
//	{
//		printf("%p ", *(p + i));
//	}
//	printf("\n");
//
//	return 0;
//}
