#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��λ�ļ�ָ�룬�ı�ƫ����fseek();
//��ȡƫ����ftell();
//rewind(pf);������ָ��ص���ʼλ��
//int main()
//{
//	int pos = 0;
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1����λ�ļ�ָ��
//	fseek(pf, 2, SEEK_CUR);  //ƫ��2���ӵ�ǰλ�ã�SEEK_END�ļ�ָ��ĩβ,SEEK_SET�ļ�ָ�뿪ͷ
//	//2����ȡ�ļ�
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

//=============================���� feof ���Դ���=========================
int main()
{
	int ch = 0;

	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}

	//���ļ���û���⣬��ʼ��ȡ
	while ((ch = fgetc(pf)) != EOF)  //getc(EOF),gets(NULL)������ͽ�����������
	{
		putchar(ch);
	}
	if (ferror(pf))                  //���Բ��������Ƿ���ִ�����󷵻�0
	{                                //��ִ�У�����Ͳ�ִ����
		printf("error\n");
	}
	else if (feof(pf))               //���жϷ���ֵ�Ƿ�ΪEOF��NULL
	{
		printf("end of file");
	}

	fclose(pf);
	pf = NULL;

	return 0;
}