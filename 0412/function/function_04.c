#include<stdio.h>

int fun1();  // �Լ� ����(�Լ� ����)
int fun2();

int main(void)
{
	printf("���� ����\n");                //1
	fun1();                               //2
	printf("���� ��\n");                  //12
	return 0;                             //13
}

int fun1()                                //3
{
	printf("fun1 �Լ� ����\n");           //4
	fun2();                               //5
	printf("fun1 �Լ� ��\n");             //10
	return 0;                             //11
}

int fun2()                                //6
{
	printf("fun2 �Լ� ����\n");           //7
	printf("fun2 �Լ� ��\n");             //8
	return 0;                             //9
}