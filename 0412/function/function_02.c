#include <stdio.h>

int max(int x, int y)     //��ȯ���� int(����), �Լ��̸��� max, �Ű������� x, y
{
	if (x > y)
		return x;         //x ���� ��ȯ��
	else
		return y;         //y ���� ��ȯ��
}

int main(void)
{
	int a, b, larger;

	printf("���� 2���� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &a, &b);

	larger = max(a, b);                    //�Լ�ȣ�� (�μ� a, b�� ����)
	                                       //return ���� ���� �޾Ƽ� larger�� ������

	printf("�� ū ���� %d�Դϴ�. \n", larger);


	return 0;

}