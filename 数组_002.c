#include<stdio.h>

//====================================ð������====================================

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//ȷ��ð������
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
//				flag = 0;       //�Ż������flag = 1˵������Ҫ�Ż��Ѿ�����
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

//=====================================����������Ԫ�ص�ַ===================================

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", *arr);

                                        //��������
	//sizeof(������)�������������������������
	//&������������ȡ��������������ĵ�ַ
	printf("%p\n", &arr);//���ĳ������������鳤��
	printf("%p\n", &arr + 1);

	return 0;
}