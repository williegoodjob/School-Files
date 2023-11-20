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
        printf(" 請輸入第 1 個整數：");
        scanf("%d", &num[0]);
        printf(" 請輸入第 2 個整數：");
        scanf("%d", &num[1]);
        printf(" 請輸入第 3 個整數：");
        scanf("%d", &num[2]);
        printf(" 請輸入第 4 個整數：");
        scanf("%d", &num[3]);
        ans = num[0] + (num[1] * num[2]) - num[3];
        do
        {
            printf(" %d + %d * %d - %d = ", num[0], num[1], num[2], num[3]);
            scanf("%d", &keyin);
            if (keyin == ans)
            {
                printf(" 答對了!^_^\n");
                break;
            }
            else
            {
                printf(" 答錯了!@_@\n");
                continue;
            }
        } while (1);
        printf(" 是否(y/n)繼續：");
        ch = tolower(getche());
        printf("\n");
    } while (ch == 'y');
    printf("\n");
    system("PAUSE");
    return 0;
}
