#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
    int n, sum = 0;
    printf(" =�D 1 �� 100 �i�H�Qn�㰣�����=\n\n");
    printf(" �п�J 1 �� 100 ����� n�G");
    scanf("%d", &n);
    printf("\n\n");
    if (n >= 1 && n <= 100)
    {
        for (int i = 1; i <= 100; i++)
        {
            if (i % (n * 2) == 0)
            {
                printf("%3d,", i);
                sum++;
            }
        }
        printf(" ������ܥ� 1 �� 100 �� %d �Ӱ��ƾ�ƥi�H�Q %d �㰣!\n", n, sum);
        printf("\n\n");
        sum = 0;
        for (int i = 1; i <= 100; i++)
        {
            if (i % n == 0 && i % (n * 2) != 0)
            {
                printf("%3d,", i);
                sum++;
            }
        }
        printf(" ������ܥ� 1 �� 100 �� %d �ө_�ƾ�ƥi�H�Q %d �㰣!\n", n, sum);
    }
    else
    {
        printf("��J����ƿ��~!@_@\n");
    }

    system("PAUSE");
    return 0;
}
