#include <stdio.h>

int main(void)
{

	//������ �ٲ� �� �ִ� ���� ���� ���� �޸� ����
	//���� ����

	int a; //������ ����(int) a:������
	int b; //������ ����(int) b:������
	int sum, diff, mul, div;
	printf("ù���� ���� �Է�:");
	scanf_s("%d", &a);                 //scanf_s�� Ű����κ��� ���� ����.
	                                 // %d�� ���������� ����
	                                 // &������, &�� �ּ� �ǹ�
	                                 //\n \t�� ��� ����
	printf("�ι��� ���� �Է�:");
	scanf_s("%d", &b);
	//���� �ʱ�ȭ
	a = 100; b = 5; //=�� ���Կ�����, 100�� a�� ����
	
	a = 30;
	
	


	sum = a + b; //�������� ����Ͽ��� ���� sum������ ����
	diff = a - b;
	mul = a * b;
	div = a / b;


	//a������ ���� b������ ���� ���
	printf("�� ���� ���� ����� : %d\n", a + b);
	printf("�� ���� ���� ����� : %d\n", a - b);
	printf("�� ���� ���� ����� : %d\n", a * b);
	printf("�� ���� ������ ����� : %d\n", a / b);

	int kor;//������ ���� ����, ���� 
	int eng;//����
	int mat;//����
	int tot;//����

	kor = 90;  //���� �ʱ�ȭ , �� ����
	eng = 82;
	mat = 74;

	tot = kor + eng + mat; //����Ͽ� tot�� ����
	double avg = (float)tot / 3.0;
	//�� ��ȯ : (float)tot�� tot�� ������ �̼��� �Ǽ��� ��ȯ�ؼ� ���
	printf("����:%d\t ����:%d\t ����:%d\n", kor, eng, mat);
	

	printf("����:%d\t", tot);
	printf("���:%.1f\t", avg);


	return 0;
	
}