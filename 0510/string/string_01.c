#include <stdio.h>

int main(void)
{
    char key[] = "c";
    char key2[] = "java";
    char buffer1[80] = "";
    char buffer2[80] = "";
    do {
        printf("�Ӻ���� ��ġ�� ���� ���� ���Ǵ� ��� �ϳ�? ");
        gets_s(buffer1, sizeof(buffer1));
        printf("�Ӻ���� ��ġ�� ���� ���� ���Ǵ� ��� ��? ");
        gets_s(buffer2, sizeof(buffer2));
        //gets(buffer);

    } while (strcmp(key, buffer1) != 0 && strcmp(key2, buffer2) != 0);

    printf("�¾ҽ��ϴ�!");
    return 0;
}