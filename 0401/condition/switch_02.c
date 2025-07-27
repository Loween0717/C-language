#include<stdio.h>

int main(void)
{
	int num, iscore;
	char grade;

	printf("정수를 입력하시오 >>");
	scanf_s("%d", &num);

	iscore = num / 10;


	switch(iscore)
	{
	case 10:           //아래로

	case 9:
		grade = 'A';
		break;

	case 8:
		grade = 'B';
		break;

	case 7:
		grade = 'C';
		break;

	case 6:
		grade = 'D';
		break;

	default:
		grade = 'F';
		break;
	}

	printf("학점은 %c\n",grade);

	return 0;

}