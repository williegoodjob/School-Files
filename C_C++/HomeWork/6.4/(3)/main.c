#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
    char pw[10];
    int count = 0;
    do
    {
        count++;
        printf("�� %d ����J�K�X�G", count);
        gets(pw);
        if (strcmp(pw, "13579") == 0)
        {
            break;
        }
        else if (count == 3)
        {
            printf("\n ^_^ Sorry! �K�X���~ ....  \n\n");
            system("PAUSE");
            exit(0);
        }
    } while (1);
    printf("\n�K�X���T!! Pass ....\n\n");
    system("PAUSE");
    return 0;
}
