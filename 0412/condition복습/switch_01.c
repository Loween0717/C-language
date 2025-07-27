#include <stdio.h>

	/*평점(grade)이 5점이면 훌륭해요/ 4점이면  좋아요/ 3점이면 평균이네요/
		2점이면 노력하세요/ 1점이면 노력하세요/ 그외 는 잘못 입력된 학점입니다*/

int main(void)    

{
	int grade;
	printf("조건문 switch 예제 실습 \n\n");

	printf("평점을 입력하세요: ");
	scanf_s("%d", &grade); //평점 입력 받기

	switch ( grade ) {
	case 5:
			printf("훌륭해요!");
			break; //반복문 탈출
		
	case 4:
			printf("좋아요!");
			break; //반복문 탈출

	case 3:
			printf("평균이네요!");
			break; //반복문 탈출

	case 2:
			printf("노력하세요!");
			break; //반복문 탈출

	case 1:
			printf("노력하세요!");
			break; //반복문 탈출

	default:
			printf("잘못 입력된 학점입니다");


	}
	return 0;
}
