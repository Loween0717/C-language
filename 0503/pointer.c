#include <stdio.h>

int main(void)
{
	int a = 200;
	int b = 300;

	int* p1 = NULL;

	p1 = &a;

	printf("a=%d\n", a);
	printf("&a=%p\n\n", &a);

	printf("p1=%d\n", *p1);
	printf("p1=%p\n\n", p1);

	p1 = &b;

	printf("a=%d\n", b);
	printf("&a=%p\n\n", &b);

	printf("p1=%d\n", *p1);
	printf("p1=%p\n\n", p1);

	return 0;
}