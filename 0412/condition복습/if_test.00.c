#include <stdio.h>

int main(void) {
	int a;
	printf("������ �Է��ϼ��� :");
	scanf_s("%d",  &a);
	if ( a%2 ==0 ) //  ���ǽ� : 2�� ������ �������� 0�̸� ¦��, 1�̸� Ȧ��
		printf("¦��\n");  // ������ ������ ��(��)
	else
		printf("Ȧ��\n"); // ������ �������� ������(����)
	return 0;
}