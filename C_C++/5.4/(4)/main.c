#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("�гs��ɤJ�T�Ӥ��P�����(��ƶ��ϥΡu,�v�r���j�}):");
    scanf("%d,%d,%d", &a, &b, &c);
    printf("������G : %d , %d , %d ", a, b, c);
    
    if (a > b && a > c)
    {
        printf("�T�Ƥ��̤j�Ƭ� %d\n", a);
    }
    else if (b > a && b > c)
    {
        printf("�T�Ƥ��̤j�Ƭ� %d\n", b);
    }
    else
    {
        printf("�T�Ƥ��̤j�Ƭ� %d\n", c);
    }
    system("pause");

    return 0;
}