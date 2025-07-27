#include <stdio.h>

int main(void)

{
	//if1();    //함수 호출 -> 실행
	if2();
	return 0;
}

	int if1(void) //함수 if1
	{
		int score;

		printf("성적을 입력하시오:");
		scanf_s("%d", &score);

		if (score >= 90)
			printf("합격: 학점A\n");

		else if
			(score >= 80)
			printf("합격: 학점B\n");

		else if
			(score >= 70)
			printf("합격: 학점C\n");

		else if
			(score >= 60)
			printf("합격: 학점D\n");

		else
			printf("불합격: 학점F\n");

		return 0;
	}

	int if2(void) //함수 if2
	{
		int age; //나이

		printf("나이를 입력하시오.:");
		scanf_s("%d", &age);

		if (age >= 70)
			printf("노년\n");

		else if
			(age >= 40)
			printf("중장년\n");

		else if
			(age >= 20)
			printf("청년\n");


		else
			printf("청소년\n");


		return 0;
	}

