#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=== 手機用戶歸屬雲端大數據分析系統 ===\n");
    for (int i = 1; i <= 4; i++)
    {
        printf("請輸入第%s次手機門號共 10 碼：", i == 1 ? "一" : i == 2 ? "二" : i == 3 ? "三" : "四");
        int num;
        scanf("%d", &num);
        printf("你的手機門號是：0%d !... ^(o_o)^ ...!\n\n", num);
        int n = num / 10000000;
        printf("您使用的門號歸屬於:");
        switch (n)
        {
        case 99:
            printf("南台科大電信");
            break;
        case 92:
            printf("台灣大哥大");
            break;
        case 97:
            printf("遠傳電信");
            break;

        case 96:
            printf("中華電信");
            break;
        }
        printf("!... o(^_^)o ...!\n\n\n");
    }
    system("PAUSE");
    return 0;
}