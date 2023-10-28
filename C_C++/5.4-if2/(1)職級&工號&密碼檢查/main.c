#include <stdio.h>
#include <stdlib.h>

int main()
{
    char rank[10];
    char id[8];
    char password[8];
    printf("==== 職級 & 工號 & 密碼 檢查 ====\n");
    printf("請輸入職級 (限十個字元):");
    scanf("%s", rank);
    printf("請輸入工號 (限八個字元):");
    scanf("%s", id);
    printf("請輸入密碼 (限八個字元):");
    scanf("%s", password);

    if (strcmp(rank, "總經理") == 0)
    {
        if (strcmp(id, "abcdef") == 0)
        {
            if (strcmp(password, "g123456") == 0)
            {
                printf("職級 和 工號 以及 密碼 無誤 ... ^_^ !!\n");
                printf("歡迎總經理進入本會議室...\n");
            }
            else
            {
                printf("密碼 不符 ... @_@\n");
                printf("已通知安檢單位...\n");
            }
        }
        else
        {
            printf("工號 不符 ... @_@\n");
            printf("已通知安檢單位...\n");
        }
    }
    else
    {
        printf("職級 不符 ... @_@\n");
        printf("已通知安檢單位...\n");
    }
    return 0;
}