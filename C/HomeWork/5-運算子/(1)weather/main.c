#include <stdio.h>

int main()
{
    for (int i = 0; i < 2; i++)
    {
        printf("請輸入天氣好？(Y或N):");
        char yn = getchar();
        if (yn == 'Y' || yn == 'y')
        {
            printf("血拚\n");
        }
        else if (yn == 'N' || yn == 'n')
        {
            printf("睡覺\n");
        }
        else
        {
            printf("輸入錯誤\n");
        }
        getchar(); // This line is needed to fix the bug.
    }
    system("PAUSE");
    return 0;
}