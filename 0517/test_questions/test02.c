#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char a[11] = "KOREA";
	char b[] = "12345";

	strcat(a, b);         //문자열연결
	puts(a);              //문자열 출력
	                      //stracat a주소에 b를 추가 => a[11]="KOREA12345"로 변경
	                      //a출력시 KOREA12345가 출력
	printf("%s", b);
	return 0;
}