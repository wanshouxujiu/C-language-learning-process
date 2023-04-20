#include<stdio.h>

//====================================冒泡排序====================================

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//确定冒泡趟数
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;       //优化，如果flag = 1说明不需要排或已经排完
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	bubble_sort(arr,sz);
//	for(i = 0; i < sz; i++ )
//	{
//		printf(" %d", arr[i]);
//	}
//
//	return 0;
//}

//=====================================数组名是首元素地址===================================

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", *arr);  //1

                                        //两个例外
	//sizeof(数组名)，这里的数组名代表整个数组
	//&数组名，这里取出的是整个数组的地址
	printf("%p\n", &arr);//它的长度是整个数组长度
	printf("%p\n", &arr + 1);

	return 0;
}
