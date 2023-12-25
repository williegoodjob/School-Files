#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=== �H�U���}�C A ===\n");
    int A[3][5] = {{1, 2, 3, 4, 5},
                   {6, 7, 8, 9, 10},
                   {11, 12, 13, 14, 15}};
    int sumA = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("A[%d][%d]=%2d ,", i, j, A[i][j]);
            sumA += A[i][j];
        }
        printf("\n");
    }

    printf("\n=== �H�U���}�C B ===\n");
    int B[3][5] = {{16, 17, 18, 19, 20},
                   {21, 22, 23, 24, 25},
                   {26, 27, 28, 29, 30}};
    int sumB = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("B[%d][%d]=%2d ,", i, j, B[i][j]);
            sumB += B[i][j];
        }
        printf("\n");
    }

    printf("\n\n\n");

    printf("=== �H�U���}�C A �P�}�C B �� 5 �حp�⵲�G ===");
    printf("\n<<< �p�⵲�G 1 �G �}�C A ���`�M�� %d >>>\n", sumA);
    printf("\n<<< �p�⵲�G 2 �G �}�C B ���`�M�� %d >>>\n", sumB);
    printf("\n<<< �p�⵲�G 3 �G �}�C A ���`�M + �}�C B ���`�M�� %d >>>\n", sumA + sumB);
    printf("\n<<< �p�⵲�G 4 �G �}�C A +�}�C B ���H�U�}�C C >>>\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("C[%d][%d]=%2d ,", i, j, A[i][j] + B[i][j]);
        }
        printf("\n");
    }
    printf("\n<<< �p�⵲�G 5 �G �}�C A �P�}�C B �� Hadamard �ۭ����H�U�}�C D >>>\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("D[%d][%d]=%2d ,", i, j, A[i][j] * B[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    system("pause");
    return 0;
}
