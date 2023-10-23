#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (float i = 10, j = 0, n = 1; i > 0, j < 10; i -= 0.651, j += 0.753, n += 1)
    {
        printf("i 的第%d次數值=%.3f   j 的第%d次數值=%.3f\n", (int)n, i, (int)n, j);
    }
    system("PAUSE");
    return 0;
}