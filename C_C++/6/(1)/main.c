#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
        if (i == 10)
            printf("%d", i);
        else
            printf("%d+", i);
    }
    printf(" 的總和為 %d\n", sum);
    printf("---------------------------------\n");
    system("PAUSE");
    return 0;
}
