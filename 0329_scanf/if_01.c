#include <stdio.h>

int main(void)
{
	int a;

	printf("정수를 입력하시오:");
	scanf_s("%d", &a);

	if (a %5 == 0)                          // 조건식 뒤에는 세이콜론(;) 없음
		printf("5위배수입니다.\n");         //조건식과 문장이 합쳐 하나의 문장

	printf("입력된 값은 %d입니다.", a);

	return 0;


}