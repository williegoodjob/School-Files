#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char ch;

int main()
{
    printf("請輸入一個字元:");
    ch = getche();
    printf("\n使用getche輸入的字元:");
    putchar(ch);
}