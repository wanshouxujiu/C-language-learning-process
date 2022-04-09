#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cerrno>

//从磁盘拿取数据，写入数据都有一个缓存区，等缓存区满了才会进行拿出和写入操作

//编译器自带一个结构体类型（名字重定义为FILE）
//对文件操作后内存中会出现一个文件信息区，定义一个FILE指针将信息区的信息储存起来

//=================================大致流程==================================

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("text.txt", "wb");    //打开一个文件(没有就创建)，以写、二进制的方式(wb)
//	fwrite(&a, 4, 1, pf);                  //将地址a的东西，写四个字节，写一次，写到pf的文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//==============================创建或打开失败判断===============================

//int main()
//{
//	FILE* pf = fopen("abcd.txt", "r");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));   //没有这个文件
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//==============================文件的顺序读写=============================

//输入到这个文件中 fputc
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");    //赋予写入权限
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//输出 fgetc
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");    //赋予读出权限
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//输出行 fgets
//int main()
//{
//	char buf[1024] = { 0 };
//
//	FILE* pf = fopen("test.txt", "r");    //赋予读出权限
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//从键盘屏幕输入输出
//int main()
//{
//	char buf[1024] = { 0 };
//
//	fgets(buf, 1024, stdin);  //默认键盘输入
//	fputs(buf, stdout);       //默认屏幕输出
//
//	return 0;
//}


//格式化输入 fprinf          (格式化：%d %s %c...)
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "bit" };
//
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//格式化输出 fscanf
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//	printf("%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//数据转字符 sprintf fscanf
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "bit" };
//	struct S tmp = { 0 };
//
//	char buf[1024] = { 0 };
//
//	//把格式化的数据转换成字符存入buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//
//	//从buf中提取数据存到结构体变量中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//二进制读写 fwrite fread
//struct S
//{
//	char name[10];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = {"张三", 20, 55.6};
//
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

struct S
{
	char name[10];
	int age;
	double score;
};

int main()
{
	struct S tmp = { 0 };

	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}

	fread(&tmp, sizeof(struct S), 1, pf);
	printf("%s %d %lf", tmp.name, tmp.age, tmp.score);

	fclose(pf);
	pf = NULL;

	return 0;
}