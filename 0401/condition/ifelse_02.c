#include <stdio.h>

int main(void)

{
	//if1();    //�Լ� ȣ�� -> ����
	if2();
	return 0;
}

	int if1(void) //�Լ� if1
	{
		int score;

		printf("������ �Է��Ͻÿ�:");
		scanf_s("%d", &score);

		if (score >= 90)
			printf("�հ�: ����A\n");

		else if
			(score >= 80)
			printf("�հ�: ����B\n");

		else if
			(score >= 70)
			printf("�հ�: ����C\n");

		else if
			(score >= 60)
			printf("�հ�: ����D\n");

		else
			printf("���հ�: ����F\n");

		return 0;
	}

	int if2(void) //�Լ� if2
	{
		int age; //����

		printf("���̸� �Է��Ͻÿ�.:");
		scanf_s("%d", &age);

		if (age >= 70)
			printf("���\n");

		else if
			(age >= 40)
			printf("�����\n");

		else if
			(age >= 20)
			printf("û��\n");


		else
			printf("û�ҳ�\n");


		return 0;
	}

