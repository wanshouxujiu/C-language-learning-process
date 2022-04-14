#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	FILE* pf = fopen("log, txt", "w");
//
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//
//	int i = 0;
//	int arr[10] = { 0 };
//	for(i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		//写日志文件
//		fprintf(pf, "file:%s line:%d date:%s time:%s i:%d\n", __FILE__, __LINE__, __DATE__, __TIME__,i);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//=================================== #号 =====================================
//#define PRINT(X) printf("字母"#X"的值是：%d\n", X)
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	PRINT(a);
//	PRINT(b);
//
//	return 0;
//}

//================================= ##号 ====================================
//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int ab = 1;
//	
//	printf("%d\n", CAT(a, b));
//
//	return 0;
//}

//============================ 有副作用的宏参数 ============================
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//	printf("%d\n", MAX(a++, b++));  //12(答案错误，副作用参数直接替换引发)
//	printf("%d\n", a);              //11
//	printf("%d\n", b);              //13
//
//	return 0;
//}

//============================== #undef ===================================
//#define MAX 100
//
//int main()
//{
//	printf("%d\n", MAX);
//#undef MAX
//
//	return 0;
//}

//=============================== 条件编译指令 ===========================
//1、是否定义
//#define ABC

//int main()
//{
//#ifdef ABC
//	printf("有定义过");
//#endif
//
//#ifndef ABC
//	printf("没定义过");
//#endif
//
//#if !defined (ABC)
//	printf("没定义过");
//#endif
//
//	return 0;
//}

//2、常量表达式
//int main()
//{
//#if 1
//	printf("单分支");
//#endif
//
//	return 0;
//}

//int main()
//{
//#if 1 == 2
//	printf("多分支");
//#elif 2 == 2
//	printf("多分支");
//#else
//	printf("多分支");
//#endif
//
//	return 0;
//}