#include <stdio.h>

int main(void)

{
	//if1();
	if2();
	return 0;
}

int if1(void)

{
	int n;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &n);

	if (n % 2 == 0)
		printf("�Էµ� ������ ¦���Դϴ�.\n");
	else
		printf("�Էµ� ������ Ȧ���Դϴ�.\n");

	return 0;
}


int if2(void)
{
	int k;
	
		printf("������ �Է��Ͻÿ�:");
		scanf_s("%d", &k);

		if (k >= 100)
		{
			printf("large \n");                    //���;� �� ������� 2�� �̻��� ��� �߰�ȣ{}�� ������� �Ѵ�.
			printf("���� �� ���� \n");
		}
		else
		{
			printf("small \n");
			printf("������ �� ���� \n");
		}


		return 0;

}