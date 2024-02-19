#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char name[50];
    printf("輸入你的英文姓名:");
    scanf("%s", name);
    printf("\n");
    if (strcmp(name, "Xuser") == 0)
    {
        srand(time(0)); 
        printf("產生1000個字元元素之字元陣列如下:\n");
        for (int i = 0; i < 1000; i++)
        {
            printf("name[%d]=%c\n", i + 1, 'A' + rand() % 26); 
        }
    }
    else
    {
        printf("姓名驗證錯誤 >>> 強制登出!\n");
    }
    return 0;
}
