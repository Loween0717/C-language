#include <stdio.h>

int main()
{
	int* pnum, num1 = 200, num2 = 300;
	pnum = &num1;                                //num1 �ּ�
	(*pnum)  +=  40;                             //����Ű�� �ּ��� ��
	pnum = &num2;                                //num2 �ּ�
	(*pnum)  -=  50;                             //����Ű�� �ּ��� ��
	printf("num1=%d   num2=%d\n", num1, num2);   //240 250 \n �ٹٲ�
	return 0;
}