#include <stdio.h>
#include <stdlib.h>

int main()
{
    char rank[10];
    char id[8];
    char password[8];
    printf("==== ¾�� & �u�� & �K�X �ˬd ====\n");
    printf("�п�J¾�� (���̭Ӧr��):");
    scanf("%s", rank);
    printf("�п�J�u�� (���K�Ӧr��):");
    scanf("%s", id);
    printf("�п�J�K�X (���K�Ӧr��):");
    scanf("%s", password);

    if (strcmp(rank, "�`�g�z") == 0)
    {
        if (strcmp(id, "abcdef") == 0)
        {
            if (strcmp(password, "g123456") == 0)
            {
                printf("¾�� �M �u�� �H�� �K�X �L�~ ... ^_^ !!\n");
                printf("�w���`�g�z�i�J���|ĳ��...\n");
            }
            else
            {
                printf("�K�X ���� ... @_@\n");
                printf("�w�q���w�˳��...\n");
            }
        }
        else
        {
            printf("�u�� ���� ... @_@\n");
            printf("�w�q���w�˳��...\n");
        }
    }
    else
    {
        printf("¾�� ���� ... @_@\n");
        printf("�w�q���w�˳��...\n");
    }
    return 0;
}