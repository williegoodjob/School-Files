#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char ch[10], en[10];
    printf("請輸您的中文姓名:");
    scanf("%s", ch);
    printf("%s 您好^_^\n", ch);
    printf("請輸您的英文姓名:");
    scanf("%s", en);
    printf("%s 您好^_^\n", en);
    printf("您設計的中文陣列元素如下:\n");
    for (int i = 0; i < strlen(ch); i++)
    {
        printf("%c", ch[i]);
    }
    printf("\n\n");
    printf("您設計的英文陣列元素如下:\n");
    for (int i = 0; i < strlen(en); i++)
    {
        printf("name2[%d]=%c\n", i, en[i]);
    }
}