#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>

int Add(int x, int y)//ϣ�����ص���һ��int����  x,y(�β�)�β�����ʱ����������Ӱ�쵽ʵ��
	{                //��������a,b(ʵ��)�����Ǳ��������������ʽ����������һ��������
	int z = 0;       //����������һ��ȷ����ֵ
	z = x + y;
	return z;        //��ֵ����
	}

//=====================================����=====================================

void Swap1(int x, int y)//�˺���ʧ��
{                       //��Ϊ�ı��ֻ��x,y��ֵ������a,b��
	int tmp = x;        //��ʱӦ�����ַ������һ������
	x = y;
	y = tmp;
}
void Swap2(int* x, int* pb)//����Ҫ����ֵ����ֻ�Ǹ�����(�˺����ɹ�) 
{
	int tmp = 0;           //��ַ����
	tmp = *x;
	*x = *pb;
	*pb = tmp;
}

//=====================================�ж�����===================================

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
	//�βν��ܵ����������һ����Ա�ĵ�ַ������Ϊָ�룬ֻ��4byte
	//��Ϊ������ܴ�������һ����ʱ�����ǳ��˷ѿռ�
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
	//=======================================�Զ��庯������=======================================

	//int add;
	//int a = 1;
	//int b = 2;

	//add = Add(a, b);//��������
	//printf("���ֵΪ��%d", add);

	//                                           Swap(����)

	//int a = 10;
	//int b = 20;

	//Swap2(&a, &b);
	//printf("%d %d",a, b);


	//==================================�⺯������strcpy================================
	//=========================ѧϰʹ��http://cplusplus.com/============================

	//char arr1[] = "bit";
	//char arr2[20] = "############";	//������ȥ������"bit\0########"����\0���˳���
	//strcpy(arr2, arr1);
	//printf("%s\n", arr2);

	//                                    memset

	//char arr[] = "hello word";

	//memset(arr, '*', 5);//�滻
	//printf("%s", arr);//***** word

	//===================================��ӡ100~200�������=============================

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

	//==================================���ֲ���======================================
	//�ҵ��˷����±꣬�Ҳ�������-1

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz;
	sz = sizeof(arr) / sizeof(arr[0]);//ֻ������������˴���ȥ
	int ret = binary_search(arr, 7,sz);
	
	
	if (-1 == ret)
	{
		printf("�Ҳ���ָ������");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d", ret);
	}

	return 0;
}