#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	//==================================������================================
	//char password[20] = {0};
	//int ret = 0;
	//int ch = 0;

	//scanf("%s", password);
	//printf("�Ƿ�ȷ�����룿");
	//
	//while (ch = getchar() != '\n')//���������˸��س�
	//{
	//	;
	//}

	//	ret = getchar();
	//if ('Y' == ret)
	//{
	//	printf("ȷ������");
	//}
	//else
	//{
	//	printf("ȡ������");
	//}

	//=========================�ֶ�����ѭ��=================================

	 //while (getchar() != EOF),������˼�ǰ�Ctrl + z�ֶ�����ѭ��

	//===========================forѭ��=============================

	//for (int a = 1; a <= 10; a++)//for (;;)����ѭ������Ϊ�жϱ�ʡ��
	//{
	//	if (a == 5)
	//	{
	//		continue;//continueֻ�������������䣬a++�����棬���Բ�����ѭ��
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
	//while (num1 <= 10);//ע���зֺ�

	//=============================n�Ľ׳�================================

	//int a;
	//scanf_s("%d", &a);
	//int b = 1;


	//while (a > 0)
	//{
	//	b = b * a;
	//	a--;
	//}

	//printf("b= %d\n", b);

	//==================================1~3ÿ�����Ľ׳����===================

	//int sum = 0;
	//int c = 3;

	//while(1 <= c)
	//{
	//	int b = 1;//b���������while�����棬�ᵼ�������b��׳�ʱ����һ���۳�
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

	//=================================��==================================

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

	//============================���ֲ�================================
	
	//int arr[] = { 1,2,3,4,5,6,8,9,10,11};//ֻ������˳�����е�����
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
	//		right = mid - 1;//�Ӻͼ���Ҫ�㷴
	//	}
	//	else if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else
	//	{
	//		printf("�ҵ��ˣ�arr[%d]", mid);
	//		break;
	//	}
	//}

	//if (left > right)
	//{
	//	printf("û�ҵ�");
	//}

	//==============================��Ļ��ʾ============================

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

	return 0;
}