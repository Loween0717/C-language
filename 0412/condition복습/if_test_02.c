#include <stdio.h>

// 표준체중 =(키 -100) *0.9
//사용자의 키를 받아서 표준체중을 계산한 후 사용자의 체중과 비교하여 저체중인지, 표준체중인지, 과제중인지를 판단하는 프로그램
// if~else 사용

int main(void)    {
	double h, w, s; //h는 키, w는 몸무게, s는 표준체중

	printf(" 조건문 if  예제 실습\n\n ");

	printf("키를 입력하세요: ");
	scanf_s("%lf", &h); // double는 lf 로 표현

	printf("체중을 입력하세요:");
	scanf_s("%lf", &w);

	s = (h - 100) * 0.9; //표준체중 구하기
	if (w < s)
		printf("저체중입니다.\n");

	else if (w > s)
	{
		printf("과체중입니다.\n");                  
		printf("다이어트가 필요니다.\n");
	}

	else
		printf("표준체중입니다.");


	return 0;
}