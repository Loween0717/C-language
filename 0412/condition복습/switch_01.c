#include <stdio.h>

	/*����(grade)�� 5���̸� �Ǹ��ؿ�/ 4���̸�  ���ƿ�/ 3���̸� ����̳׿�/
		2���̸� ����ϼ���/ 1���̸� ����ϼ���/ �׿� �� �߸� �Էµ� �����Դϴ�*/

int main(void)    

{
	int grade;
	printf("���ǹ� switch ���� �ǽ� \n\n");

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &grade); //���� �Է� �ޱ�

	switch ( grade ) {
	case 5:
			printf("�Ǹ��ؿ�!");
			break; //�ݺ��� Ż��
		
	case 4:
			printf("���ƿ�!");
			break; //�ݺ��� Ż��

	case 3:
			printf("����̳׿�!");
			break; //�ݺ��� Ż��

	case 2:
			printf("����ϼ���!");
			break; //�ݺ��� Ż��

	case 1:
			printf("����ϼ���!");
			break; //�ݺ��� Ż��

	default:
			printf("�߸� �Էµ� �����Դϴ�");


	}
	return 0;
}
