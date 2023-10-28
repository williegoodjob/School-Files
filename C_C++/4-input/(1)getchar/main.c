#include <stdio.h>
#include <stdlib.h>

char ch;
int main()
{
    printf("請輸入一個字元:");
    ch = getchar();
    printf("使用getchar輸入的字元:");
    putchar(ch);
}
