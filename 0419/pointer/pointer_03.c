#include<stdio.h>

int main(void)
{
	int i = 3000;
	int *p = NULL;
	
	p = &i;                      //i�ּҸ� p�� ���

	printf("p = %p\n", p);       //%p : �ּҸ� ����ϴ� ���� ����
	                             //����
	printf("&i = %p\n\n", &i);   //�ּ�
	
	printf("i = %d\n", i);    // ��
	printf("*p = %d\n", *p);  // *�����ͺ��� => ��

	//�Ϲ� ������ sizeof ������ Data Type�� ũ�⿡ ���� �޶�����.
	//������ ������ �ּҸ��� �����Ƿ�, Data Type�� �����ϰ�, ũ��� �׻� 8byte�̴�

	printf("%d\n", sizeof(i));   //int = 4bite
	printf("%d\n", sizeof(p));   //������ ����(�ּ�) = 8bite
	printf("%d\n", sizeof(&i));  //&�� �ּ� = 8bite
	printf("%d\n", sizeof(*p));  //*�� �� = 4bite

	return 0;
}