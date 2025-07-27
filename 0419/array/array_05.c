#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int s[3][3];                         //2차원 배열 선언, 3행 3열
	int i, j;                            //2개의 인덱스 변수

	srand((unsigned)time(NULL));         //난수 생성기 초기화

	for (i = 0; i < 3; i++)              //0~2행
		for (j = 0; j < 3; j++)          //0~2열
			s[i][j] = (rand() % 50) + 1; //1~50까지의 임의의 난수 발생

	for (i = 0; i < 3; i++) {            //0~2행
		for (j = 0; j < 3; j++)          //0~2열
			printf("%02d", s[i][j]);     //5->05  15->15 - 두자리에 맞춤, 0을 넣음, 두자리보다 크면 무시

		printf("\n");
	}

	return 0;
}