#include<stdio.h>

int main(void)
{
	int a = 100; //�Ϲ� ���� ����(��)
	int b = 200;
	int* p;      //������ ���� ����(�ּ�)

	p = &a;      //a�ּҸ� ������ ���� p�� ����
	printf("a �ּ� = %p\n", &a);           //a�� �ּ�
	printf("p �ּ� = %p\n", p);            //p�� �ּ� ���
	printf("a �� = %d\n", a);              //a�� ��
	printf("p �� = %d\n", *p);             //p�� ����Ű�� �ּ��� ��

	p = &b;      //b�ּҸ� ������ ���� p�� ���� (a�� �ּ� => b �ּ� ���)
	printf("p �ּ� = %p\n, p");             //p�� �ּ� ���
	printf("p �� = %d\n, *p");               //p�� ����Ű�� �ּ��� ��

	return 0;
}