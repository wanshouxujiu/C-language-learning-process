#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#include <errno.h>

//=============================== malloc �� free ================================
//���ٳɹ�����һ��ָ�룬���ǿ�ռ����ʼ��ַ
//ʧ�ܷ���NULL
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));  //���ܿ���ʧ�ܣ�ʹ�������ʽ��ӡԭ��
//	}
//	else
//	{
//		//����ʹ��
//		int i = 0;
//		for (i = 0; i < 10; i++)        //���������һ������
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", * (p + i));
//		}
//	}
//
//	//������Ŀռ䲻��Ҫʹ��ʱ��ʹ��free�������ռ仹������ϵͳ
//	free(p);
//	p = NULL;    //P���������ҵ��ǿ����ɵĿռ䣬���׷���Σ��
//
//	return 0;
//}

//=============================== calloc ==============================
//����ֵ����void���ͣ����ǲ����ֳ���������
//���ҷ��ص�ַǰ��ѿ��ٵĿռ���Ϊ0���ٶȸ�����
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
//��֮ǰ����Ŀռ�Ĵ�С����������ô�죿�Ǿ��ٵ���һ��
//���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�Ӻ󷵻�p
//���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ�,��󷵻��¿��ٵ��ڴ�ռ��ַ
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
//	if (p2 != NULL)            //����ʧ�ܻ᷵�ش����ַ���������µı�������
//	{
//		p = p2;
//		//�ٽ��в���
//	}
//
//	free(p);
//	p = NULL;
//	p2 = NULL;
//
//	return 0;
//}

//��realloc��һ������ΪNULLʱ���ɵ���mallocʹ��
//int* p = realloc(NULL, 20);

//=========================== ��������ʾ�� ============================

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);    //��������������ʧ�����ٿռ�δ�ͷ����޷��ҵ����ڴ�й¶����
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);             //��ֵ
//	strcpy(str, "hello world"); //str��δ�ı䣬��NULL�����ֵ��´���
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//======================== ����
//void GetMemory(char* *p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);             //��ַ
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//=====================�����������ջ�ռ��ַ====================
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;                   //��ַ�Ƿ���ȥ�ˣ�����ȴ��ʧ��
//}                               //��ɷǷ�����
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