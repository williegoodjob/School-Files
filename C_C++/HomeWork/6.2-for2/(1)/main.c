#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("求多項式 (n+n*2+n*3+n*4) 的總和\n\n");

    for (int times = 0; times < 3; times++)
    {
        int sum = 0, n = 0;
        printf("第%s次輸入資料為輸入整數(1~10) n：", times == 0 ? "一" : times == 1 ? "二": "三");
        scanf("%d", &n);
        printf("你輸入的是：n=%d\n", n);
        if (n <= 10 && n >= 1)
        {
            printf("你計算的答案式\n");
            for (int i = 1; i <= n; i++)
            {
                sum += i + i * 2 + i * 3 + i * 4;
                printf("(%d+%d+%d+%d)", i, i * 2, i * 3, i * 4);
                if (i != n)
                {
                    printf("+");
                }
                else
                {
                    printf(" = %d\n\n\n", sum);
                }
            }
        }
        else
        {
            printf("輸入有誤！限 1 ~ 10 間的整數!\n\n\n");
        }
    }
    return 0;
}