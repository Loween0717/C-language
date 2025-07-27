#include<stdio.h>

int main(void)
{
	int scores[5]; //점수를 버방할 배열 선언
	int sum = 0;   //누적하여 합을 구할 변수라 반드시 0으로 초기화 함
	int i, avg;    //평균 변수

	for (i = 0; i < 5; i++) //0~4
	{
		printf("학생들의 성적을 입력하시오 : ");
		scanf_s("%d", &scores[i]); //scores[0]~scores[4] 에 들어갈 값 입력, scanf 수행시 배열요소에 &붙임
	}

	for (i = 0; i < 5; i++)
	{
		sum += scores[i]; //scores[0]~scores[4] 을 반복하면서 각 값을 sum에 누적하면서 더함
	}

	avg = sum / 5; // 평균 구함
	printf("성적 평균 = %d\n", avg);

	return 0;
}