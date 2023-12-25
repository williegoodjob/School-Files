#include <stdio.h> //包含必要的函式庫
#include <stdlib.h>//包含必要的函式庫

int main()//主程式
{
    for (int i = 1; i <= 9; i++)// 使用雙重迴圈印出一個數字三角形(重複執行9次 1~9)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%.1f ", 1.5 + j); // 印出 1.5 加上 j 的值，並以小數點後一位顯示
        }
        printf("\n"); // 換行
    }
    system("pause");//暫停執行
    return 0; //退出並返回0
}