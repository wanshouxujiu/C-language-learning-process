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
//		//д��־�ļ�
//		fprintf(pf, "file:%s line:%d date:%s time:%s i:%d\n", __FILE__, __LINE__, __DATE__, __TIME__,i);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//=================================== #�� =====================================
//#define PRINT(X) printf("��ĸ"#X"��ֵ�ǣ�%d\n", X)
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

//================================= ##�� ====================================
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

//============================ �и����õĺ���� ============================
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//	printf("%d\n", MAX(a++, b++));  //12(�𰸴��󣬸����ò���ֱ���滻����)
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

//=============================== ��������ָ�� ===========================
//1���Ƿ���
//#define ABC

//int main()
//{
//#ifdef ABC
//	printf("�ж����");
//#endif
//
//#ifndef ABC
//	printf("û�����");
//#endif
//
//#if !defined (ABC)
//	printf("û�����");
//#endif
//
//	return 0;
//}

//2���������ʽ
//int main()
//{
//#if 1
//	printf("����֧");
//#endif
//
//	return 0;
//}

//int main()
//{
//#if 1 == 2
//	printf("���֧");
//#elif 2 == 2
//	printf("���֧");
//#else
//	printf("���֧");
//#endif
//
//	return 0;
//}