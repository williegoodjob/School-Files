#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber, guess = 0;
    srand(time(0));

    randomNumber = rand() % 10 + 1;
    printf("�п�J�n�q���Ʀr(��1-10):");
    scanf("%d", &guess);
    if (guess == randomNumber)
    {
        printf("�q��F�q�L,�кI���ҩ��K���H��m��3!�B���T�Ʀr��%d�I\n", randomNumber);
    }
    else
    {
        printf("�q���F���q�L,���~��q��אּ��!#_#�B���T�Ʀr��%d�I\n", randomNumber);
    }
    system("pause");
    return 0;
}