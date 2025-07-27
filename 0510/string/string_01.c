#include <stdio.h>

int main(void)
{
    char key[] = "c";
    char key2[] = "java";
    char buffer1[80] = "";
    char buffer2[80] = "";
    do {
        printf("임베디드 장치에 가장 많이 사용되는 언어 하나? ");
        gets_s(buffer1, sizeof(buffer1));
        printf("임베디드 장치에 가장 많이 사용되는 언어 둘? ");
        gets_s(buffer2, sizeof(buffer2));
        //gets(buffer);

    } while (strcmp(key, buffer1) != 0 && strcmp(key2, buffer2) != 0);

    printf("맞았습니다!");
    return 0;
}