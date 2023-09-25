#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float a, b, c;
    printf("請輸入 A 邊長：");
    scanf("%f", &a);
    printf("請輸入 B 邊長：");
    scanf("%f", &b);
    printf("請輸入 C 邊長：");
    scanf("%f", &c);
    float a2 = pow(a, 2);
    float b2 = pow(b, 2);
    float c2 = pow(c, 2);

    if ((a2 + b2) == c2 || (a2 + c2) == b2 || (b2 + c2) == a2)
    {
        printf("\n 這是一個直角三角形!\n");
    }
    else
    {
        printf("\n 這不是一個直角三角形!\n");
    }

    system("PAUSE");
    return 0;
}