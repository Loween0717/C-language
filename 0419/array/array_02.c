#include<stdio.h>

int main(void)
{
	int scores[5]; //������ ������ �迭 ����
	int sum = 0;   //�����Ͽ� ���� ���� ������ �ݵ�� 0���� �ʱ�ȭ ��
	int i, avg;    //��� ����

	for (i = 0; i < 5; i++) //0~4
	{
		printf("�л����� ������ �Է��Ͻÿ� : ");
		scanf_s("%d", &scores[i]); //scores[0]~scores[4] �� �� �� �Է�, scanf ����� �迭��ҿ� &����
	}

	for (i = 0; i < 5; i++)
	{
		sum += scores[i]; //scores[0]~scores[4] �� �ݺ��ϸ鼭 �� ���� sum�� �����ϸ鼭 ����
	}

	avg = sum / 5; // ��� ����
	printf("���� ��� = %d\n", avg);

	return 0;
}