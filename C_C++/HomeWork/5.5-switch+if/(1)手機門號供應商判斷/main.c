#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=== �Τ���R ===\n");
    printf("�п�J�A����������� 9 �X�G");
    int num;
    scanf("%d", &num);
    printf("�A����������O�G0%d !... ^(o_o)^ ...!\n", num);
    int class = num / 10000000;
    printf("�A����������O�G");
    switch (class)
    {
    case 95:
        printf("���عq�H");
        break;
    case 94:
        printf("�x�W�j���j");
        break;
    case 93:
        printf("���ǹq�H");
        break;
    }
    printf("!... ^(o_o)^ ...!\n\n");

    system("PAUSE");
    return 0;
}