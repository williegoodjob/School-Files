// �п��:( 1 )�̤j���]��( 2 )���� 3
// �п�J 1 �� 2
// �п��:( 1 )�̤j���]��( 2 )���� 1
// �п�J��Ӿ�� 12 36
// �̤j���]��: 12
// �п��:( 1 )�̤j���]��( 2 )����

#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    while (1)
    {
        printf("�п��:( 1 )�̤j���]��( 2 )���� ");
        int select, a, b;
        scanf("%d", &select);
        switch (select)
        {
        case 1:
            printf("�п�J��Ӿ�� ");
            scanf("%d %d", &a, &b);
            printf("�̤j���]��: %d\n", gcd(a, b));
            break;
        case 2:
            return 0;
            break;
        default:
            printf("�п�J 1 �� 2\n");
            break;
        }
    }
    return 0;
}