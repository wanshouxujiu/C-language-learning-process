#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cerrno>

//�Ӵ�����ȡ���ݣ�д�����ݶ���һ�����������Ȼ��������˲Ż�����ó���д�����

//�������Դ�һ���ṹ�����ͣ������ض���ΪFILE��
//���ļ��������ڴ��л����һ���ļ���Ϣ��������һ��FILEָ�뽫��Ϣ������Ϣ��������

//=================================��������==================================

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("text.txt", "wb");    //��һ���ļ�(û�оʹ���)����д�������Ƶķ�ʽ(wb)
//	fwrite(&a, 4, 1, pf);                  //����ַa�Ķ�����д�ĸ��ֽڣ�дһ�Σ�д��pf���ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//==============================�������ʧ���ж�===============================

//int main()
//{
//	FILE* pf = fopen("abcd.txt", "r");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));   //û������ļ�
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//==============================�ļ���˳���д=============================

//���뵽����ļ��� fputc
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");    //����д��Ȩ��
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


//��� fgetc
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");    //�������Ȩ��
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


//����� fgets
//int main()
//{
//	char buf[1024] = { 0 };
//
//	FILE* pf = fopen("test.txt", "r");    //�������Ȩ��
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


//�Ӽ�����Ļ�������
//int main()
//{
//	char buf[1024] = { 0 };
//
//	fgets(buf, 1024, stdin);  //Ĭ�ϼ�������
//	fputs(buf, stdout);       //Ĭ����Ļ���
//
//	return 0;
//}


//��ʽ������ fprinf          (��ʽ����%d %s %c...)
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


//��ʽ����� fscanf
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


//����ת�ַ� sprintf fscanf
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
//	//�Ѹ�ʽ��������ת�����ַ�����buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//
//	//��buf����ȡ���ݴ浽�ṹ�������
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


//�����ƶ�д fwrite fread
//struct S
//{
//	char name[10];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = {"����", 20, 55.6};
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