#include <stdio.h>

//struct Stu
//{
//	char name[20];//����
//	char tele[12];//�绰
//	char sex[10];//�Ա�
//	int age;
//}s4, s5, s6;
//
//struct Stu s3;//ȫ�ֱ���
//
//int main()
//{
//	//�����Ľṹ�����
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//===================================�����ṹ������==================================

//struct            //��������
//{
//	int a;
//	char c;
//}sa;              //ֻ�������ﶨ��
//
//struct
//{
//	int a;
//	char c;
//}*psa;            //�ṹ�����
//
//int main()
//{
//	psa = &sa;    //����ͬһ�����ͣ����Ǳ������Ὣ���ǵ�����ͬ������
//	return 0;
//}

//=================================�����ýṹ��==================================

////����д��
//struct Node
//{
//    int data;    //4 byte
//    struct Node n;    //δ֪
//};
//
////��ȷд��
//struct Node
//{
//	int data;    //4 byte
//	struct Node* next;    // 4/8 byte
//};

//================================�ṹ���ʼ��===============================

//struct S
//{
//	int a;
//	char b;
//	char arr[20];
//	double c;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;      // �ṹ���Ա�����������ṹ��
//	struct T* next;
//};
//
//int main()
//{
//	struct T t = { "hehe", {1, 'a', "hello bit", 3.14}, NULL };
//	printf("%s %c", t.ch, t.s.b);
//
//	return 0;
//}
//
////======================================�ض���=================================
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;   //������ʱ��û��������
//}Node;                   //struct Node������ΪNode

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char C2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));    //12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));    //8
//	return 0;
//}

//#include <stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	//offsetof();
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}

int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;

	//����1����ʾС��
	//����e����ʾ���
	return u.c;
}


int main()
{
	enum colour
	{
		RED,
		GREEN = 5,
		BLUE,
	};

	enum colour a = GREEN;
	enum colour a = 5;

	printf("%d%d%d", RED, GREEN, BLUE);    //0,5,6

	return 0;
}