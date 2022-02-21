#include<stdio.h>

//===============================不定义第三个变量，交换a,b中的数======================
//int main()
//{
//	int a = 3;//可能溢出
//	int b = 5;
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d, b = %d", a, b);
//
//	return 0;
//}

//优化版

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d, b = %d", a, b);
//
//	return 0;
//}

//=======================================找出单身狗==================================

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

//===================================模拟函数strcpy====================================

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != 0)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//优化

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL) //空指针不能用，传过来会让程序崩溃
//	{
//		while (*dest++ = *src++)//为了把\0也拷贝
//		{
//			;
//		}
//	}
//}

//断言

//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);    //若是这样的，会终止程序，并打印错误信息
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//int main()
//{
//	char arr1[] = "################";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//
//	return 0;
//}

//满分版

char* my_strcpy(char* dest, const char* src) //const
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "################";
	char arr2[] = "bit";
	printf("%s", my_strcpy(arr1, arr2));

	return 0;
}

//====================================qsort排序==============================================
//可以进行任何数据的排序
//第一个参数:待排序数组的收元素地址
//第二个参数:待排序数组的元素个数
//第三个参数:待排序数组的每个元素的大小-单位是字节
//第四个参数:是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现

struct Stu
{
	char name[20];
	int age;
};

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int cmp_float(const void* e1, const void* e2)
{
	if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1) -> age - ((struct Stu*)e2) -> age;
	//若是字符串比较要用strcmp
}

void test1()	//整形数组的比较
{
	int arr1[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	qsort(arr1, sz1, sizeof(arr1[0]), cmp_int);

	int i = 0;
	for (i = 0; i <= sz1 - 1; i++)
	{
		printf(" %d", arr1[i]);
	}
}

void test2()	//小数数组的比较
{
	float arr2[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	qsort(arr2, sz2, sizeof(arr2[0]), cmp_float);

	int j = 0;
	for (j = 0; j <= sz2 - 1; j++)
	{
		printf(" %f", arr2[j]);
	}
}

void test3()	//结构体的比较
{
	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
	int sz3 = sizeof(s) / sizeof(s[0]);
	qsort(s, sz3, sizeof(s[0]), cmp_stu_by_age);
}

int main()
{
	test1();
	printf("\n");
	test2();
	test3();

	return 0;
}
