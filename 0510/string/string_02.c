#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h> 
int main(void)
{
    int i;
    char fruits[3][20]; // 2차원 문자 배열
    //3행 20열( 3개 데이터, 데이터마다 20자리이내)
    for (i = 0; i < 3; i++) {// 0부터 2까지 3번 반복
        printf("과일 이름을 입력하시오: ", fruits[i]);
        scanf("%s", fruits[i]); // 과일을 하나씩 입력받음
    }

    for (i = 0; i < 3; i++)
        printf("%d번째 과일: %s\n", i, fruits[i]);//3개의 데이터 출력
    return 0;
}