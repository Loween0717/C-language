#include <stdio.h>

int max(int x, int y)     //반환형은 int(정수), 함수이름은 max, 매개변수는 x, y
{
	if (x > y)
		return x;         //x 값을 반환함
	else
		return y;         //y 값을 반환함
}

int main(void)
{
	int a, b, larger;

	printf("정수 2개를 입력하시오 : ");
	scanf_s("%d %d", &a, &b);

	larger = max(a, b);                    //함수호출 (인수 a, b를 보냄)
	                                       //return 뒤의 값을 받아서 larger에 대입함

	printf("더 큰 값은 %d입니다. \n", larger);


	return 0;

}