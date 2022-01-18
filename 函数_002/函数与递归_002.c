#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"

//====================================自定义头文件的引用========================

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//}

//==============================最简单递归====================================

//int main()
//{
//	return 0;          //导致stack overflow(栈溢出)
//}                      //栈区：存局部变量...，堆区：存动态变量...，静态区：存全局变量，static...

//========================利用函数递归打印输入数每位上的数====================

//void print(int n)
//{
//	if (n > 9)            //不断的判断后，动作从最里面先结束
//	{                     //这里栈没有溢出，因为有条件使他结束
//		print(n / 10);
//	}
//	printf("%d", n%10);
//}
//
//int main()
//{
//	unsigned num;
//	scanf("%d", &num);
//	print(num);
//}

//===========================函数不赋值，用递归计算字符串长度========================

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		str++;
//		return 1 + my_strlen(str);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//
//	return 0;
//}

//====================================递归n的阶乘==============================

//int fac(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//	{
//		return x* fac(x - 1);
//	}
//}
//
//int main()
//{
//	int ret;
//	int num;
//
//	scanf("%d", &num);
//	ret = fac(num);
//	printf("%d", ret);
//
//	return 0;
//}

//===============================递归斐波那契数列=========================
//                                  青蛙跳台阶
//1 1 2 3 5 8 13 21 34 55

int count = 0;
int Fib(int n)
{
	if (3 == n)      //看看第三个被算了多少次
		count++;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);//想象一下一个数要两个数相加，而下面两个数又
	}                                  //要两个数相加，数字越大空间内存时间开销越大
}                                      //此时递归是不合适的

int Fib2 (int n)                       //循环版(速度快了非常之多)
{
	int a = 1;
	int b = 1;
	int c = 1;
	for (n;n > 2;n--)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret  = Fib2(n);
	printf("%d\n", ret);
	printf("count = %d\n", count);

	return 0;
}
//剑指offer
//自主思考：汉诺塔