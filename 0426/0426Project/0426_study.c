#define _CRT_SECURE_NO_WARNINGS // 삼항연산자 예제
#include <stdio.h>

#pragma region MyRegion
#if 0

#endif
#pragma endregion

#pragma region scanf
#if 0
int main(void)
{
	int num1;		// 첫번째 정수를 저장할 변수
	int num2;		// 두번째 정수를 저장할 변수
	int sum;		   // 2개의 정수의 합을 저장할 변수

	printf("첫 번째 수를 입력하시오:");			// 입력 안내 메세지 출력
	scanf("%d, &num1");								// 하나의 정수를 받아서 num1에 저장&사용

	pirntf("두 번째 수를 입력하시오:");
	scanf("&d", &num2);

	sum = num1 + num2;						// 변수 2개를 더한다
	printf("두수의 합:%d", sum);		// sum의 값을 출력

	return 0;
}
#endif
#pragma endregion

#pragma region op1
#if 0
int main(void)
{
	printf("삼항연산자 예제 1 \n");
	int a = 10, b = 20;
	printf("결과는 %d\n", (a > b) ? a + b : a * b); // (조건)이 참(만족)이면 ? / 뒤 문장이 거짓이면 뒤 문장을 수행 200

	printf("삼항연산자 예제2\n");
	int num1, num2;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num1);

	printf("숫자를 입력하세요:");
	scanf("%d", &num2);

	(num1 > num2) ? printf("큰수는 : %d", num1) : printf("큰수는 : %d", num2);
	(num1 < num2) ? printf("작은수는 : %d", num1) : printf("작은수는 : %d", num2);
	return 0;
}
#endif
#pragma endregion
#pragma region op2
#if 0
int main(void)
{
	int num1, num2;

	printf("첫 번째 수를 입력하세요 : ");
	scanf("%d", &num1);

	printf("두 번째 수를 입력하세요 : ");
	scanf("%d", &num2);

	(num1 == num2) ? printf(" 두 수의 합 : %d", num1 + num2) : printf("두 수의 차 : %d", num1 - num2);

	return 0;
}
#endif
#pragma endregion

#pragma region if else1
#if 0
int main(void)
{
	int age;
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);

	if (age > 20) 																		 // 조건 1
		printf("나이가  %d 이므로 성인입니다", age);			// 조건 1이 만족할 때 수행
	else if (age < 8) 																	// 조건 2
		printf("나이가 %d 이므로 어린이입니다.", age);		// 조건2가 만족할 때 수행
	else																							// 위 두 조건이 아닌 경우 나머지
		printf("나이가 %d 이므로  청소년입니다", age);		// 나머지 값 출력

	// if(조건1) 조건1을 물어보고 조건이 만족하면 문장 수행
	// else if(조건2) 조건2을 물어보고 조건이 만족하면 문장 수행
	// else if(=else (조건3)) 조건 3을 물어보고 조건이 만족하면 문장수행
	return 0;
}
#endif
#pragma endregion
#pragma region if else2
#if 0
int main(void)
{
	int num;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);

	if (num > 0)
		printf("입력된 수는 양수 %d입니다.", num);
	else if (num == 0)
		printf("입력된 수는 %d입니다", num);
	else  if (num < 0)
		printf("입력된 수는 음수 %d입니다", num);
	return 0;
}
#endif
#pragma endregion

#pragma region char1
#if 0
int main(void)
{
	char code1 = 'A';      // 문자 하나 적을때는 ' '(작은 따음표)
	// 2개이상 여러문자를 적을때는 " "(큰 따음표)
	char code2 = 65;     //  아스키 문자에서 65가 A의 코드를 의미

	printf(“code1 = % c\n", code1); 
		printf(“code2 = % c\n", code2); 
			return 0;
}
#endif
#pragma endregion
#pragma region char2
#if 0
int main(void)
{
	char letter;
	printf("하나의 문자를 입력하세요 : ");
	scanf("%c", &letter);

	if (letter >= 65 && letter <= 90)
		printf("%c는 대문자 입니다.\n", letter);

	else  if (letter >= 97 && letter <= 122)
		printf("%c는 소문자 입니다.\n", letter);

	else
		printf("%c는 영문자가 아닙니다.\n", letter);
	return 0;
}
#endif
#pragma endregion

#pragma region switch1
#if 0
int main(void)
{
	int grade;
	printf("평점을 입력하시오 : ");
	scanf("%d", &grade);

	switch (grade)	// switch 물어볼 조건 : 변수명이거나 '문자 1글자'
	{
	case  5:	// 변수명인 grade 값이 5인지 확인
		printf("평점 %d는 훌륭해요! ", grade);
		break;	// 문장 탈출 장치(아래로 안내려가도록)
	case  4:
		printf("평점 %d는 좋아요! ", grade);
		break;
	case  3:
		printf("평점 %d는 평균이네요! ", grade);
		break;
	case  2:
		printf("평점 %d는 노력하세요! ", grade);
		break;
	case  1:
		printf("평점 %d는 반성하세요! ", grade);
		break;
	default: // 위 조건들이 전부 아닌경우
		printf("잘못 입력된 평점입니다");
	}
	return 0;
}
#endif
#pragma endregion
#pragma region switch2
#if 1
int main(void)
{
	char oper;
	int num1, num2, result;

	printf("첫 번째 수를 입력하세요 : ");
	scanf("%d", &num1);

	printf("두 번째 수를 입력하세요 : ");
	scanf("%d", &num2);

	printf("연산을 선택하세요 (+, -, *, /) : ");
	scanf(" %c", &oper);

	switch (oper)

	{
	case '+':
		result = num1 + num2;
		printf("%d %c %d = %d \n", num1, oper, num2, result);
		break;

	case '-':
		result = num1 - num2;
		printf("%d %c %d = %d \n", num1, oper, num2, result);
		break;

	case '*':
		result = num1 * num2;
		printf("%d %c %d = %d \n", num1, oper, num2, result);
		break;

	case '/':
		result = num1 / num2;
		printf("%d %c %d = %d \n", num1, oper, num2, result);
		break;

	default:
		printf("oper 연산을 잘못 입력하셨습니다.");
	}
		return 0;
}
#endif
#pragma endregion