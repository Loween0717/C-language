#include <stdio.h>

int main(void)
{
	int x;

	printf("변수x의 크기: %d\n", sizeof(x));
	printf("문자 char형의 크기: %d\n", sizeof(char));
	printf("정수 short 형의 크기: %d\n", sizeof(short));
	printf("정수 int 형의 크기: %d\n", sizeof(int));
	printf("정수 long 형의 크기: %d\n", sizeof(long));
	printf("실수 float 형의 크기: %d\n", sizeof(float));
	printf("실수 double 형의 크기: %d\n", sizeof(double));

	return 0;
}