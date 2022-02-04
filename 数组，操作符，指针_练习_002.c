#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//=================================二进制补码中的个数====================================
//int count_bit_one(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a /= 2;
//	}
//	return count;
//}

//int count_bit_one(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("%d", count);
//
//	return 0;
//}

//===================================打印一个数二进制奇数位和偶数位==========================

//void print(int m)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//=================================数组内容倒序===================================

//int my_strlen(char arr[])
//{
//	int i = 0;
//	int count = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//		count++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	for (; left < right;)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//递归方案
//int my_strlen(char arr[])
//{
//	int i = 0;
//	int count = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//		count++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr) - 1;
//	arr[0] = arr[len];
//	arr[len] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//====================================每位数字之和=====================================

//int Digitsum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return Digitsum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//int main()
//{
//	unsigned int num;
//	scanf("%d", &num);
//	int ret = Digitsum(num);
//	printf("%d", ret);
//	return 0;
//}

//=================================n的k次方==========================================

double pow(int n, int k)
{
	if (k < 0)
	{
		return (1.0 / (pow(n, -k)));
	}
	else if (k > 0)
	{
		return n * pow(n, k - 1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = pow(n, k);
	printf("%lf", ret);

	return 0;
}