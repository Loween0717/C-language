//포인터와 함수의 관계
#include <stdio.h>

void sub(int b[], int n);

int main(void)
{
	int a[3] = { 1,2,3 };  //a 배열

	printf("%d %d %d \n", a[0], a[1], a[2]);

	sub(a, 3);             //함수 호출하면서 인수 2개 보냄
	                       //인수를 배열 이름 a(주소), 숫자 3 두가지 보냄

	printf(" % d % d % d\n", a[0], a[1], a[2]); //4, 5, 6 주소를 보내면 같은 방

	return 0;
}

void sub(int b[], int n)   //매개 변수로 2개 받음
                           //a -> b 배열[3] 받음, [3]은 [] 생략 가능 
						   //3 -> n에 받음
{
	b[0] = 4;              //값 변경
	b[1] = 5;
	b[2] = 6;

}