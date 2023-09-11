#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main(int argc, char *argv[])
{
    char yn, username[10];
    int passwd;
    printf("請輸入 UserName:");
    gets(username);
    printf("請輸入 PassWord:");
    scanf("%4d", &passwd);
    printf("\n\n");
    printf("1. 使用者名稱：%s\n", username);
    printf("2. 密　　　碼：%d", passwd);
    printf("\n\n");
    printf("以上資料是否正確？(Y/N)");
    yn = toupper(getche());
    if (yn == 'Y')
    {
        puts("\n\n 進入系統.. 請稍待！\n");
    }
    else
    {
        puts("\n\n 離開本系統！...\n");
    }
    system("PAUSE");
    return 0;
}