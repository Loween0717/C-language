#include<stdio.h>

int main(void)
{
	char op;
	int x, y, result;

	printf("����1�� �Է��Ͻÿ� >>");
	scanf_s("%d", &x);
	printf("�����ڸ� �Է��Ͻÿ� >>");
	scanf_s(" %c", &op, 1);


	printf("����2�� �Է��Ͻÿ� >>");
	scanf_s("%d", &y);

	switch (op)
	{
	case '+':
		result = x + y;
		break;

	case '-':
		result = x - y;
		break;

	case '*':
		result = x * y;
		break;

	case '/':
		result = x / y;
		break;

	case '%':
		result = x % y;
		break;

	default:
		printf("�������� �ʴ� �������Դϴ�.\n");
		break;
	}

	printf("%d %c %d = %d \n", x, op, y, result);

	return 0;

}