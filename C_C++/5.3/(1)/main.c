#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    printf("請輸入期中考考試分數：");
    int midterm;
    scanf("%d", &midterm);
    if (midterm >= 60)
    {
        printf("%s%d%s","恭喜通過期中考考試!^_^、期中考成績為", midterm, "分\n");
    }else{
        printf("%s%d%s","遺未通過期中考考試!#_#、期中考成績為", midterm, "分\n");
    }
    system("pause");
    return 0;
}