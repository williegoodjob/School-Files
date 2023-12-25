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

        char *ch[2] = {"��", "��"};
        int arr[6] = {0};
        printf("<<< �гs���J%s�Ӽƭ�(��ƶ��Ť@��)>>>\n", ch[first]);
        printf("��w�ƧǪk(�Ƨǫe):");
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
        printf("\n== ��w�ƧǪk(�Ѥp��j�Ƨ�) ==\n");
        printf("�p�⵲�G 1 : �Ƨǫᬰ ");
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
        printf("== ��w�ƧǪk(�Ѥj��p�Ƨ�) ==\n");
        printf("�p�⵲�G 2 : �Ƨǫᬰ ");
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
        printf("== ��w�ƧǪk(�̤p��) ==\n");
        if (first == 0)
            printf("�p�⵲�G 3 : �̤p�Ȭ� %d\n\n", arr[1]);
        else
            printf("�p�⵲�G 3 : �̤p�Ȭ� %d\n\n", arr[0]);
        printf("== ��w�ƧǪk(�̤j��) ==\n");
        printf("�p�⵲�G 4 : �̤j�Ȭ� %d\n\n", arr[n - 1]);
        printf("== ��w�ƧǪk(������) ==\n");
        float sum = 0;
        if (first == 0)
        {
            for (int i = 1; i < n; i++)
            {
                sum += arr[i];
            }
            printf("�p�⵲�G 5 : �����Ȭ� %.1f\n\n", sum / 5);
            printf("== ��w�ƧǪk(�����) ==\n");
            printf("�p�⵲�G 6 : ����Ƭ� %d\n\n", arr[3]);
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                sum += arr[i];
            }
            printf("�p�⵲�G 5 : �����Ȭ� %.10f\n\n", sum / 6);
            printf("== ��w�ƧǪk(�����) ==\n");
            printf("�p�⵲�G 6 : ����Ƭ� %d\n\n", (arr[2] + arr[3]) / 2);
        }
    }
    return 0;
}