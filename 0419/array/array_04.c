#include<stdio.h>

int count01(int scores[], int n);     //�Լ� ����, �Լ��� main�Ʒ� ��ġ �̸� ����

int main(void)                        //����
{
	int cnt[6] = {30,20,40,50,60,30}; //�迭 6�� �ʱ�ȭ
	int avg;                          //��պ���

	avg = count01(cnt, 6); 

	// **�迭 ���� �ּҸ� ����

	printf("����� %d�Դϴ�. \n", avg); //ȣ���� �Լ����� ��� ����� �޾� avg�� ����

	return 0;
}

int count01(int c[6], int n) //�迭 c ����
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)//n�� 6�� �����Ƿ� 0~5���� �ݺ�
		sum += c[i];       //�迭 ��� 0~4������ ���� sum ������ ��� �����Ͽ� ����
	return sum / n;        //sum(�����հ�)�� �迭��� ������ 5�� ������ ��� ���Ͽ� ����
}