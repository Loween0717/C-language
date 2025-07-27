#include<stdio.h>

int main(void)
{
	int* pnum;
	int num1 = 200, num2 = 300;

	pnum = &num1;
	(*pnum) += 40;

	pnum = &num2;
	(*pnum) += 50;

	printf("num1=%d\t num2=%d", num1, num2);

	return 0;
}