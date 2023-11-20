#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("叫硈尿缴ぃ俱计(戈丁ㄏノ,硆腹筳秨):");
    scanf("%d,%d,%d", &a, &b, &c);
    printf("ゑ耕挡狦 : %d , %d , %d ", a, b, c);
    
    if (a > b && a > c)
    {
        printf("计い程计 %d\n", a);
    }
    else if (b > a && b > c)
    {
        printf("计い程计 %d\n", b);
    }
    else
    {
        printf("计い程计 %d\n", c);
    }
    system("pause");

    return 0;
}