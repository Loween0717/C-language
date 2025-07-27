#include <stdio.h>
//문제 1 : 100, 200을 보내어 더하기 함수 (sum1) 호출 후 반환된 값을 출력
//문제 2 : 20, 50을 보내어 곱하기 함수 (mull) 호출 후 반환된 값을 출력




int main(void)
{

	int j = sum1(100, 200);        //함수 호출 sum1, 인수 100, 200 보냄
	                               //함수에서 돌아오면 300 반환 받음
	                               //반환받은 300을 정수형 변수 변수 j에 저장
	printf("더한 결과는 %d\n", j);  //%d의 자리에 j값 출력


	int k = mull(20, 50);

	printf("곱한 결과는 %d\n", k);

	return 0;
}

int sum1(int a, int b)   //함수 정의, 100->a  200->b
{
	int h = a + b;       // 100+200 => h 300 (정수)

	return h;            // h값을 반환 (결과값 정수 = int)
}

int mull(int c, int d)
{
	int k = c * d;

	return k;
}