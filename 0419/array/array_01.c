#include<stdio.h>

int main(void)
{
	int i;
	
	int scores[5] = { 10,20,30 };            //10 20 30 0 0
	int scores[5] = { 10 };                  //10 0 0 0 0
	int scores[5] = { 0 };                   // 0 0 0 0 0
	int scores[5] = { 10,20,30,40,50,60,70 };//����


	int scores[] = { 10,20,30,40,50 }; //�迭 ũ�⸦ ��������� �ڵ����� �ʱⰪ���� ������ŭ �迭ũ�� ����

	
	//int scores[5] = { 10,20,30,40,50 }; //{}�� �ʱ�ȭ
	                                      //�Լ� ���� + �ʱ�ȭ ����
	
	//int scores[5]; //�������迭 5�� : 4bite * 5�� = 20bite

	//scores[0]=10;
	//scores[1]=20;
	//scores[2]=30;
	//scores[3]=40;
	//scores[4]=50;


	for (i = 0; i < 5; i++)   //�ݺ��� ����Ͽ� �迭 ��� ���� ���
		printf("scores[�ε��� %d]=%d\n", i, scores[i]);

	return 0;
}