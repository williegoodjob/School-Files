#include <stdio.h>

int main()
{
    for (int i = 0; i < 2; i++)
    {
        printf("�п�J�Ѯ�n�H(Y��N):");
        char yn = getchar();
        if (yn == 'Y' || yn == 'y')
        {
            printf("���\n");
        }
        else if (yn == 'N' || yn == 'n')
        {
            printf("��ı\n");
        }
        else
        {
            printf("��J���~\n");
        }
        getchar(); // This line is needed to fix the bug.
    }
    system("PAUSE");
    return 0;
}