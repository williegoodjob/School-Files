#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int x = 17, y = 53; x >= 11; x--, y -= 3)
    {
        printf("當x=%d時函數的計算結果為： f(%d) = %d\n", x, x, 1 + x * y);
    }
    system("PAUSE");
    return 0;
}