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
        printf("\n�n�L�X�X�� * ��(����J1-8)�G");
        keyin = getche();
        printf("\t");
        if (keyin <= '8' && keyin >= '1')
        {
            n = 0;
            do
            {
                n++;
                printf("\n\n��X :");
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
            printf("\n���~ ! �п�J1-8���Ʀr �K�K");
        }
        printf("\n\n �O�_�~��L�C(y/n)? ");
        ch = toupper(getche());
        printf("\n");
    } while (ch == 'Y');
    printf("\n");

    system("PAUSE");
    return 0;
}
