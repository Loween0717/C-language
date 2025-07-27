#include<stdio.h>

int fun1();  // 함수 원형(함수 선언)
int fun2();

int main(void)
{
	printf("메인 시작\n");                //1
	fun1();                               //2
	printf("메인 끝\n");                  //12
	return 0;                             //13
}

int fun1()                                //3
{
	printf("fun1 함수 시작\n");           //4
	fun2();                               //5
	printf("fun1 함수 끝\n");             //10
	return 0;                             //11
}

int fun2()                                //6
{
	printf("fun2 함수 시작\n");           //7
	printf("fun2 함수 끝\n");             //8
	return 0;                             //9
}