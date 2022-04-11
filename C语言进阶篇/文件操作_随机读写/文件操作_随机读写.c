#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//定位文件指针，改变偏移量fseek();
//读取偏移量ftell();
//rewind(pf);可以让指针回到起始位置
//int main()
//{
//	int pos = 0;
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1、定位文件指针
//	fseek(pf, 2, SEEK_CUR);  //偏移2，从当前位置，SEEK_END文件指针末尾,SEEK_SET文件指针开头
//	//2、读取文件
//	printf("%c\n", fgetc(pf));
//
//	pos = ftell(pf);
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//=============================利用 feof 测试错误=========================
int main()
{
	int ch = 0;

	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}

	//打开文件若没问题，开始读取
	while ((ch = fgetc(pf)) != EOF)  //getc(EOF),gets(NULL)，错误和结束都返回它
	{
		putchar(ch);
	}
	if (ferror(pf))                  //可以测试流上是否出现错误错误返回0
	{                                //先执行，后面就不执行了
		printf("error\n");
	}
	else if (feof(pf))               //能判断返回值是否为EOF或NULL
	{
		printf("end of file");
	}

	fclose(pf);
	pf = NULL;

	return 0;
}