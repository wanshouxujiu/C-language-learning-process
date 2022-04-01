#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#include <errno.h>

//=============================== malloc 和 free ================================
//开辟成功返回一个指针，是那块空间的起始地址
//失败返回NULL
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));  //可能开辟失败，使用这个方式打印原因
//	}
//	else
//	{
//		//正常使用
//		int i = 0;
//		for (i = 0; i < 10; i++)        //这整体就是一个数组
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", * (p + i));
//		}
//	}
//
//	//当申请的空间不需要使用时，使用free函数将空间还给操作系统
//	free(p);
//	p = NULL;    //P还有能力找到那块自由的空间，容易发生危险
//
//	return 0;
//}

//=============================== calloc ==============================
//返回值仍是void类型，但是参数分成了两部份
//并且返回地址前会把开辟的空间置为0（速度更慢）
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//============================== realloc ==============================
//当之前申请的空间的大小不够用了怎么办？那就再调整一下
//如果p指向的空间之后有足够的内存空间可以追加，则直接追加后返回p
//如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间,最后返回新开辟的内存空间地址
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//
//	int* p2 = realloc(p, 40);
//	
//	if (p2 != NULL)            //开辟失败会返回错误地址，得先用新的变量接收
//	{
//		p = p2;
//		//再进行操作
//	}
//
//	free(p);
//	p = NULL;
//	p2 = NULL;
//
//	return 0;
//}

//当realloc第一个参数为NULL时，可当作malloc使用
//int* p = realloc(NULL, 20);

//=========================== 错误例题示范 ============================

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);    //函数结束变量消失，开辟空间未释放且无法找到（内存泄露错误）
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);             //传值
//	strcpy(str, "hello world"); //str并未改变，对NULL操作又导致错误
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//======================== 改正
//void GetMemory(char* *p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);             //传址
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//=====================错误二，返回栈空间地址====================
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;                   //地址是返回去了，数组却消失了
//}                               //造成非法访问
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}