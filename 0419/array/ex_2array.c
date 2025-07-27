#include <stdio.h>

void array21(); //함수 원형
void array22();
void array23();
void arrPrint(int x[2][3]);

int main(void) {
	//array21();  //함수 호출
	//array22();
	array23();			
	return 0;
}

/// <summary>
/// 2차원 배열 이해
/// </summary>
void array21() {  //함수 정의
	int  a[2][3];// 2차원 배열이름[배열의 개수][각 배열의 저장공간의 개수]
	//int  a[2][3]={4,5,6,7,8,9}; (아래와 동일)
	a[0][0] = 4;
	a[0][1] = 5;
	a[0][2] = 6;
	a[1][0] = 7;
	a[1][1] = 8;
	a[1][2] = 9;
	printf("a[0][0]=>%d\n", a[0][0]);
	printf("a[0][1]=>%d\n", a[0][1]);
	printf("a[0][2]=>%d\n", a[0][2]);
	printf("a[1][0]=>%d\n", a[1][0]);
	printf("a[1][1]=>%d\n", a[1][1]);
	printf("a[1][2]=>%d\n", a[1][2]);
}

/// <summary>
/// 2차원배열 크기
/// </summary>
void array22() {
	int  b[2][3];  //int는 4바이트이며 2*3=6개의 원소가 있으므로  총 24바이트 크기를 차지함

	int totalsize = sizeof(b);   //배열 b 전체 사이즈 즉, 24바이트
	printf("배열 전체 크기는 %d\n", totalsize);   //24

	int bsize = sizeof(b[0]);  //0번째 행의 사이즈 즉,12바이트(3개 *4바이트)
	printf("0번째 행 크기는 %d\n", bsize); //12

	int csize = sizeof(b[0][0]);// 0행 0번째 원소의 사이즈, int는  4바이트
	printf("0행 0열 원소 크기는 %d\n", csize); // 4
		
}


/// <summary>
///  2차원 배열 초기화
/// </summary>
void array23() {
	int a[2][3] = { {1,2,3},{4,5,6} };  // 배열 초기화, 1,2,3,4,5,6
	arrPrint(a); // 배열 주소를 인수로 보내면서 함수 호출
	int b[2][3] = { {1},{4} }; //1 0 0 4 0 0
	arrPrint(b);
	int c[2][3] = { {1,2} }; // 1 2 0 0 0 0 
	arrPrint(c);
	int d[2][3] = { 1,2,3,4,5,6 }; // 1 2 3 4 5 6
	arrPrint(d);
	int i[2][3] = { 1,2,3,4 }; //1 2 3 4 0 0 
	arrPrint(i);
	int j[2][3] = { 1,2 }; //1 2 0 0 0 0 
	arrPrint(j);
	int k[2][3] = { 0 }; //0 0 0 0 0 0 
	arrPrint(k);
}

/// <summary>
/// 2차원 배열 반복문으로 출력
/// </summary>
/// <param name="x"></param>
void arrPrint(int x[2][3]) { //매개변수는  정수형 2차원 배열로 받음(
	for (int i = 0; i < 2; i++) {  //0~1 행 
		for (int k = 0; k < 3; k++) {  // 0~2 열
			printf("%2d", x[i][k]); // 2차원 배열의 값을 두자리 정수로 출력
		}//안쪽 for 끝

		printf("\n"); // 한행 끝나면 줄바꿈
	}//밖 for 끝
	printf("--------------\n");
}//arrPrint 함수 끝
