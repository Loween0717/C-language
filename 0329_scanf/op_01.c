#include<stdio.h>

//복합 대입 연산자 프로그램
int main(void)
{
	int x = 10, y = 10;

	x += 1; // x = x+1
	y *= 2; // y = y*2

	printf("x=%d\t y=%d\n", x, y); //11 20


	int x = 10, y = 5, z = 20;
	int sum;
	x += y;                     // x=x+y
	y -= x;                     // y=y-x
	z %= y;                     // z=z%y

	sum = x + y + z;
	printf("Sum : %d\n", sum);

	return 0;
}