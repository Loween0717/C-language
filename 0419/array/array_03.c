#include<stdio.h>
#define STUDENTS 5  //기호상수(대문자), 5를 STUDENTS라 정의함

int get_avg(int scores[], int n); //함수 원형, 함수가 main아래 위치 미리 선언

int main(void)   //시작
{
	int scores[STUDENTS] = { 1,2,3,4,5 }; //배열의 5개 요소 초기화
	int avg;

	//평균 구하기 위해 함수 호출
	avg = get_avg(scores, STUDENTS);  //인수로 scores배열과 5를 보냄, 배열이 인수인 경우는 배열의 주소가 전달된다.      보내는 것 = 인수
	
	//배열 전체를 사용할때는 scores, *** 배열 시작 주소를 보냄
	
	printf("평균은 %d입니다. \n", avg); //호출한 함수에서 평균 결과를 받아 avg에 저장

	return 0;
}

int get_avg(int scores[], int n)      //배열의 원본이 전달, 매개변수는 정수형 배열과 5를 받음                           받는 것 = 매개변수
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++) //n에 5가 있으므로 0~4까지 반복
		sum += scores[i];   //배열 요소 0~4까지의 값을 sum 변수에 계속 누적하여 더함
	return sum / n;         //sum(누적합계)를 배열요소 개수인 5로 나누어 평균 구하여 보냄
}