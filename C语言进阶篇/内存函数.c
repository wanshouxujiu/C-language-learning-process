#include <stdio.h>

//====================�ַ�����ֻ�������ַ�������С���ṹ�����Ҫ�ڴ溯��======================//

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//
//	strcpy(arr2, arr1);    //����
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

//ģ��mencpy

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
//		*(char*)dest = *(char*)src;    //ÿ�ο���һ���ֽ�
//		++(char*)dest;
//		++(char*)src;    //(����)��--���ȼ���ȣ��Ҷ�Ϊ�ҽ���ԣ����� (char*)src++�� ����
//	}
//	return ret;
//}
//
//int main()
//{
//	struct S arr3[] = { {"����", 20},{"����", 30} };
//	struct S arr4[3] = {0};
//	my_memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}

//=====================================mommove=======================================
//c���Թ涨��memcpy����Ҫ�����ڴ��ص������
//��mommove����

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
//			*((char*)dest + num) = *((char*)src + num);    //ÿ�ο���һ���ֽ�
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;    //ÿ�ο���һ���ֽ�
//			++(char*)dest;
//			++(char*)src;    //(����)��--���ȼ���ȣ��Ҷ�Ϊ�ҽ���ԣ����� (char*)src++�� ����
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
//	my_memmove(arr + 2, arr, 20);//�����ڴ��ص��������
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//======================================memcmp=======================================
//�ڴ�Ƚϣ����ַ����ȽϺ�����������

//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 00
//	//01 00 00 00 02 00 00 00 05 00 00 00
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);    //ֻ�Ƚ�ǰ��9���ֽ�
//
//	printf("%d\n", ret);
//	return 0;
//}

//=====================================memset======================================
//�ڴ�����-�ı��ڴ��ﴢ�������

int main()
{
	char arr[10] = "";
	memset(arr, '#', 10);
	int arr2[10]={0};

	//40���ֽ�
	//010101010101010101010000000000...
	memset(arr2, 1, 10);

	return 0;
}
