#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char a[11] = "KOREA";
	char b[] = "12345";

	strcat(a, b);         //���ڿ�����
	puts(a);              //���ڿ� ���
	                      //stracat a�ּҿ� b�� �߰� => a[11]="KOREA12345"�� ����
	                      //a��½� KOREA12345�� ���
	printf("%s", b);
	return 0;
}