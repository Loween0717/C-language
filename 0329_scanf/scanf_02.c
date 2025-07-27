#include <stdio.h>

int main(void)
{

    char name[30];                             //문자배열, 이름
    char school[50];                           //문자배열, 학교
    int age;                                   //정수형숫자, 나이   
    double height;                             //실수형 숫자, 키   
    char grade;                                //문자, 학점

    printf("이름 입력 : ");
    scanf_s("%s", name, 30);
                                               //문자열은 & 안 붙여도 됨, 세번째 자리에 글자수 입력, 이름 입력받음
    printf("학교 입력 : ");
    scanf_s("%s", school, 50);
                                               //문자열은 & 안 붙여도 됨, 세번째 자리에 글자수 입력, 학교 입력받음   
    printf("나이 입력 : ");
    scanf_s("%d", &age);                       //나이 입력받음 , &붙임, 정수형숫자 %d
    printf(" 키 입력 : ");
    scanf_s("%lf", &height);                   //키   입력받음 , &붙임, 실수형숫자 %f
    printf("학점 입력(A~F) : ");
    scanf_s(" %c", &grade, 1);                 //문자, 세번째 자리에 문자1자리수 입력,학점 입력받음, &붙임


    printf("내 소개 \n\n  ");
    printf("%s\n ", name);                     //이름을 화면에 출력
    printf("%s\n ", school);                   //학교 출력   
    printf("%d\n ", age);                      // 나이 출력   
    printf("%lf\n ", height);                  // 키 출력, 소수이하 1자리
    printf("%c\n ", grade);                    //학점 출력

    return 0;
}