#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//========================================����ˮ===========================================

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int tmp = i;
//		int n = 1;
//		int sum = 0;
//
//		while (tmp /= 10) //�ж�λ��
//		{
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf(" %d", i);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int bottle = money;
//	while (bottle > 1)
//	{
//		total += bottle / 2;
//		bottle = bottle / 2 + (bottle % 2);
//	}
//	printf("%d", total);
//
//	return 0;
//}

//======================================����ż��==========================================

//void printf1(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d", arr[i]);
//	}
//}
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	printf1(arr,sz);
//
//	return 0;
//}

//========================================�������=======================================

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i > 1 && j > 0)
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//=====================================������=========================================

//������
//��Ŀ���� :
//�ձ�ĳ�ط�����һ��ıɱ��, ����ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ��� :
//A˵:�����ҡ�
//B˵ : ��C.
//C˵ : ��D.
//D˵ : C�ں�˵

//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++) //�����жϣ�����һ������������滰
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//
//	return 0;
//}//ţ�����������⣺�����⣬������

//====================================��������=========================================
//����Ա�������

#include<string.h>
#include<assert.h>

//�������

//void left_move(char arr[], int a)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < a; i++)
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	char arr[] = "abcdef";
//	left_move(arr, a);
//
//	printf("%s", arr);
//
//	return 0;
//}

//������ת

//#include<string.h>
//#include<assert.h>
//
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char arr[], int a)
//{
//	assert(arr != NULL);
//	int len = strlen(arr);
//	assert(a <= len);
//	reverse(arr, arr + a - 1); //�������
//	reverse(arr + a, arr+len-1); //�����ұ�
//	reverse(arr, arr + len - 1); //����ȫ��
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	char arr[] = "abcdef";
//	left_move(arr, a);
//
//	printf("%s", arr);
//
//	return 0;
//}

//============================================�ж���������=======================================
//#include <string.h>
//
//int is_left_move(char* arr1, char* arr2)
//{
//	int len = strlen(arr1);
//	if (len != strlen(arr2))
//		return 0;
//	strncat(arr1, arr1, len); //(�⺯��)׷�ӱ�� abcdefabcdef
//	char* ret = strstr(arr1, arr2); //(�⺯��)arr1����arr2
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//
//	return 0;
//}

//====================================�����������=======================================

int FindNum(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (k < arr[x][y]) //����û��
		{
			y--;
		}
		else if (k > arr[x][y]) //����û��
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[][3] = { {1,2,3,}, {4,5,6}, {7,8,9} };
	int x = 3;
	int y = 3;
	int k = 0;
	scanf("%d", &k);
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("�±��� %d %d", x, y);
	}
	else
	{
		printf("�Ҳ���");
	}

	return 0;
}