#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float a, b, c;
    printf("�п�J A ����G");
    scanf("%f", &a);
    printf("�п�J B ����G");
    scanf("%f", &b);
    printf("�п�J C ����G");
    scanf("%f", &c);
    float a2 = pow(a, 2);
    float b2 = pow(b, 2);
    float c2 = pow(c, 2);

    if ((a2 + b2) == c2 || (a2 + c2) == b2 || (b2 + c2) == a2)
    {
        printf("\n �o�O�@�Ӫ����T����!\n");
    }
    else
    {
        printf("\n �o���O�@�Ӫ����T����!\n");
    }

    system("PAUSE");
    return 0;
}