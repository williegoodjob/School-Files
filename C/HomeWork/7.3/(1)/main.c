#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    int a[] = {73, 168, 349, 229, 543};
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    printf(">>> ��ư}�Ca�����C�Ӥ����U��4��Bytes <<<\n");
    int length = sizeof(a) / sizeof(a[0]);
    printf("=== ��ư}�Ca�O����Ŷ��`�@��%d��Bytes ===\n", length * 4);

    char b[] = {'B', 'O', 'O', 'K', 'S'};
    for (int i = 0; i < 5; i++)
    {
        printf("b[%d] = %c\n", i, b[i]);
    }
    printf(">>> �^��}�Ca�����C�Ӥ����U��4��Bytes <<<\n");
    int length1 = sizeof(b) / sizeof(b[0]);
    printf("=== �^��}�Ca�O����Ŷ��`�@��%d��Bytes ===\n", length1 * 4);

    char* c[] = {"��", "�t", "�Q"};
    for (int i = 0; i < 3; i++)
    {
        printf("c[%d] = %s\n", i, c[i]);
    }
    printf(">>> ��ư}�Ca�����C�Ӥ����U��4��Bytes <<<\n");
    int length2 = sizeof(b) / sizeof(b[0]);
    printf("=== ��ư}�Ca�O����Ŷ��`�@��%d��Bytes ===\n", length2 * 4);
    
}