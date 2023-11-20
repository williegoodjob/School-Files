#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char ch;

int main()
{
    printf("請輸入一個字元:");
    ch = getch();
    printf("\n使用getch輸入的字元:");
    putchar(ch);
}