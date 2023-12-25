#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    for (int first = 0; first < 2; first++)
    {

        char *ch[2] = {"五", "六"};
        int arr[6] = {0};
        printf("<<< 請連續輸入%s個數值(資料間空一格)>>>\n", ch[first]);
        printf("氣泡排序法(排序前):");
        if (first == 0)
        {
            scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
        }
        else
        {
            scanf("%d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5]);
        }
        int n = sizeof(arr) / sizeof(arr[0]);
        bubbleSort(arr, n);
        printf("\n== 氣泡排序法(由小到大排序) ==\n");
        printf("計算結果 1 : 排序後為 ");
        if (first == 0)
        {
            for (int i = 1; i < n; i++)
            {
                printf("%d ",arr[i]);
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
        }
        printf("\n\n");
        printf("== 氣泡排序法(由大到小排序) ==\n");
        printf("計算結果 2 : 排序後為 ");
        if (first == 0)
        {
            for (int i = n - 1; i >= 1; i--)
            {
                printf("%d ", arr[i]);
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                printf("%d ", arr[i]);
            }
        }
        printf("\n\n");
        printf("== 氣泡排序法(最小值) ==\n");
        if (first == 0)
            printf("計算結果 3 : 最小值為 %d\n\n", arr[1]);
        else
            printf("計算結果 3 : 最小值為 %d\n\n", arr[0]);
        printf("== 氣泡排序法(最大值) ==\n");
        printf("計算結果 4 : 最大值為 %d\n\n", arr[n - 1]);
        printf("== 氣泡排序法(平均值) ==\n");
        float sum = 0;
        if (first == 0)
        {
            for (int i = 1; i < n; i++)
            {
                sum += arr[i];
            }
            printf("計算結果 5 : 平均值為 %.1f\n\n", sum / 5);
            printf("== 氣泡排序法(中位數) ==\n");
            printf("計算結果 6 : 中位數為 %d\n\n", arr[3]);
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                sum += arr[i];
            }
            printf("計算結果 5 : 平均值為 %.10f\n\n", sum / 6);
            printf("== 氣泡排序法(中位數) ==\n");
            printf("計算結果 6 : 中位數為 %d\n\n", (arr[2] + arr[3]) / 2);
        }
    }
    return 0;
}