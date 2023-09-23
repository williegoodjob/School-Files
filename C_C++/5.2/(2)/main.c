#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess, attempts = 0;
    srand(time(0));

    randomNumber = rand() % 5 + 1;

    printf("請輸入要猜的數字(限1-5 ):");
    scanf("%d", &guess);
    attempts++;

    if (guess == randomNumber) {
        printf("猜對了! ^_^，正確數字為 %d！\n", randomNumber);
    }else{
        printf("猜錯了! #_#，正確數字為 %d！\n", randomNumber);
    }
    system("pause");
    return 0;
}