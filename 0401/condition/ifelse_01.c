#include <stdio.h>

int main(void)

{
	//if1();
	if2();
	return 0;
}

int if1(void)

{
	int n;

	printf("정수를 입력하시오:");
	scanf_s("%d", &n);

	if (n % 2 == 0)
		printf("입력된 정수는 짝수입니다.\n");
	else
		printf("입력된 정수는 홀수입니다.\n");

	return 0;
}


int if2(void)
{
	int k;
	
		printf("정수를 입력하시오:");
		scanf_s("%d", &k);

		if (k >= 100)
		{
			printf("large \n");                    //나와야 할 결과값이 2줄 이상인 경우 중괄호{}로 묶어줘야 한다.
			printf("참일 때 수행 \n");
		}
		else
		{
			printf("small \n");
			printf("거짓일 때 수행 \n");
		}


		return 0;

}