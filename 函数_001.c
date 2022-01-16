#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>

int Add(int x, int y)//希望返回的是一个int类型  x,y(形参)形参是临时拷贝，不会影响到实参
	{                //传过来的a,b(实参)可以是变量、常量、表达式、甚至是另一个函数！
	int z = 0;       //但它必须有一个确定的值
	z = x + y;
	return z;        //传值调用
	}

//=====================================交换=====================================

void Swap1(int x, int y)//此函数失败
{                       //因为改变的只是x,y的值，不是a,b的
	int tmp = x;        //此时应引入地址，如下一个函数
	x = y;
	y = tmp;
}
void Swap2(int* x, int* pb)//不需要返回值，这只是个动作(此函数成功) 
{
	int tmp = 0;           //传址调用
	tmp = *x;
	*x = *pb;
	*pb = tmp;
}

//=====================================判断素数===================================

int is_prime(int x)
{
	int j = 0;

	for (j = 2; j <= sqrt((double)x); j++)
	{
		if (x % j == 0)
		{
			return 0;
		}
		
	}
	return 1;
}

binary_search(int arr[], int k,int sz)
{
	int left,right,mid;
	//sz = sizeof(arr) / sizeof(arr[0]);
	//形参接受到的是数组第一个成员的地址，本质为指针，只有4byte
	//因为若数组很大，重新做一份临时拷贝非常浪费空间
	left = 0;
	right = sz - 1;
	
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (k < arr[mid])
		{
			right = mid - 1;
		}
		else if (k > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	//=======================================自定义函数调用=======================================

	//int add;
	//int a = 1;
	//int b = 2;

	//add = Add(a, b);//函数调用
	//printf("最大值为：%d", add);

	//                                           Swap(交换)

	//int a = 10;
	//int b = 20;

	//Swap2(&a, &b);
	//printf("%d %d",a, b);


	//==================================库函数调用strcpy================================
	//=========================学习使用http://cplusplus.com/============================

	//char arr1[] = "bit";
	//char arr2[20] = "############";	//拷贝过去的样子"bit\0########"遇到\0就退出了
	//strcpy(arr2, arr1);
	//printf("%s\n", arr2);

	//                                    memset

	//char arr[] = "hello word";

	//memset(arr, '*', 5);//替换
	//printf("%s", arr);//***** word

	//===================================打印100~200间的素数=============================

	//int i = 0;
	//int num = 0;

	//for (i = 101; i <= 200; i += 2)
	//{
	//	if (1 == is_prime(i))
	//	{
	//		num++;
	//		printf(" %d", i);
	//	}
	//}
	//printf("\n%d\n", num);

	//==================================二分查找======================================
	//找到了返回下标，找不到返回-1

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz;
	sz = sizeof(arr) / sizeof(arr[0]);//只能在这里算好了带过去
	int ret = binary_search(arr, 7,sz);
	
	
	if (-1 == ret)
	{
		printf("找不到指定数字");
	}
	else
	{
		printf("找到了，下标是%d", ret);
	}

	return 0;
}