#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("�D�h���� (n+n*2+n*3+n*4) ���`�M\n\n");

    for (int times = 0; times < 3; times++)
    {
        int sum = 0, n = 0;
        printf("��%s����J��Ƭ���J���(1~10) n�G", times == 0 ? "�@" : times == 1 ? "�G": "�T");
        scanf("%d", &n);
        printf("�A��J���O�Gn=%d\n", n);
        if (n <= 10 && n >= 1)
        {
            printf("�A�p�⪺���צ�\n");
            for (int i = 1; i <= n; i++)
            {
                sum += i + i * 2 + i * 3 + i * 4;
                printf("(%d+%d+%d+%d)", i, i * 2, i * 3, i * 4);
                if (i != n)
                {
                    printf("+");
                }
                else
                {
                    printf(" = %d\n\n\n", sum);
                }
            }
        }
        else
        {
            printf("��J���~�I�� 1 ~ 10 �������!\n\n\n");
        }
    }
    return 0;
}