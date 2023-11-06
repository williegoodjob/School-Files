#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 9; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%.2f ", 1.25 + j);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}