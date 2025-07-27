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
	//a �迭���� �ּ�
	printf("a:%s\n\n", a);               //��
	printf("a:%p\n\n", a);               //�ּ�
	printf("&a:%p\n\n", &a);             //�ּ�
	printf("&a[0]:%p\n\n", &a[0]);       //�ּ�
}

void cp2()
{
	char b[30] = "hello";
	printf("b:%p\n\n", b);              //�ּ�
	printf("&b[0]:%p\n\n", &b[0]);
	printf("b+1:%p\n\n", b + 1);        //�ּ�
	printf("&b[1]:%p\n\n", &b[1]);
	printf("b+2:%p\n\n", b + 2);        //�ּ�
	printf("&b[2]:%p\n\n", &b[2]);
}

void cp3()
{
	char k[10];
	*k = 'h'; //*(k + 0);               //k�� 0��° �ּ�
	*(k + 1) = 'e';
	*(k + 2) = 'l';
	*(k + 3) = 'l';
	*(k + 4) = 'o';
	*(k + 5) = '\0';                    //NULL������ ������ ���� �ǹ���

	printf("k : %s\n\n", k);            //k �迭 ��
	printf("*k : %c\n\n", *k);          //k�� ���� 0��° ��
	printf("*(k+1) : %c\n\n", *(k+1));  //k+1 ��
}