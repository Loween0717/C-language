#include<stdio.h>

int count01(int scores[], int n);     //함수 원형, 함수가 main아래 위치 미리 선언

int main(void)                        //시작
{
	int cnt[6] = {30,20,40,50,60,30}; //배열 6개 초기화
	int avg;                          //평균변수

	avg = count01(cnt, 6); 

	// **배열 시작 주소를 보냄

	printf("평균은 %d입니다. \n", avg); //호출한 함수에서 평균 결과를 받아 avg에 저장

	return 0;
}

int count01(int c[6], int n) //배열 c 받음
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)//n에 6가 있으므로 0~5까지 반복
		sum += c[i];       //배열 요소 0~4까지의 값을 sum 변수에 계속 누적하여 더함
	return sum / n;        //sum(누적합계)를 배열요소 개수인 5로 나누어 평균 구하여 보냄
}