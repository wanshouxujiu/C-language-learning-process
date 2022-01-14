#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
	//======================================三个数从大到小输出==========================
	//int a = 0;
	//int b = 0;
	//int c = 0;

	//scanf_s("%d%d%d", &a, &b, &c);

	//if (a < b)
	//{
	//	int bottle = a;
	//	a = b;
	//	b = bottle;
	//}
	//
	//if (a < c)
	//{
	//	int bottle = a;
	//	a = c;
	//	c = bottle;
	//}
	//
	//if (b < c)
	//{
	//	int bottle = b;
	//	b = c;
	//	c = bottle;
	//}

	//printf("%d%d%d", a, b, c);

	//====================================100~200素数===================================

	//int i = 0;
	//int count = 0;

	//for (i = 100; i <= 200; i++)
	//{
	//	int j = 0;
	//	for (j = 2; j < i; j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			break;
	//		}
	//	}
	//	if (i == j)
	//	{
	//		count++;
	//		printf(" %d", i);
	//	}
	//}
	//printf("\n找到了%d个", count);
	
	//==================================化简版(==================================
	
	//int i = 0;
	//int count = 0;

	//for (i = 101; i <= 200; i+=2)
	//{
	//	int j = 0;
	//	for (j = 2; j <= sqrt((float)i);j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			break;
	//		}
	//	}
	//	if (j > sqrt((float)i));
	//	{
	//		count++;
	//		printf(" %d", i);
	//	}
	//}
	//printf("\n找到了%d个", count);

	//===============================100以内有多少个九============================

	//int i = 0;
	//int count = 0;

	//while (i <= 100)
	//{
	//	if (i % 10 == 9)
	//	{
	//		count++;
	//		printf(" %d", i);
	//	}
	//	if (i / 10 == 9)//不能用else if
	//	{
	//		count++;
	//		printf(" %d", i);
	//	}
	//	i++;
	//}
	//printf("\n%d", count);

	//===============================找一数组中最大值======================

	//int arr[] = { -1,-2,1,2,3,4,5,6,7,8,9,10 };
	//int max = arr[0];//不能初始为零，否则不能比较有负数的数组
	//int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	//int i = 0;

	//for (i = 0; i <= sz; i++)
	//{
	//	if (arr[i] > max)
	//	{
	//		max = arr[i];
	//	}
	//}
	//printf("%d\n",max);
	
	//=========================打印乘法口诀表===========================
	
	//int i = 1;

	//for (i = 1; i <= 9; i++)
	//{
	//	int j = 1;
	//	for (j = 1; j <= i; j++)
	//	{
	//		printf(" %d * %d = %-2d", i, j, i * j);
	//	}
	//	printf("\n");
	//}

	//============================猜数字游戏=============================

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<time.h>
//
//void menu()
//{
//	printf("************************************************\n");
//	printf("****        Play(1)          Exit(0)        ****\n");
//	printf("************************************************\n");
//}
//
//game()
//{
//	int guess = 0;//接收输入的数
//	int ret = 0;
//	ret = rand() % 100 + 1;//设置随机值,且限制在100以内
//	printf("                               ***猜数字***\n");
//	//printf("ret = %d", ret);
//	while (1)
//	{
//		printf("请猜数字：\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("猜大了");
//		else if (guess < ret)
//			printf("猜小了");
//		else
//		{
//			printf("恭喜你，猜对了！");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));//利用时间戳
//	int input = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("你怎么睡得着的？你这个阶段，你这个年龄段，你睡得着觉？\n");
//			break;
//		default:
//			printf("你搞什么哇？\n");
//		}
//
//	} while (input);
//	return 0;
//}
	
	//===========================关机小程序================================
	// 
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdlib.h>
//#include<stdio.h>
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("请注意，你的电脑将在一分钟内关机，如果输入：我是猪，就取消关机\n请输入：");
	scanf("%s",input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	
	return 0;
}