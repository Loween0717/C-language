// 참조(주소)에 의한 호출
#include <stdio.h>
void fun2(int* p1, int* p2);

int main(void)
{
    int a = 50, b = 300;
    printf("a는 %d", a);
    printf("b는 %d", b);

    fun2(&a, &b); //함수 호출, 주소 전달
    // a주소, b 주소 전달
    printf("a는 %d", a); //1000
    printf("b는 %d", b); //5000


    return 0;
}


void fun2(int* p1, int* p2)//개수 2개받음, 주소로 받음
//a 주소를 p1 기억,  b 주소를 p2 기억
{

    printf(" p1는 %p  p2는 %p\n ", p1, p2); //p1과 p2 기억(주소)
    printf(" p1값  %d   p2 값 %d", *p1, *p2);  //50   300출력
    //p1 가르키는 주소에 가서 그 값,
   //p2 가르키는 주소에 가서 그 값

    *p1 = 1000;
    *p2 = 5000;
    printf(" p1값  %d   p2 값 %d", *p1, *p2);



}