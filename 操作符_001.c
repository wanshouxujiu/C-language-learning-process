#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//========================================��������========================================
// ֻ����������
//������λ���÷��Ų�λ
//�߼���λ��ֱ����0��λ

//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("%d", b);
//
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = a << 1;        //��������
//	printf("%d", b);
//
//	return 0;
//}

//=========================================&&,||,^=========================================
//ֻ����������

//int main()
//{
	//int a = 5;
	//int b = 3;
	//int c = a & b;     //�����Ʋ���ÿһλ����
	//printf("%d", c);
	////......00000101
	////......00000010
	////......00000001

	//int a = 5;
	//int b = 3;
	//int c = a | b;
	//printf("%d", c);

	//int a = 5;
	//int b = 3;
	//int c = a ^ b;
	//printf("%d", c);

//	return 0;
//}

//======================================�����ڴ����ж�����1�ĸ���==============================

//int main()
//{
//	int num = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//���ϸ�ֵ��:+=,-=,/=,*=,%=,>>=,<<=,&=,|=,^=

//��Ŀ������:!,&,*,-,+,~,++,--,sizeof

int main()
{

	int a = 10;
	char b = 'r';
	char* c = &b;
	int arr[10] = { 0 };

	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(int [5]));
	return 0;
}