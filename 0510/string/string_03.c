//�ѿ� ���� ����
#define _CRT_SECURE_NO_WARNINGS    
#define page 5  //��ȣ��� ����, 5�� page�� ����

#include <stdio.h>
#include <string.h>   //strcmp ��� ���� 
int main(void)
{
    int i, index;
    char dic[5][2][30] = { //3���� ���ڹ迭
       {"book", "å"},                  //dic[0][0]=>book   dic[0][1]=>å
       {"boy", "�ҳ�"},                 //dic[1][0]=>boy    dic[1][1]=>�ҳ�
       {"computer", "��ǻ��"},          //dic[2][0]=>computer    dic[2][1]=>��ǻ��
       {"apple", "���"},               //dic[3][0]=>apple   dic[3][1]=>���
       {"rain", "��"},                  //dic[4][0]=>rain    dic[4][1]=>��
    };
    char word[30];     //�Է� ���ڿ�(30���̳�)
    printf("�ܾ �Է��Ͻÿ�:");
    scanf("%s", word); //���ϴ� �ܾ� �Է�

    for (i = 0; i < 5; i++) //0~4���� �ݺ�
    {
        if (strcmp(dic[i][0], word) == 0)        // dic�迭�� 0��° ����ܾ�� �Է��� �ܾ ���Ͽ� ������ ���
        {
            printf("%s: %s\n", word, dic[i][1]); // ������ �ش� ��ġ�� 1��° �ܾ� ���
            return 0; // ����
        }//if ��      
    }//for ��
    printf("�������� �߰ߵ��� �ʾҽ��ϴ�.\n");
}
