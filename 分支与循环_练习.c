#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
	//======================================�������Ӵ�С���==========================
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

	//====================================100~200����===================================

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
	//printf("\n�ҵ���%d��", count);
	
	//==================================�����(==================================
	
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
	//printf("\n�ҵ���%d��", count);

	//===============================100�����ж��ٸ���============================

	//int i = 0;
	//int count = 0;

	//while (i <= 100)
	//{
	//	if (i % 10 == 9)
	//	{
	//		count++;
	//		printf(" %d", i);
	//	}
	//	if (i / 10 == 9)//������else if
	//	{
	//		count++;
	//		printf(" %d", i);
	//	}
	//	i++;
	//}
	//printf("\n%d", count);

	//===============================��һ���������ֵ======================

	//int arr[] = { -1,-2,1,2,3,4,5,6,7,8,9,10 };
	//int max = arr[0];//���ܳ�ʼΪ�㣬�����ܱȽ��и���������
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
	
	//=========================��ӡ�˷��ھ���===========================
	
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

	//============================��������Ϸ=============================

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
//	int guess = 0;//�����������
//	int ret = 0;
//	ret = rand() % 100 + 1;//�������ֵ,��������100����
//	printf("                               ***������***\n");
//	//printf("ret = %d", ret);
//	while (1)
//	{
//		printf("������֣�\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("�´���");
//		else if (guess < ret)
//			printf("��С��");
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));//����ʱ���
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
//			printf("����ô˯���ŵģ�������׶Σ����������Σ���˯���ž���\n");
//			break;
//		default:
//			printf("���ʲô�ۣ�\n");
//		}
//
//	} while (input);
//	return 0;
//}
	
	//===========================�ػ�С����================================
	// 
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdlib.h>
//#include<stdio.h>
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������룺��������ȡ���ػ�\n�����룺");
	scanf("%s",input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	
	return 0;
}