#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, i, number = 1;
    printf("=== �ⶥ���ۭ��p�� ===\n\n");
    printf("��J�@�ӥ���ơG");
    scanf("%d", &n);
    i = n;
    do
    {
        number *= i;
        i--;
    } while (i >= 1);
    number *= number;
    printf("\n %d ! ���H %d ! = %d \n\n", n, n, number);

    system("PAUSE");
    return 0;
}
