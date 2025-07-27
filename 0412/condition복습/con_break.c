#include <stdio.h>

int main(void)
{
    int sum = 0; // 합계 누적할 변수, 반드시 0으로 초기화해야함
    for (int i = 1; i <= 3; i++) { // 1부터 1증가하여 3보다 크거나 같을때까지
        if (i == 2)         //2는 건너뛰기
            continue; //다음 반복을 시작
        sum += i;  // sum=sum+i   0+1+3 = 4
    }
    printf("continue 결과는 %d\n", sum);
    printf("\n\n");
    ////////////////////////////////////////////////////////////////////////////

    int num = 1; //1로 초기화
    for (int i = 1;   ; i++) { //조건식이 없음
        num = num * i;  //계속 i를 곱해감   1*2*3*4 = 24
        if (i > 3)    //4일때 탈출
            break;  // 반복문 탈출
    }
    printf("break문제 결과는 %d\n", num);
    return 0;
}

//continue = 반복한다.
//break    = 탈출한다.