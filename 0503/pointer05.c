#include <stdio.h>
void call_value(int icopy);
void call_refer(int* ip);

int main(void)
//�����͸� ����ϴ� ����-�������̰� ���� ������ ���� ���
{
	int  i = 777;
	call_value(i);   //���� ���� ȣ��
	printf("�� ȣ��  : %d\n", i);

	call_refer(&i);  //����(�ּ�)�� ���� ȣ��
	printf("���� ȣ�� : %d\n", i);
	return 0;
}

void call_value(int icopy) { //���纻 ����, icopy�� 777�� ������ icopy�� �ٸ� ���� �ּ�(���ο� ����) 
	icopy = 888;


}

void call_refer(int* ip) { //�Ű������� �����ͺ���, ���� ����, i �ּҸ� ����
	*ip = 888;  //ip�� ����Ű�� �ּ��� ���� 888 ����

}