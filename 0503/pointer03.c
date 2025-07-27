#include <stdio.h>

int main(void)
{ //void는 형없음, ()써도 됨
   //정수형 a b 변수 선언 a는 50 b는 300을 줌
    int a = 50;
    int b = 300;
    // int  a=50,  b=300;
    printf("a는  %d\n", a);
    printf("b는  %d\n", b);
    // 함수 호출:  fun1함수이름 씀
    fun1(a, b);    //fun1 함수로 가는데 a값인 50, b의 값인 300을 가지고 감
    //fun1() -> 인수가 없음 
    //fun1(100, 200)->인수가 정수형 숫자 2개


    return 0;// 성공적인 반환
}

void  fun1(int  x, int   y)  //매개변수 정수형 x, y 받음
//함수이름  fun1,   매개변수는 ( )안에 씀
{  //함수는 {   } 

}