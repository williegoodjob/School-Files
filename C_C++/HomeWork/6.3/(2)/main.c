#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
    int n, sum = 0;
    printf(" =求 1 到 100 可以被n整除的整數=\n\n");
    printf(" 請輸入 1 到 100 的整數 n：");
    scanf("%d", &n);
    printf("\n\n");
    if (n >= 1 && n <= 100)
    {
        for (int i = 1; i <= 100; i++)
        {
            if (i % (n * 2) == 0)
            {
                printf("%3d,", i);
                sum++;
            }
        }
        printf(" 左邊顯示由 1 到 100 有 %d 個偶數整數可以被 %d 整除!\n", n, sum);
        printf("\n\n");
        sum = 0;
        for (int i = 1; i <= 100; i++)
        {
            if (i % n == 0 && i % (n * 2) != 0)
            {
                printf("%3d,", i);
                sum++;
            }
        }
        printf(" 左邊顯示由 1 到 100 有 %d 個奇數整數可以被 %d 整除!\n", n, sum);
    }
    else
    {
        printf("輸入的資料錯誤!@_@\n");
    }

    system("PAUSE");
    return 0;
}
