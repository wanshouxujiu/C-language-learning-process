#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//======================================�ṹ�嶨��=====================================

////struct stu
////{
////  //��Ա����
////	char nam[20];
////	char age;
////	char tele[12];
////	char sex[5];
////}s1,s2,s3;        //����������ȫ�ֽṹ�����(�����б�)
//
//typedef struct stu  //typedef ���ģ���������
//{
//	char nam[20];
//	char age;
//	char tele[12];
//	char sex[5];
//}stu;               //struct stu������Ϊstu
//
//int main()
//{
//	struct stu s1 = { "����", 20, "12345678999", "��" };
//	stu s2;         //�����Դ����ֲ�����
//
//	return 0;
//}

//======================================================================================

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
//	char* pc;
//};
//
//int main()
//{
//	char arr[20] = "123";
//	struct T t = { "hehe", {1, 'a', "hello bit", 3.14}, arr };
//	printf("%s %c", t.ch, t.s.b);
//
//	return 0;
//}

//========================================��Ա���ʼ��ṹ�崫��=============================

typedef struct stu  //typedef ���ģ���������
{
	char nam[20];
	char age;
	char tele[12];
	char sex[5];
}stu;  

void print1(stu s)
{
	printf("%s\n", s.nam);     //�ռ俪����
	printf("%d\n", s.age);
	printf("%s\n", s.tele);
	printf("%s\n", s.sex);
}

void print2(stu* s)
{
	printf("%s\n", s -> nam);  //��ַ���ʿռ俪��С��->�Դ�������
	printf("%d\n", s -> age);
	printf("%s\n", s -> tele);
	printf("%s\n", s -> sex);
}

int main()
{
	stu s = { "����", 20, "12345678999", "��" };
	print1(s);
	print2(&s);

	return 0;
}

//ѹջ�����ݴ������϶ѣ��Ƚ����������ȳ�