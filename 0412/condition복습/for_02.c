#include<stdio.h>

int main(void)
{

	int x, y;
	for (y = 1; y <= 5; y++)
	{
		for ( x=1; x <= y; x++ )
			printf("*");
		printf("\n");

	}

	return 0;

}