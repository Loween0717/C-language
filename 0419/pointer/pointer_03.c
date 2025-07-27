#include<stdio.h>

int main(void)
{
	int i = 3000;
	int *p = NULL;
	
	p = &i;                      //i주소를 p가 기억

	printf("p = %p\n", p);       //%p : 주소를 출력하는 서식 문자
	                             //문자
	printf("&i = %p\n\n", &i);   //주소
	
	printf("i = %d\n", i);    // 값
	printf("*p = %d\n", *p);  // *포인터변수 => 값

	//일반 변수의 sizeof 연산은 Data Type의 크기에 따라 달라진다.
	//포인터 변수는 주소만을 가지므로, Data Type과 무관하게, 크기는 항상 8byte이다

	printf("%d\n", sizeof(i));   //int = 4bite
	printf("%d\n", sizeof(p));   //포인터 변수(주소) = 8bite
	printf("%d\n", sizeof(&i));  //&는 주소 = 8bite
	printf("%d\n", sizeof(*p));  //*은 값 = 4bite

	return 0;
}