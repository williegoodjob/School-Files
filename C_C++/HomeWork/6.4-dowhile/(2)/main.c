#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char ch;
    int ans, keyin;
    int num[4];
    do
    {
        printf("\n");
        printf(" �п�J�� 1 �Ӿ�ơG");
        scanf("%d", &num[0]);
        printf(" �п�J�� 2 �Ӿ�ơG");
        scanf("%d", &num[1]);
        printf(" �п�J�� 3 �Ӿ�ơG");
        scanf("%d", &num[2]);
        printf(" �п�J�� 4 �Ӿ�ơG");
        scanf("%d", &num[3]);
        ans = num[0] + (num[1] * num[2]) - num[3];
        do
        {
            printf(" %d + %d * %d - %d = ", num[0], num[1], num[2], num[3]);
            scanf("%d", &keyin);
            if (keyin == ans)
            {
                printf(" ����F!^_^\n");
                break;
            }
            else
            {
                printf(" �����F!@_@\n");
                continue;
            }
        } while (1);
        printf(" �O�_(y/n)�~��G");
        ch = tolower(getche());
        printf("\n");
    } while (ch == 'y');
    printf("\n");
    system("PAUSE");
    return 0;
}
