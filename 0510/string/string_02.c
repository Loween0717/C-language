#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h> 
int main(void)
{
    int i;
    char fruits[3][20]; // 2���� ���� �迭
    //3�� 20��( 3�� ������, �����͸��� 20�ڸ��̳�)
    for (i = 0; i < 3; i++) {// 0���� 2���� 3�� �ݺ�
        printf("���� �̸��� �Է��Ͻÿ�: ", fruits[i]);
        scanf("%s", fruits[i]); // ������ �ϳ��� �Է¹���
    }

    for (i = 0; i < 3; i++)
        printf("%d��° ����: %s\n", i, fruits[i]);//3���� ������ ���
    return 0;
}