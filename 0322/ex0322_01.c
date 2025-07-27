#include <stdio.h>                        /*전처리기, 표준입출력.h*/

                                         //집가고싶다

int main(void)                           //함수 반드시 필요
{                                        //중괄호 안에 기술

 
	                                     //들여쓰기
	printf("나이 : %d\n",18);
	printf("키   : %.1f\n",160.3);

	printf("\n");
	printf("\n");
	printf("\n");

	printf("국어 : %d\t", 90);
	printf("영어 : %d\t", 88);
	printf("수학 : %d\n", 74);
	printf("평균 : %.2f\n", 84.00);
	printf("평균 : %d\n", (90+88+74)/3);

	printf("\n");
	printf("\n");
	printf("\n");

	printf("문자열 : %s\n", "hello");  /*문자열은 글자수가 여러개% s
	                                   문자열은 큰 따옴표("")*/
	printf("문자 : %c\n", 'a');        //문자 1자는 %c
	                                   //문자를 감싸는 작은 따옴표 ('')

	printf("\n");
	printf("\n");
	printf("\n");

	printf("내소개\n");
	printf("\n");
	printf("이름   : %10s\n", "김민섭");             //% 20s : 문자열 20자리 차지 = 오른쪽 정렬(기준) - 왼쪽 공백
	printf("학교   : %20s\n", "비봉고");             //%-20s :                    = 왼쪽   정렬(기준) - 오른쪽 공백
	printf("나이   : %d\n", 19);
	printf("혈액형 : %c\n", 'A');
	printf("키     : %.1f\n", 160.3);


	return 0;
}