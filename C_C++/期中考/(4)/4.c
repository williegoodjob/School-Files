#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=== ����Τ��k�ݶ��ݤj�ƾڤ��R�t�� ===\n");
    for (int i = 1; i <= 4; i++)
    {
        printf("�п�J��%s����������@ 10 �X�G", i == 1 ? "�@" : i == 2 ? "�G" : i == 3 ? "�T" : "�|");
        int num;
        scanf("%d", &num);
        printf("�A����������O�G0%d !... ^(o_o)^ ...!\n\n", num);
        int n = num / 10000000;
        printf("�z�ϥΪ������k�ݩ�:");
        switch (n)
        {
        case 99:
            printf("�n�x��j�q�H");
            break;
        case 92:
            printf("�x�W�j���j");
            break;
        case 97:
            printf("���ǹq�H");
            break;

        case 96:
            printf("���عq�H");
            break;
        }
        printf("!... o(^_^)o ...!\n\n\n");
    }
    system("PAUSE");
    return 0;
}