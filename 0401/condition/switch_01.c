#include<stdio.h>

int main(void)
{
	char op;
	int x, y, result;

	printf("숫자1을 입력하시오 >>");
	scanf_s("%d", &x);
	printf("연산자를 입력하시오 >>");
	scanf_s(" %c", &op, 1);


	printf("숫자2를 입력하시오 >>");
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
		printf("지원되지 않는 연산자입니다.\n");
		break;
	}

	printf("%d %c %d = %d \n", x, op, y, result);

	return 0;

}