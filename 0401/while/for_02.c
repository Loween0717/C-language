#include <stdio.h>

int main(void)
{
	sum1(); //�Լ��� ȣ��(���� �����ϰ� ���ƿͶ�)
	sum2(); //�Լ��� ȣ��(���� �����ϰ� ���ƿͶ�)
	sum3(); //�Լ��� ȣ��(���� �����ϰ� ���ƿͶ�)

	return 0;
}

int sum1(void) //1~100�� ���ϱ�
{
	int i, sum;

	sum = 0;
	for (i = 1; i <= 100; i++)
		sum += i;              //sum=sum+1 sum�� i�� ���� ��� ������

	printf("1���� 100������ ������ ��=%d\n", sum);

	return 0;
}

int sum2(void) //1~100 ������ ¦�� �� ���ϱ�
{
	int i, sum;

	sum = 0;
	for (i = 0; i <= 100; i = i + 2)
		sum += i;

	printf("1���� 100������ ¦���� ������ �� = %d\n", sum);

	return 0;
}

int sum3(void) //1~100 ������ Ȥ�� �� ���ϱ�
{
	int i, sum;

	sum = 0;
	for (i = 1; i <= 100; i = i + 2)
		sum += i;

	printf("1���� 100������ Ȧ���� ������ �� = %d\n", sum);


	return 0;
}