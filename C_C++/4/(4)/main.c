#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main(int argc, char *argv[])
{
    char yn, username[10];
    int passwd;
    printf("�п�J UserName:");
    gets(username);
    printf("�п�J PassWord:");
    scanf("%4d", &passwd);
    printf("\n\n");
    printf("1. �ϥΪ̦W�١G%s\n", username);
    printf("2. �K�@�@�@�X�G%d", passwd);
    printf("\n\n");
    printf("�H�W��ƬO�_���T�H(Y/N)");
    yn = toupper(getche());
    if (yn == 'Y')
    {
        puts("\n\n �i�J�t��.. �еy�ݡI\n");
    }
    else
    {
        puts("\n\n ���}���t�ΡI...\n");
    }
    system("PAUSE");
    return 0;
}