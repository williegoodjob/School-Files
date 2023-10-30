#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        printf("=== 第 %d 次固定點測試 ===\n", i);
        int x, y, cx, cy, px, py;
        printf("請輸入第 %d 次固定點 X 軸的座標點:", i);
        scanf("%d", &x);
        printf("請輸入第 %d 次固定點 Y 軸的座標點:", i);
        scanf("%d", &y);
        printf("請輸入圓心點 X 軸的座標點:");
        scanf("%d", &cx);
        printf("請輸入圓心點 Y 軸的座標點:");
        scanf("%d", &cy);
        printf("請輸入第 %d 次預測點 X 軸的座標點:", i);
        scanf("%d", &px);
        printf("請輸入第 %d 次預測點 Y 軸的座標點:", i);
        scanf("%d", &py);
        double radius = sqrt(pow((x - cx), 2) + pow((y - cy), 2));
        double distance = sqrt(pow((px - cx), 2) + pow((py - cy), 2));

        if (distance > radius)
        {
            printf("<<< 第 %d 次測試點在圓圈外! >>>", i);
        }
        else if (distance < radius)
        {
            printf("<<< 第 %d 次測試點在圓圈內! >>>", i);
        }
        else
        {
            printf("<<< 第 %d 次測試點在圓圈上! >>>", i);
        }
        printf("\n\n");
    }
    system("pause");
    return 0;
}