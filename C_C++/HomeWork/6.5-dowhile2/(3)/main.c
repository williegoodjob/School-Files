// 請選擇:( 1 )最大公因數( 2 )結束 3
// 請輸入 1 或 2
// 請選擇:( 1 )最大公因數( 2 )結束 1
// 請輸入兩個整數 12 36
// 最大公因數: 12
// 請選擇:( 1 )最大公因數( 2 )結束

#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    while (1)
    {
        printf("請選擇:( 1 )最大公因數( 2 )結束 ");
        int select, a, b;
        scanf("%d", &select);
        switch (select)
        {
        case 1:
            printf("請輸入兩個整數 ");
            scanf("%d %d", &a, &b);
            printf("最大公因數: %d\n", gcd(a, b));
            break;
        case 2:
            return 0;
            break;
        default:
            printf("請輸入 1 或 2\n");
            break;
        }
    }
    return 0;
}