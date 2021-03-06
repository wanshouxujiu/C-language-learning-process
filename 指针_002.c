#include<stdio.h>

//===================================NULL==========================================

//int* p = NULL(指针赋为空)
//if (p != NULL)
//{
//	......
//}

//===================================指针的加减=========================================

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	for (i = 0; i < sz; i++)
	{
		printf("%d", *p);
		p = p + 1;
	}
	return 0;
}

//指针相减是元素个数
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,11};
	int* p = &arr[9];
	int* p2 = &arr[0];
	printf("%d\n", p - p2);
	printf("%d\n", &arr[9] - &arr[0]);//不能两个类型相减

	return 0;
}

//====================================指针的比较===================================

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	int* p = &arr[9];
	for (p = &arr[10]; p > &arr[0];)//只可以从后往前比较，不可以从前往后比较
	{                               //因为C语言只规定元素的指针只可以和数组后面一个地址的指针进行比较
		*--p = 0;
	}

	return 0;
}

//======================================二级指针=====================================

int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;//二级指针

	**ppa = 20; //解第一次出现的是a的地址
	printf("%d", a);

	return 0;
}

//==================================指针数组====================================

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;

	int* arr[3] = { &a, &b, &c };  //存放指针
	printf("%d\n%d\n%d\n", *arr[0], *arr[1], *arr[2]);

	return 0;
}

//====================================指针与const==================================

//int main()
//{
//	const int num = 10;
//	int* p = &num;
//	*p = 20;
//	
//	printf("%d\n", num);  //可以看到此时‘num’是可以改的，与const相驳
//
//	return 0;
//}



//int main()
//{
//	const int num = 10;
//	const int* p = &num;  //指针前加上const
//	*p = 20;              //此时编译器报错，因为不可以改变
//	
//	printf("%d\n", num);
//
//	return 0;
//}


//int main()
//{
//	const int num = 10;
//	int num2 = 11;
//
//	int* const p = &num;  //const移到‘p’前
//	*p = 20;
//	
//	printf("%d\n", num);  //此时‘num’是可以改的，与const相驳
//
//	p = &num2;            //但此时指针变量‘p’无法被重新赋值，因为const        const int* p == int const* p ！= int* const p
//
//	return 0;
//}
