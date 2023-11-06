#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%.1f ", 1.5 + j);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}