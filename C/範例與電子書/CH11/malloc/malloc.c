#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);
int main(int argc, char *argv[]) 
{
    int *ptr;
    int n, i, j;

    printf("�аݭn��J�X�Ӿ�ơG");
    scanf("%d", &n); 
    ptr = (int *)malloc(sizeof(int) * n);
    if(ptr != NULL)
    {
        for(i = 0; i < n; i ++)
        {
            printf("  ��%2d�Ӿ�ơG", i + 1);
            scanf("%d", ptr + i);
        }
        for(i = 0, j = n - 1; i < n / 2; i++, j--)
        {
            swap(ptr + i, ptr + j);
        }
        printf("½��᪺���\n");
        for(i = 0; i < n; i ++)
        {
            printf("%d\t", *(ptr + i));
        }
        printf("\n");
        free(ptr);
    }
    else
    {
        printf("�O����t�m����!\n");
    }
    system("PAUSE");
	return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
