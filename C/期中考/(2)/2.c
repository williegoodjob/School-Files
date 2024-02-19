#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber, guess = 0;
    srand(time(0));

    randomNumber = rand() % 500 + 1;
    printf("請輸入你要猜的正確數字:");
    scanf("%d", &guess);
    if (guess == randomNumber)
    {
        printf("你猜對了,請截圖證明!>>>正確數字為 %d !\n", randomNumber);
    }
    else
    {
        printf("你猜錯了,請繼續猜到對為止!>>>正確數字為 %d !\n", randomNumber);
    }
    system("pause");
    return 0;
}