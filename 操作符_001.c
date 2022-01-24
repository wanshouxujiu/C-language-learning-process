#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//========================================左移右移========================================
// 只能用于整数
//算数移位，用符号补位
//逻辑移位，直接用0补位

//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("%d", b);
//
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = a << 1;        //补码左移
//	printf("%d", b);
//
//	return 0;
//}

//=========================================&&,||,^=========================================
//只能用于整数

//int main()
//{
	//int a = 5;
	//int b = 3;
	//int c = a & b;     //二进制补码每一位相与
	//printf("%d", c);
	////......00000101
	////......00000010
	////......00000001

	//int a = 5;
	//int b = 3;
	//int c = a | b;
	//printf("%d", c);

	//int a = 5;
	//int b = 3;
	//int c = a ^ b;
	//printf("%d", c);

//	return 0;
//}

//======================================整数在储存中二进制1的个数==============================

//int main()
//{
//	int num = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//复合赋值符:+=,-=,/=,*=,%=,>>=,<<=,&=,|=,^=

//单目操作符:!,&,*,-,+,~,++,--,sizeof,(类型)

int main()
{
	int a = 10;
	char b = 'r';
	char* c = &b;
	int arr[10] = { 0 };
        //sizeof()内部的表达式不参与运算，例如sizeof(a = a + 10),a并不会发生变化
	
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(int [5]));
	return 0;
}
