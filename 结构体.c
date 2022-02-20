#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//======================================结构体定义=====================================

////struct stu
////{
////  //成员变量
////	char nam[20];
////	char age;
////	char tele[12];
////	char sex[5];
////}s1,s2,s3;        //创建了三个全局结构体变量(变量列表)，一般不这么用
//
//typedef struct stu  //typedef 中文：定义类型
//{
//	char nam[20];
//	char age;
//	char tele[12];
//	char sex[5];
//}stu;               //struct stu重命名为stu
//
//int main()
//{
//	struct stu s1 = { "张三", 20, "12345678999", "男" };
//	stu s2;         //都可以创建stu类型的局部变量
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
//	struct S s;      // 结构体成员可以是其他结构体
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

//========================================成员访问及结构体传参=============================

typedef struct stu  //typedef 中文：定义类型
{
	char nam[20];
	char age;
	char tele[12];
	char sex[5];
}stu;  

void print1(stu s)
{
	printf("%s\n", s.nam);     //空间开销大
	printf("%d\n", s.age);
	printf("%s\n", s.tele);
	printf("%s\n", s.sex);
}

void print2(stu* s)
{
	printf("%s\n", s -> nam);  //地址访问空间开销小，->自带解引用
	printf("%d\n", s -> age);
	printf("%s\n", s -> tele);
	printf("%s\n", s -> sex);
}

int main()
{
	stu s = { "张三", 20, "12345678999", "男" };
	print1(s);
	print2(&s);

	return 0;
}

//压栈，数据从下往上堆，先进后出，后进先出
