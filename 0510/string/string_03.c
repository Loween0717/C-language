//한영 사전 구현
#define _CRT_SECURE_NO_WARNINGS    
#define page 5  //기호상수 선언, 5를 page라 정함

#include <stdio.h>
#include <string.h>   //strcmp 사용 위해 
int main(void)
{
    int i, index;
    char dic[5][2][30] = { //3차원 문자배열
       {"book", "책"},                  //dic[0][0]=>book   dic[0][1]=>책
       {"boy", "소년"},                 //dic[1][0]=>boy    dic[1][1]=>소년
       {"computer", "컴퓨터"},          //dic[2][0]=>computer    dic[2][1]=>컴퓨터
       {"apple", "사과"},               //dic[3][0]=>apple   dic[3][1]=>사과
       {"rain", "비"},                  //dic[4][0]=>rain    dic[4][1]=>비
    };
    char word[30];     //입력 문자열(30자이내)
    printf("단어를 입력하시오:");
    scanf("%s", word); //원하는 단어 입력

    for (i = 0; i < 5; i++) //0~4까지 반복
    {
        if (strcmp(dic[i][0], word) == 0)        // dic배열의 0번째 영어단어와 입력한 단어를 비교하여 같은지 물어봄
        {
            printf("%s: %s\n", word, dic[i][1]); // 같으면 해당 위치의 1번째 단어 출력
            return 0; // 끝냄
        }//if 끝      
    }//for 끝
    printf("사전에서 발견되지 않았습니다.\n");
}
