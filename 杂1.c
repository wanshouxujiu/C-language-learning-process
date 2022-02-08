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
//	assert(dest != NULL);
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
