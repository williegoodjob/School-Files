#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int i, n;
    char ch, keyin;
    do
    {
        printf("\n要印出幾個 * 號(限輸入1-8)：");
        keyin = getche();
        printf("\t");
        if (keyin <= '8' && keyin >= '1')
        {
            n = 0;
            do
            {
                n++;
                printf("\n\n輸出 :");
                i = 1;
                do
                {
                    if (n == 1)
                        printf("%d", i);
                    else
                        printf("*");
                    i++;
                } while (i <= (keyin - '0'));
            } while (n <= 1);
        }
        else
        {
            printf("\n錯誤 ! 請輸入1-8的數字 ……");
        }
        printf("\n\n 是否繼續印列(y/n)? ");
        ch = toupper(getche());
        printf("\n");
    } while (ch == 'Y');
    printf("\n");

    system("PAUSE");
    return 0;
}
