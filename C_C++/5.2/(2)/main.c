#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess, attempts = 0;
    srand(time(0));

    randomNumber = rand() % 5 + 1;

    printf("�п�J�n�q���Ʀr(��1-5 ):");
    scanf("%d", &guess);
    attempts++;

    if (guess == randomNumber) {
        printf("�q��F! ^_^�A���T�Ʀr�� %d�I\n", randomNumber);
    }else{
        printf("�q���F! #_#�A���T�Ʀr�� %d�I\n", randomNumber);
    }
    system("pause");
    return 0;
}