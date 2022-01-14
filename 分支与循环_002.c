#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	//==================================缓冲区================================
	//char password[20] = {0};
	//int ret = 0;
	//int ch = 0;

	//scanf("%s", password);
	//printf("是否确认输入？");
	//
	//while (ch = getchar() != '\n')//缓冲区多了个回车
	//{
	//	;
	//}

	//	ret = getchar();
	//if ('Y' == ret)
	//{
	//	printf("确认输入");
	//}
	//else
	//{
	//	printf("取消输入");
	//}

	//=========================手动结束循环=================================

	 //while (getchar() != EOF),它的意思是按Ctrl + z手动结束循环

	//===========================for循环=============================

	//for (int a = 1; a <= 10; a++)//for (;;)则死循环，因为判断被省略
	//{
	//	if (a == 5)
	//	{
	//		continue;//continue只会跳过下面的语句，a++在上面，所以不会死循环
	//	}
	//	printf(" %d", a);
	//}

	//============================do while=================================

	//int num1 = 1;

	//do
	//{
	//	printf(" %d", num1);
	//	num1++;
	//}
	//while (num1 <= 10);//注意有分号

	//=============================n的阶乘================================

	//int a;
	//scanf_s("%d", &a);
	//int b = 1;


	//while (a > 0)
	//{
	//	b = b * a;
	//	a--;
	//}

	//printf("b= %d\n", b);

	//==================================1~3每个数的阶乘相加===================

	//int sum = 0;
	//int c = 3;

	//while(1 <= c)
	//{
	//	int b = 1;//b如果放上面while的上面，会导致下面的b算阶乘时与上一个累乘
	//	int d = c;
	//	while (d > 0)
	//	{
	//		b = b * d;
	//		d--;
	//	}
	//	sum = sum + b;
	//	c--;
	//}

	//printf("%d\n", sum);

	//=================================简化==================================

	//int sum = 0;
	//int a = 1;
	//int b = 1;

	//while (a <= 3)
	//{
	//	b = b * a;
	//	a++;
	//	sum = sum + b;
	//}
	//printf("%d\n", sum);

	//============================二分查找================================
	
	//int arr[] = { 1,2,3,4,5,6,8,9,10,11};//只能用于顺序排列的数组
	//int k = 7;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int left = 0;
	//int right = sz - 1;
	//
	//while (left <= right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] > k)
	//	{
	//		right = mid - 1;//加和减不要搞反
	//	}
	//	else if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else
	//	{
	//		printf("找到了：arr[%d]", mid);
	//		break;
	//	}
	//}

	//if (left > right)
	//{
	//	printf("没找到");
	//}

	//==============================字幕显示============================

	char arr1[] = "welcome come to dream!";
	char arr2[] = "######################";
	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
	}
	printf("wel come to dream!");
	
	//============================模拟密码输入==========================
	
	//char key[20] = { 0 };
	//int i = 0;

	//for(i = 0;i <= 3;i++)
	//{
	//	scanf("%s",key);
	//	if (strcmp("123456",key) == 0)//strcmp用于比较前后字符是否相等，小于-1，大于1，等于0
	//	{
	//		printf("密码正确");
	//		break;
	//	}
	//	printf("密码错误");
	//}
	//if (3 == i)
	//{
	//	printf("密码错误");
	//}

	return 0;
}
