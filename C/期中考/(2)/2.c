#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber, guess = 0;
    srand(time(0));

    randomNumber = rand() % 500 + 1;
    printf("�п�J�A�n�q�����T�Ʀr:");
    scanf("%d", &guess);
    if (guess == randomNumber)
    {
        printf("�A�q��F,�кI���ҩ�!>>>���T�Ʀr�� %d !\n", randomNumber);
    }
    else
    {
        printf("�A�q���F,���~��q��אּ��!>>>���T�Ʀr�� %d !\n", randomNumber);
    }
    system("pause");
    return 0;
}