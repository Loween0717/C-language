// ����(�ּ�)�� ���� ȣ��
#include <stdio.h>
void fun2(int* p1, int* p2);

int main(void)
{
    int a = 50, b = 300;
    printf("a�� %d", a);
    printf("b�� %d", b);

    fun2(&a, &b); //�Լ� ȣ��, �ּ� ����
    // a�ּ�, b �ּ� ����
    printf("a�� %d", a); //1000
    printf("b�� %d", b); //5000


    return 0;
}


void fun2(int* p1, int* p2)//���� 2������, �ּҷ� ����
//a �ּҸ� p1 ���,  b �ּҸ� p2 ���
{

    printf(" p1�� %p  p2�� %p\n ", p1, p2); //p1�� p2 ���(�ּ�)
    printf(" p1��  %d   p2 �� %d", *p1, *p2);  //50   300���
    //p1 ����Ű�� �ּҿ� ���� �� ��,
   //p2 ����Ű�� �ּҿ� ���� �� ��

    *p1 = 1000;
    *p2 = 5000;
    printf(" p1��  %d   p2 �� %d", *p1, *p2);



}