#include <stdio.h>

int main(void)
{
	int  a;
	printf("정수 입력 :  ");
	scanf_s("%d", &a);
	if (a%3 ==0 && a%7==0)
		printf("3의 배수이면서 7의 배수임 \n");  //이면서(그리고) and = &&, or = ||
	else
		printf("3과 7의 배수가 아님 \n");
	return 0;
}