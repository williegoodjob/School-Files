#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("�п�JA����G");
    scanf("%d", &a);
    printf("�п�JB����G");
    scanf("%d", &b);
    printf("�п�JC����G");
    scanf("%d", &c);
    printf("�п�JD����G");
    scanf("%d", &d);
    if (a == b && b == c && c == d)
    {
        printf("�o�O�@�ӥ����!\n");
    }
    else
    {
        printf("�o���O�@�ӥ����!\n");
    }
    system("pause");
    return 0;
}