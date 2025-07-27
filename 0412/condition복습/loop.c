#include <stdio.h> 

int main(void)
{
	int  i = 0; //0으로 초기화

	 //while문에 조건이 1이면 참(만족)으로 계속 반복 수행
	for(;;) //while(1) 
	{

		if (i > 3) break;
		printf("무한반복 연습\n");
		i++;
	}
	return 0;
}