#include <stdio.h> 

int main(void)
{
	int  i = 0; //0���� �ʱ�ȭ

	 //while���� ������ 1�̸� ��(����)���� ��� �ݺ� ����
	for(;;) //while(1) 
	{

		if (i > 3) break;
		printf("���ѹݺ� ����\n");
		i++;
	}
	return 0;
}