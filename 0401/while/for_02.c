#include <stdio.h>

int main(void)
{
	sum1(); //함수를 호출(가서 수행하고 돌아와라)
	sum2(); //함수를 호출(가서 수행하고 돌아와라)
	sum3(); //함수를 호출(가서 수행하고 돌아와라)

	return 0;
}

int sum1(void) //1~100합 구하기
{
	int i, sum;

	sum = 0;
	for (i = 1; i <= 100; i++)
		sum += i;              //sum=sum+1 sum에 i의 값을 계속 누적함

	printf("1부터 100까지의 정수의 합=%d\n", sum);

	return 0;
}

int sum2(void) //1~100 정수인 짝수 합 구하기
{
	int i, sum;

	sum = 0;
	for (i = 0; i <= 100; i = i + 2)
		sum += i;

	printf("1부터 100까지의 짝수인 정수의 합 = %d\n", sum);

	return 0;
}

int sum3(void) //1~100 정수인 혹수 합 구하기
{
	int i, sum;

	sum = 0;
	for (i = 1; i <= 100; i = i + 2)
		sum += i;

	printf("1부터 100까지의 홀수인 정수의 합 = %d\n", sum);


	return 0;
}