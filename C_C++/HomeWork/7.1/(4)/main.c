#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char ch[10], en[10];
    printf("�п�z������m�W:");
    scanf("%s", ch);
    printf("%s �z�n^_^\n", ch);
    printf("�п�z���^��m�W:");
    scanf("%s", en);
    printf("%s �z�n^_^\n", en);
    printf("�z�]�p������}�C�����p�U:\n");
    for (int i = 0; i < strlen(ch); i++)
    {
        printf("%c", ch[i]);
    }
    printf("\n\n");
    printf("�z�]�p���^��}�C�����p�U:\n");
    for (int i = 0; i < strlen(en); i++)
    {
        printf("name2[%d]=%c\n", i, en[i]);
    }
}