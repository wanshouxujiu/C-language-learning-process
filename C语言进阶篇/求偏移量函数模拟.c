#include <stdio.h>

struct S
{
	char c1;
	int a;
	char c2;
};

//假设0是结构体地址，那么成员地址就是偏移量
#define OFFSTEOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)

int main()
{
	printf("%d\n", OFFSTEOF(struct S, c1));
	printf("%d\n", OFFSTEOF(struct S, a));
	printf("%d\n", OFFSTEOF(struct S, c2));

	return 0;
}