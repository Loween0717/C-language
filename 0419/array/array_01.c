#include<stdio.h>

int main(void)
{
	int i;
	
	int scores[5] = { 10,20,30 };            //10 20 30 0 0
	int scores[5] = { 10 };                  //10 0 0 0 0
	int scores[5] = { 0 };                   // 0 0 0 0 0
	int scores[5] = { 10,20,30,40,50,60,70 };//오류


	int scores[] = { 10,20,30,40,50 }; //배열 크기를 비워놓으면 자동으로 초기값들의 개수만큼 배열크기 잡음

	
	//int scores[5] = { 10,20,30,40,50 }; //{}로 초기화
	                                      //함수 선언 + 초기화 동시
	
	//int scores[5]; //정수형배열 5개 : 4bite * 5개 = 20bite

	//scores[0]=10;
	//scores[1]=20;
	//scores[2]=30;
	//scores[3]=40;
	//scores[4]=50;


	for (i = 0; i < 5; i++)   //반복문 사용하여 배열 요소 값을 출력
		printf("scores[인덱스 %d]=%d\n", i, scores[i]);

	return 0;
}