#include <stdio.h>

int main(void)
{

	//변수는 바뀔 수 있는 값을 가진 저장 메모리 공간
	//변수 선언

	int a; //정수형 변수(int) a:변수명
	int b; //정수형 변수(int) b:변수명
	int sum, diff, mul, div;
	printf("첫번쨰 숫자 입력:");
	scanf_s("%d", &a);                 //scanf_s는 키보드로부터 값을 받음.
	                                 // %d는 정수형숫자 받음
	                                 // &변수명, &는 주소 의미
	                                 //\n \t는 사용 안함
	printf("두번쨰 숫자 입력:");
	scanf_s("%d", &b);
	//변수 초기화
	a = 100; b = 5; //=는 대입연산자, 100을 a에 담음
	
	a = 30;
	
	


	sum = a + b; //오른쪽을 계산하여서 욈쪽 sum변수에 담음
	diff = a - b;
	mul = a * b;
	div = a / b;


	//a변수의 값과 b변수의 값을 계산
	printf("두 수의 덧셈 결과는 : %d\n", a + b);
	printf("두 수의 뺄셈 결과는 : %d\n", a - b);
	printf("두 수의 곱셈 결과는 : %d\n", a * b);
	printf("두 수의 나눗셈 결과는 : %d\n", a / b);

	int kor;//정수형 변수 선언, 국어 
	int eng;//영어
	int mat;//수학
	int tot;//총점

	kor = 90;  //변수 초기화 , 값 저장
	eng = 82;
	mat = 74;

	tot = kor + eng + mat; //계산하여 tot에 대입
	double avg = (float)tot / 3.0;
	//형 변환 : (float)tot는 tot는 정수를 이순간 실수로 변환해서 계산
	printf("국어:%d\t 영어:%d\t 수학:%d\n", kor, eng, mat);
	

	printf("총점:%d\t", tot);
	printf("평균:%.1f\t", avg);


	return 0;
	
}