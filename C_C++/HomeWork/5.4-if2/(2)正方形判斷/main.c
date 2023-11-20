#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("請輸入A邊長：");
    scanf("%d", &a);
    printf("請輸入B邊長：");
    scanf("%d", &b);
    printf("請輸入C邊長：");
    scanf("%d", &c);
    printf("請輸入D邊長：");
    scanf("%d", &d);
    if (a == b && b == c && c == d)
    {
        printf("這是一個正方形!\n");
    }
    else
    {
        printf("這不是一個正方形!\n");
    }
    system("pause");
    return 0;
}