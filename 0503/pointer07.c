#include<stdio.h>

void cp1();
void cp2();
void cp3();

int main(void)
{
	cp1();
	cp2();
	cp3();
	return 0;
}

void cp1()
{
	char a[30] = "hello";
	//a 배열명은 주소
	printf("a:%s\n\n", a);               //값
	printf("a:%p\n\n", a);               //주소
	printf("&a:%p\n\n", &a);             //주소
	printf("&a[0]:%p\n\n", &a[0]);       //주소
}

void cp2()
{
	char b[30] = "hello";
	printf("b:%p\n\n", b);              //주소
	printf("&b[0]:%p\n\n", &b[0]);
	printf("b+1:%p\n\n", b + 1);        //주소
	printf("&b[1]:%p\n\n", &b[1]);
	printf("b+2:%p\n\n", b + 2);        //주소
	printf("&b[2]:%p\n\n", &b[2]);
}

void cp3()
{
	char k[10];
	*k = 'h'; //*(k + 0);               //k는 0번째 주소
	*(k + 1) = 'e';
	*(k + 2) = 'l';
	*(k + 3) = 'l';
	*(k + 4) = 'o';
	*(k + 5) = '\0';                    //NULL값으로 문자의 끝을 의미함

	printf("k : %s\n\n", k);            //k 배열 값
	printf("*k : %c\n\n", *k);          //k의 시작 0번째 값
	printf("*(k+1) : %c\n\n", *(k+1));  //k+1 값
}