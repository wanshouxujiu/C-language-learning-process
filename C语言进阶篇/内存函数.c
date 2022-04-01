#include <stdio.h>

//====================字符函数只能用于字符，整数小数结构体等需要内存函数======================//

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//
//	strcpy(arr2, arr1);    //报错
//
//	return 0;
//}

//==================================memcpy==================================

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[9] = { 0 };
//
//	memcpy(arr2, arr1, sizeof(arr1));
// 	memcpy(arr1 + 2, arr1, 20);

//	return 0;
//}

//模拟mencpy

//#include <assert.h>
//
//struct S
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;    //每次拷贝一个字节
//		++(char*)dest;
//		++(char*)src;    //(类型)，--优先级相等，且都为右结合性，所以 (char*)src++； 错误
//	}
//	return ret;
//}
//
//int main()
//{
//	struct S arr3[] = { {"张三", 20},{"李四", 30} };
//	struct S arr4[3] = {0};
//	my_memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}

//=====================================mommove=======================================
//c语言规定：memcpy不需要处理内存重叠的情况
//由mommove处理

//#include <assert.h>
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	if (dest > src)
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);    //每次拷贝一个字节
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;    //每次拷贝一个字节
//			++(char*)dest;
//			++(char*)src;    //(类型)，--优先级相等，且都为右结合性，所以 (char*)src++； 错误
//		}
//
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//my_memcpy(arr+2, arr, 20);
//	my_memmove(arr + 2, arr, 20);//处理内存重叠的情况的
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//======================================memcmp=======================================
//内存比较，是字符串比较函数的升级版

//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 00
//	//01 00 00 00 02 00 00 00 05 00 00 00
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);    //只比较前面9个字节
//
//	printf("%d\n", ret);
//	return 0;
//}

//=====================================memset======================================
//内存设置-改变内存里储存的数据

int main()
{
	char arr[10] = "";
	memset(arr, '#', 10);
	int arr2[10]={0};

	//40个字节
	//010101010101010101010000000000...
	memset(arr2, 1, 10);

	return 0;
}
