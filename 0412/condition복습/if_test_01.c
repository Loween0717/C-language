#include <stdio.h>

int main(void)
{
	int  a;
	printf("���� �Է� :  ");
	scanf_s("%d", &a);
	if (a%3 ==0 && a%7==0)
		printf("3�� ����̸鼭 7�� ����� \n");  //�̸鼭(�׸���) and = &&, or = ||
	else
		printf("3�� 7�� ����� �ƴ� \n");
	return 0;
}