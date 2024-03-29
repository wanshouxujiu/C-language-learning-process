#include<stdio.h>

//======================================关于\0=========================================

//int main()
//{
//	int arr1[10] = { 1,2,3 };     //不完全赋值，其他7个数默认赋值为0
//
//	char arr2[5] = { 'a','b' };
//	char arr3[5] = "ab";         //两者区别在于，第二种多初始化了一个\0，虽然其值也是0
//
//	char arr4[] = "abcdef";//自动推算个数
//	printf("%d\n", sizeof(arr4));
//	printf("%d\n", strlen(arr4));//如果strlen找不到\0它就无法算出字符串长度
//
//	return 0;
//}

// \0 == 0 ！= '0'    \0的ASCALL码为0，'0'的ASCALL码为48

//======================================数组地址=====================================

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = [%p]\n", i, &arr[i]);//可以看出数组在内存中是连续存放的
//	}
//
//	return 0;
//}

//=========================================二维数组=====================================
//二维数组的首元素是 整个 第一个一维数组

int main()
{
	int arr[3][4] = { 1,2,3,4,5 };//三行四列，多的字符会到下一行

	char ch[5][6] = { {1,2,3,4},{5,6,7,8} };//强制规定每行字符

	int arr2[][4] = { {1,2,3,4},{5,6,7,8} };//只可省略行

	int i = 0; int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf(" %d", arr[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf(" &arr[%d][%d] = %p", i, j, &arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
