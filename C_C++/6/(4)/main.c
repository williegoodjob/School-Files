#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int x = 17, y = 53; x >= 11; x--, y -= 3)
    {
        printf("��x=%d�ɨ�ƪ��p�⵲�G���G f(%d) = %d\n", x, x, 1 + x * y);
    }
    system("PAUSE");
    return 0;
}