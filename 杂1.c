#include<stdio.h>

//===============================���������������������a,b�е���======================
//int main()
//{
//	int a = 3;//�������
//	int b = 5;
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d, b = %d", a, b);
//
//	return 0;
//}

//�Ż���

//int main()
//{
//	int a = 3;//�������
//	int b = 5;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d, b = %d", a, b);
//
//	return 0;
//}

//=======================================�ҳ�����==================================

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
