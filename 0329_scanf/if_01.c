#include <stdio.h>

int main(void)
{
	int a;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &a);

	if (a %5 == 0)                          // ���ǽ� �ڿ��� �����ݷ�(;) ����
		printf("5������Դϴ�.\n");         //���ǽİ� ������ ���� �ϳ��� ����

	printf("�Էµ� ���� %d�Դϴ�.", a);

	return 0;


}