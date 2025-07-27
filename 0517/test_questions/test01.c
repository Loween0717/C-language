#include <stdio.h>

int main()
{
	int* pnum, num1 = 200, num2 = 300;
	pnum = &num1;                                //num1 주소
	(*pnum)  +=  40;                             //가르키는 주소의 값
	pnum = &num2;                                //num2 주소
	(*pnum)  -=  50;                             //가르키는 주소의 값
	printf("num1=%d   num2=%d\n", num1, num2);   //240 250 \n 줄바꿈
	return 0;
}