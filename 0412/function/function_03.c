#include <stdio.h>


//�Լ� ����, �Լ� �����(�Լ��� ���)
int get_integer();
int add(int x, int y);


int main(void)
{
	int x = get_integer(); //�Լ� ȣ��(�μ��� ����)�Ͽ� ��ȯ�� ������ ���ڸ� x�� ����
	int y = get_integer(); //�Լ� ȣ��(�μ��� ����)�Ͽ� ��ȯ�� ������ ���ڸ� y�� ����

	int sum = add(x, y);
	printf("�� ���� ���� %d�Դϴ�. \n", sum); //�Լ� ȣ��(�μ��� x, y �� ��), ��ȯ�� ���� ���ڸ� sum�� ����

	return 0;
}

//�Լ� ���Ǻ�(�ڵ��)
int get_integer()
{
	int value;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &value);             //value �������� ����

	return value;
}

//�Լ� ���Ǻ�(�ڵ��)
int add(int x, int y)                  //�Ű����� 2��, x->x y->y
{
	return x + y;                      //���� ������� ����
}