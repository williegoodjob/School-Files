#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int k = 1; k <= 3; k++)
    {
        int x, s1 = 0, s2 = 1;
        printf("請輸入第一次想要計算的階層個數:");
        scanf("%d", &x);
        if (x > 0)
        {
            for (int i = 1; i <= x; i++)
            {
                s2 = 1;
                for (int n = 1; n <= i; n++)
                {
                    s2 *= n;
                }
                s1 += s2;
            }
        }
        else if (x < 0)
        {
            printf("%d是負數所以沒有階乘計算結果!\n", x);
        }
        else
        {
            s2 = 1;
            s1 = 0;
        }
        if (x >= 0)
        {
            printf("%d的階乘計算結果為:%d\n", x, s2);
            printf("%d的階乘總和結果為:%d\n\n", x, s1);
        }
    }
    system("PAUSE");
    return 0;
}