#include<stdio.h>

int main(void)
{
	int i = 10;
	double f = 12.3;
	int* pi = NULL;           //pi는 포인터변수, 32비트 정수형 저장공간의 주소를 갖는 변수

	//*의 역할 : 주소를 저장하는 변수를 저장함
	double* pf = NULL;        //NULL은 아무것도 가리키지 않음
	pi = &i;                  //i변수의 주소를 pi 포인터 변수에 줌
	pf = &f;                  //f변수의 주소를 pf 포인터 변수에 줌
	//&주소연산자 : 변수가 가진 주소를 변환해주는 연산자

	//주소 출력
	printf("%p %p \n", pi, &i);
	printf("%p %p \n", pf, &f);

	printf("%d %d \n", *pi, i);  //포인터 변수인 pi에 *이 붙으면 pi가 기억하는 주소에 가서 그 값을 가져옴

	printf("%lf %lf \n", *pf, f);

	return 0;
}