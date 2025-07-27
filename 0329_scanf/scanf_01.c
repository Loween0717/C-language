#include<stdio.h>

int main(void)
{
	char var1;                              // 문자형 변수 선언
	printf("문자 하나 입력 : ");
	scanf_s("%c", &var1, 1);                // %c는 1글자, 변수에 &, 글자수 1
	printf("%c\n", var1);



	char Arr[6];                            // 문자 여러개 지정할때는 배열 사용
	// arr배열에 6개 방(저장)
	printf("문자열 입력 : ");
	scanf_s("%s", &Arr, 6);
	//scanf_s("%d", 변수명) : 숫자는 글자수 쓰지 않음
	//여러개 글자 %s **배열일때는 & 안 붙임
	//띄어쓰기 앞, 빈칸 뒤에는 안나옴, 글자수 넘어가면 안나옴
	//끝에 \0(null)이 붙음 -> 한자리가 빠짐 -> 5글자 들어감
	printf("%s\n", Arr);

	return 0;



}