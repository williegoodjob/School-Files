#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    printf("�п�J�����ҦҸդ��ơG");
    int midterm;
    scanf("%d", &midterm);
    if (midterm >= 60)
    {
        printf("%s%d%s","���߳q�L�����ҦҸ�!^_^�B�����Ҧ��Z��", midterm, "��\n");
    }else{
        printf("%s%d%s","�򥼳q�L�����ҦҸ�!#_#�B�����Ҧ��Z��", midterm, "��\n");
    }
    system("pause");
    return 0;
}