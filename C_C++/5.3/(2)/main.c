#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber, guess = 0;
    srand(time(0));

    randomNumber = rand() % 10 + 1;
    printf("請輸入要猜的數字(限1-10):");
    scanf("%d", &guess);
    if (guess == randomNumber)
    {
        printf("猜對了通過,請截圖證明貼於隨堂練習3!、正確數字為%d！\n", randomNumber);
    }
    else
    {
        printf("猜錯了未通過,請繼續猜到對為止!#_#、正確數字為%d！\n", randomNumber);
    }
    system("pause");
    return 0;
}