#include <stdio.h>

int main(void)
{

    char name[30];                             //���ڹ迭, �̸�
    char school[50];                           //���ڹ迭, �б�
    int age;                                   //����������, ����   
    double height;                             //�Ǽ��� ����, Ű   
    char grade;                                //����, ����

    printf("�̸� �Է� : ");
    scanf_s("%s", name, 30);
                                               //���ڿ��� & �� �ٿ��� ��, ����° �ڸ��� ���ڼ� �Է�, �̸� �Է¹���
    printf("�б� �Է� : ");
    scanf_s("%s", school, 50);
                                               //���ڿ��� & �� �ٿ��� ��, ����° �ڸ��� ���ڼ� �Է�, �б� �Է¹���   
    printf("���� �Է� : ");
    scanf_s("%d", &age);                       //���� �Է¹��� , &����, ���������� %d
    printf(" Ű �Է� : ");
    scanf_s("%lf", &height);                   //Ű   �Է¹��� , &����, �Ǽ������� %f
    printf("���� �Է�(A~F) : ");
    scanf_s(" %c", &grade, 1);                 //����, ����° �ڸ��� ����1�ڸ��� �Է�,���� �Է¹���, &����


    printf("�� �Ұ� \n\n  ");
    printf("%s\n ", name);                     //�̸��� ȭ�鿡 ���
    printf("%s\n ", school);                   //�б� ���   
    printf("%d\n ", age);                      // ���� ���   
    printf("%lf\n ", height);                  // Ű ���, �Ҽ����� 1�ڸ�
    printf("%c\n ", grade);                    //���� ���

    return 0;
}