#include <stdio.h>

int main(void)
{
	int x;

	printf("����x�� ũ��: %d\n", sizeof(x));
	printf("���� char���� ũ��: %d\n", sizeof(char));
	printf("���� short ���� ũ��: %d\n", sizeof(short));
	printf("���� int ���� ũ��: %d\n", sizeof(int));
	printf("���� long ���� ũ��: %d\n", sizeof(long));
	printf("�Ǽ� float ���� ũ��: %d\n", sizeof(float));
	printf("�Ǽ� double ���� ũ��: %d\n", sizeof(double));

	return 0;
}