#include<stdio.h>
#define STUDENTS 5  //��ȣ���(�빮��), 5�� STUDENTS�� ������

int get_avg(int scores[], int n); //�Լ� ����, �Լ��� main�Ʒ� ��ġ �̸� ����

int main(void)   //����
{
	int scores[STUDENTS] = { 1,2,3,4,5 }; //�迭�� 5�� ��� �ʱ�ȭ
	int avg;

	//��� ���ϱ� ���� �Լ� ȣ��
	avg = get_avg(scores, STUDENTS);  //�μ��� scores�迭�� 5�� ����, �迭�� �μ��� ���� �迭�� �ּҰ� ���޵ȴ�.      ������ �� = �μ�
	
	//�迭 ��ü�� ����Ҷ��� scores, *** �迭 ���� �ּҸ� ����
	
	printf("����� %d�Դϴ�. \n", avg); //ȣ���� �Լ����� ��� ����� �޾� avg�� ����

	return 0;
}

int get_avg(int scores[], int n)      //�迭�� ������ ����, �Ű������� ������ �迭�� 5�� ����                           �޴� �� = �Ű�����
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++) //n�� 5�� �����Ƿ� 0~4���� �ݺ�
		sum += scores[i];   //�迭 ��� 0~4������ ���� sum ������ ��� �����Ͽ� ����
	return sum / n;         //sum(�����հ�)�� �迭��� ������ 5�� ������ ��� ���Ͽ� ����
}