～#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//二进制反码按位取反
//int main()
//{
//	int a = 0;
//	printf("%d", ~a);
//
//	int a = 11;
//	a = a | (1 << 2);
//	a = a & (~(1 << 2));
//	printf("%d", a);
//
//	return 0;
//}

//(类型转换)
//int main()
//{
//	int a = (int)3.14;
//
//	return 0;
//}

//=================================关系操作符>,>=,<,<=,!=,==
//不可连续比较的原因：比较一次后就返回逻辑值1/0，再比较就容易与原意不负
//例如a=3,b=2,c=1;(a>b>c)的值为0

//==================================逻辑与 逻辑或====================================

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;           //从左往右算，第一个为假后面就不算了
//	printf("%d%d%d%d", a, b, c, d);  //如果是或，第一个为真，后面也不算了
//
//	return 0;
//}

//===================================三目(条件)操作符==================================

//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	if (a > 1)
//	{
//		b = 3;
//	}
//	else
//	{
//		b = -3;
//	}
//
//	//三目操作符简化为
//	b = (a > 1 ? 3 : -3);
//
//	return 0;
//}

// ======================================逗号表达式=================================

// 从左向右运算，如果是需要判断，最后一个判断表达式才有效
// 
//  例如：
//  int a = 0;
//  函数();
//  while (a > 0)
//  {
//  	......
//  	int a = 0;
// 	    函数();
//  }
// 
//  可以改写为：
//  while (int a = 0, 函数(), a > 0)
//  {
//  	......
//  }
// 
//        赋值时(a，b)只有b有效

// ====================================[]下标引用操作符================================
// 操作数：一个数组名加一个索引值

// =====================================()函数调用操作符==============================
// 操作数：至少一个操作数（函数名）

// ======================================结构体的.和->================================
//struct stu
//{
//	char name[20];//定义，这里需要输入长度
//	int age;
//	char id[20];
//};
//
//
//int main()
//{
//	struct stu student1 = { "小红", 18, "123456789" };
//	//printf("%s\n%d\n%s\n", student1.name, student1.age, student1.id);
//
//	struct stu* p = &student1;
//	printf("%s\n", p->name);//等于printf("%s\n", (*p).name);
//
//
//	return 0;
//}

//====================================隐式类型转换========================================
//  整形提升 (长度不够都需要)

//char类型长度不够，无法进入cpu运算,需要把它变为int类型
//补码最高位根据符号补位
//例如-1 就是 11111111111111111111111111111111
//1 是 00000000000000000000000000000001
//然后再进行运算

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//	{
//		printf("a");
//	}
//	if (b == 0xb600)
//	{
//		printf("b");
//	}
//	if (c == 0xb6000000)
//	{
//		printf("c");
//	}
//
//	return 0;
//}

//  算数转换
//当两个不同类型的数做运算的时候，长度短的类型会转变为另一个长度长的类型再参与运算，如果是多个变量且有类型不同，那就先算，等到有两个不一样时再把这两个数转换

//====================================优先级与结合性================================

//括号()优先级最高
//单目操作符，三目操作符，赋值操作符(+=，-=这类也算)，以及加(+)减(-)是右结合性

//结合性只能控制同种符号运算时的顺序，例如 a * b * c * d,从左往右算
//a* b + c* d + e * f,这种式子优先和结合只能确定相邻两个运算符的优先级，不能知道是a* b + c* d再加上e * f还是其他路径
int main()
{
	int c = 1;
	//c + --c;        //而这里不能确定c是先准备好1还是算完--c后第一个c才准备好0(不同编译器不一样)
	printf("%d", c);//所以这类表达式是存在问题的

	return 0;
}
