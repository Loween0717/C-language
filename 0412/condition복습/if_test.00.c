#include <stdio.h>

int main(void) {
	int a;
	printf("정수를 입력하세요 :");
	scanf_s("%d",  &a);
	if ( a%2 ==0 ) //  조건식 : 2로 나누어 나머지가 0이면 짝수, 1이면 홀수
		printf("짝수\n");  // 조건이 만족할 때(참)
	else
		printf("홀수\n"); // 조건이 만족하지 않을때(거짓)
	return 0;
}