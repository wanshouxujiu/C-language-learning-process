#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"

//====================================�Զ���ͷ�ļ�������========================

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//}

//==============================��򵥵ݹ�====================================

//int main()
//{
//	return 0;          //����stack overflow(ջ���)
//}                      //ջ������ֲ�����...���������涯̬����...����̬������ȫ�ֱ�����static...

//========================���ú����ݹ��ӡ������ÿλ�ϵ���====================

//void print(int n)
//{
//	if (n > 9)            //���ϵ��жϺ󣬶������������Ƚ���
//	{                     //����ջû���������Ϊ������ʹ������
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

//===========================��������ֵ���õݹ�����ַ�������========================

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

//====================================�ݹ�n�Ľ׳�==============================

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

//===============================�ݹ�쳲���������=========================
//                                  ������̨��
//1 1 2 3 5 8 13 21 34 55

int count = 0;
int Fib(int n)
{
	if (3 == n)      //���������������˶��ٴ�
		count++;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);//����һ��һ����Ҫ��������ӣ���������������
	}                                  //Ҫ��������ӣ�����Խ��ռ��ڴ�ʱ�俪��Խ��
}                                      //��ʱ�ݹ��ǲ����ʵ�

int Fib2 (int n)                       //ѭ����(�ٶȿ��˷ǳ�֮��)
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
//��ָoffer
//����˼������ŵ��