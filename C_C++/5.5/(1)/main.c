#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=== 用戶分析 ===\n");
    printf("請輸入你的手機門號後 9 碼：");
    int num;
    scanf("%d", &num);
    printf("你的手機門號是：0%d !... ^(o_o)^ ...!\n", num);
    int class = num / 10000000;
    printf("你的手機門號是：");
    switch (class)
    {
    case 95:
        printf("中華電信");
        break;
    case 94:
        printf("台灣大哥大");
        break;
    case 93:
        printf("遠傳電信");
        break;
    }
    printf("!... ^(o_o)^ ...!\n\n");

    system("PAUSE");
    return 0;
}