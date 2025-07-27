#include <stdio.h>


//함수 원형, 함수 선언부(함수의 목록)
int get_integer();
int add(int x, int y);


int main(void)
{
	int x = get_integer(); //함수 호출(인수는 없음)하여 변환된 정수형 숫자를 x에 대입
	int y = get_integer(); //함수 호출(인수는 없음)하여 변환된 정수형 숫자를 y에 대입

	int sum = add(x, y);
	printf("두 수의 합은 %d입니다. \n", sum); //함수 호출(인수는 x, y 두 개), 반환된 정수 숫자를 sum에 대입

	return 0;
}

//함수 정의부(코드부)
int get_integer()
{
	int value;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &value);             //value 변수값을 보냄

	return value;
}

//함수 정의부(코드부)
int add(int x, int y)                  //매개변수 2개, x->x y->y
{
	return x + y;                      //더한 결과값을 보냄
}