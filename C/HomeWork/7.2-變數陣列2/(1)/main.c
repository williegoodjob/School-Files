#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char name[50];
    printf("��J�A���^��m�W:");
    scanf("%s", name);
    printf("\n");
    if (strcmp(name, "Xuser") == 0)
    {
        srand(time(0)); 
        printf("����1000�Ӧr���������r���}�C�p�U:\n");
        for (int i = 0; i < 1000; i++)
        {
            printf("name[%d]=%c\n", i + 1, 'A' + rand() % 26); 
        }
    }
    else
    {
        printf("�m�W���ҿ��~ >>> �j��n�X!\n");
    }
    return 0;
}
