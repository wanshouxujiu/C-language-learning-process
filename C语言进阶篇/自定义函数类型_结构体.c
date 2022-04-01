#include <stdio.h>

//struct Stu
//{
//	char name[20];//名字
//	char tele[12];//电话
//	char sex[10];//性别
//	int age;
//}s4, s5, s6;
//
//struct Stu s3;//全局变量
//
//int main()
//{
//	//创建的结构体变量
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//===================================匿名结构体类型==================================

//struct            //无类型名
//{
//	int a;
//	char c;
//}sa;              //只能在这里定义
//
//struct
//{
//	int a;
//	char c;
//}*psa;            //结构体变量
//
//int main()
//{
//	psa = &sa;    //看似同一种类型，但是编译器会将它们当作不同的类型
//	return 0;
//}

//=================================自引用结构体==================================

////错误写法
//struct Node
//{
//    int data;    //4 byte
//    struct Node n;    //未知
//};
//
////正确写法
//struct Node
//{
//	int data;    //4 byte
//	struct Node* next;    // 4/8 byte
//};

//================================结构体初始化===============================

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
////======================================重定义=================================
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;   //自引用时还没重命名完
//}Node;                   //struct Node重命名为Node

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

	//返回1，表示小端
	//返回e，表示大端
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