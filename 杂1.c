#include<stdio.h>

//===============================不定义第三个变量，交换a,b中的数======================
//int main()
//{
//	int a = 3;//可能溢出
//	int b = 5;
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d, b = %d", a, b);
//
//	return 0;
//}

//优化版

//int main()
//{
//	int a = 3;//可能溢出
//	int b = 5;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d, b = %d", a, b);
//
//	return 0;
//}

//=======================================找出单身狗==================================

int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4, };
	int i = 0;
	int sz = sizeof arr / sizeof arr[0];
	int ret = 0;

	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
	}
	printf("%d", ret);

	return 0;
}
