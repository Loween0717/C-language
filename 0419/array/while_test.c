#include <stdio.h>

int main(void)
{
	int a = 9, b = 5;

	while (a != b) {             // 1)a:9 b:5   3)a:4 b:5    5)a:4  b:1   7)a:3  b:1    9)a:2  b:1  11)a:1 b:1 �ݺ��� ���ೡ
		if (a  >  b) a = a - b;  //   2)9-5=a:4    6)4-1=a:3     8)3-1= a:2    10)2-1=a:1
		else b = b - a;            //  4)5-4=b:1
	}

	printf("a�� %d ,  b�� %d\n", a, b);  //1  1
	return 0;
}