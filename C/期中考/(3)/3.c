#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        printf("=== �� %d ���T�w�I���� ===\n", i);
        int x, y, cx, cy, px, py;
        printf("�п�J�� %d ���T�w�I X �b���y���I:", i);
        scanf("%d", &x);
        printf("�п�J�� %d ���T�w�I Y �b���y���I:", i);
        scanf("%d", &y);
        printf("�п�J����I X �b���y���I:");
        scanf("%d", &cx);
        printf("�п�J����I Y �b���y���I:");
        scanf("%d", &cy);
        printf("�п�J�� %d ���w���I X �b���y���I:", i);
        scanf("%d", &px);
        printf("�п�J�� %d ���w���I Y �b���y���I:", i);
        scanf("%d", &py);
        double radius = sqrt(pow((x - cx), 2) + pow((y - cy), 2));
        double distance = sqrt(pow((px - cx), 2) + pow((py - cy), 2));

        if (distance > radius)
        {
            printf("<<< �� %d �������I�b���~! >>>", i);
        }
        else if (distance < radius)
        {
            printf("<<< �� %d �������I�b��餺! >>>", i);
        }
        else
        {
            printf("<<< �� %d �������I�b���W! >>>", i);
        }
        printf("\n\n");
    }
    system("pause");
    return 0;
}