#include <stdio.h>

struct S
{
	char c1;
	int a;
	char c2;
};

//����0�ǽṹ���ַ����ô��Ա��ַ����ƫ����
#define OFFSTEOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)

int main()
{
	printf("%d\n", OFFSTEOF(struct S, c1));
	printf("%d\n", OFFSTEOF(struct S, a));
	printf("%d\n", OFFSTEOF(struct S, c2));

	return 0;
}