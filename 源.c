#include<stdio.h>

//C语言定义变量只能在开头，也就是 { 的后面

int main()
{
	int a, b, c = 2;    //这样连续赋值只有 c 赋到了2
	printf(" %d %d %d", a, b, c);
	return 0;
}

int main()
{
	//enum sex
	//{
	//	nan,
	//	nv,
	//	baomi
	//};

	//printf("%d%d%d", nan, nv, baomi);

	//char a[] = "abc";
	//char b[] = { 'a', 'b', 'c', };

	//printf("%d\n", strlen(a));
	//printf("%d\n", strlen(b));

	//int a;

	//printf("你要好好学习吗?\n做出你的选择(1/0)>:");
	//scanf("%d", &a);

	//if (a == 1)
	//{
	//	printf("好工作\n");
	//}
	//else
	//{
	//	printf("回家卖红薯\n");
	//}

	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	//int i = 0;

	//while (i < 10)
	//{
	//	printf("%d", arr[i]);
	//	i++;
	//}


	//int a;
	//int b;
	//int c;
	//int d;

	//printf("请输入三个数输出最大值：");
	//scanf_s("%d %d %d", &a, &b, &c);

	//if (a >= b)
	//{
	//	d = a;
	//}
	//else
	//{
	//	d = b;
	//}

	//if (d >= c)
	//{
	//	printf("最大值为%d",d);
	//}
	//else
	//{
	//	printf("最大值为%d",c);
	//}

	//extern int z;
	//printf("%d", z);

	//int max(int x, int y)
	//{
	//	if (x > y)
	//		return x;
	//	else
	//		return y;
	//}

	//int main()
	//{
	//	int Max;
	//	int a = 1;
	//	int b = 2;

	//	Max = max(a, b);
	//	printf("最大值为：%d", Max);

//#define max(x,y) (x>y?x:y)

	//int a = 10;

	//int* p = &a;
	//*p = 20;

	//printf("%d", a);



	return 0;
}
