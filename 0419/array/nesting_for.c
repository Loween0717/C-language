//��ø for ���⹮��
#include <stdio.h>

int main(void)
{
	int i, j;
	for (i = 2; i <= 4; i++) //2~4 (2,3,4)  i=5�� Ż��
	{
		for (j = 5; j <= 7; j++) //5~7 (5,6,7)  ��=8�̸� Ż��
		{
		}
	}	
	// i=2 j=567
	// i=3 j=567
	// i=4 j=567

	printf("%d  *  %d = %2d", j, i, i * j);  //8*5=40
	return 0;
}