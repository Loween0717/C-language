#include <stdio.h>

int main(void)

{
	int x, y;

	printf("���� 2��:");
	scanf_s("%d %d", &x, &y);

	printf("ū ��=%d \n", (x>y)? x:y);
	printf("���� ��=%d \n", (x<y)? x:y);

	/*---------------------------------------------------------------------------------------------------*/

	int n = 1;
	int a;
	
	a = (n++ > 1) ? n + 2 : n + 3;
	printf("%d\n", a);

	int b = 10, c = 20;
	printf("%d\n", (b > c)? b + c:b * c);

	return 0;

}