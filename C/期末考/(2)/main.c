#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=== 以下為陣列 A ===\n");
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

    printf("\n=== 以下為陣列 B ===\n");
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

    printf("=== 以下為陣列 A 與陣列 B 的 5 種計算結果 ===");
    printf("\n<<< 計算結果 1 ： 陣列 A 的總和為 %d >>>\n", sumA);
    printf("\n<<< 計算結果 2 ： 陣列 B 的總和為 %d >>>\n", sumB);
    printf("\n<<< 計算結果 3 ： 陣列 A 的總和 + 陣列 B 的總和為 %d >>>\n", sumA + sumB);
    printf("\n<<< 計算結果 4 ： 陣列 A +陣列 B 為以下陣列 C >>>\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("C[%d][%d]=%2d ,", i, j, A[i][j] + B[i][j]);
        }
        printf("\n");
    }
    printf("\n<<< 計算結果 5 ： 陣列 A 與陣列 B 的 Hadamard 相乘為以下陣列 D >>>\n");
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
