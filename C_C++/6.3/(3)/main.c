#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, i, number = 1;
    printf("=== 兩階乘相乘計算 ===\n\n");
    printf("輸入一個正整數：");
    scanf("%d", &n);
    i = n;
    do
    {
        number *= i;
        i--;
    } while (i >= 1);
    number *= number;
    printf("\n %d ! 乘以 %d ! = %d \n\n", n, n, number);

    system("PAUSE");
    return 0;
}
