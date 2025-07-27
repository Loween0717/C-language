#include<stdio.h>

int main(void)
{
	int a = 100; //일반 변수 선언(값)
	int b = 200;
	int* p;      //포인터 변수 선언(주소)

	p = &a;      //a주소를 포인터 변수 p에 저장
	printf("a 주소 = %p\n", &a);           //a의 주소
	printf("p 주소 = %p\n", p);            //p의 주소 출력
	printf("a 값 = %d\n", a);              //a의 값
	printf("p 값 = %d\n", *p);             //p가 가르키는 주소의 값

	p = &b;      //b주소를 포인터 변수 p에 저장 (a의 주소 => b 주소 기억)
	printf("p 주소 = %p\n, p");             //p의 주소 출력
	printf("p 값 = %d\n, *p");               //p가 가르키는 주소의 값

	return 0;
}