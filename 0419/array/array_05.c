#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int s[3][3];                         //2���� �迭 ����, 3�� 3��
	int i, j;                            //2���� �ε��� ����

	srand((unsigned)time(NULL));         //���� ������ �ʱ�ȭ

	for (i = 0; i < 3; i++)              //0~2��
		for (j = 0; j < 3; j++)          //0~2��
			s[i][j] = (rand() % 50) + 1; //1~50������ ������ ���� �߻�

	for (i = 0; i < 3; i++) {            //0~2��
		for (j = 0; j < 3; j++)          //0~2��
			printf("%02d", s[i][j]);     //5->05  15->15 - ���ڸ��� ����, 0�� ����, ���ڸ����� ũ�� ����

		printf("\n");
	}

	return 0;
}