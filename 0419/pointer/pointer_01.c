#include<stdio.h>

int main(void)
{
	int i = 10;
	char c = 69;
	float f = 12.3;
	printf("i�� �� : %d\n", i);      //���� i�� �� ���
	printf("c�� �� : %c\n", c);      //���� c�� �� ���
	printf("f�� �� : %f\n", f);      //���� f�� �� ���

	//&  : �ּҿ�����(������ ������ �ִ� �ּҸ� �˷��ִ� ������)
	//%p : �ּҸ� ����ϴ� ���� ����

	printf("i�� �ּ� : %p\n", &i);   //���� i�� �ּ� ���
	printf("c�� �ּ� : %p\n", &c);   //���� c�� �ּ� ���
	printf("f�� �ּ� : %p\n", &f);   //���� f�� �ּ� ���

	return 0;
}