#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int count, matrix[2][4];
	count = 0;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 2; i++)
	{
		matrix[i][1] = rand() % 1000 + 1;
		matrix[i][2] = 0;
		matrix[i][3] = 1000;
	}
	printf("======= 猜數字遊戲 =======：\n\n");
	do
	{
		printf("猜第一個數字範圍 %d < ? < %d ：", matrix[0][2], matrix[0][3]);
		scanf("%d", &matrix[0][0]);
		printf("猜第二個數字範圍 %d < ? < %d ：", matrix[1][2], matrix[1][3]);
		scanf("%d", &matrix[1][0]);
		count++;
		if (matrix[0][0] < matrix[0][3] && matrix[0][0] > matrix[0][2])
		{
			if (matrix[0][0] == matrix[0][1] && matrix[1][0] == matrix[1][1])
			{
				printf("賓果!猜對了,第一個答案是 %d\n賓果!猜對了,第二個答案是 %d\n\n", matrix[0][0], matrix[1][0]);
				break;
			}
			else
			{
				if (matrix[0][0] > matrix[0][1] && matrix[1][0] > matrix[1][1])
				{
					printf("兩個數字都要再小一點!!");
					matrix[0][3] = matrix[0][0];
					matrix[1][3] = matrix[1][0];
				}
				else if (matrix[0][0] > matrix[0][1] && matrix[1][0] < matrix[1][1])
				{
					printf("第一個數要再小一點,第二個數要再大一點!!");
					matrix[0][3] = matrix[0][0];
					matrix[1][2] = matrix[1][0];
				}
				else if (matrix[0][0] < matrix[0][1] && matrix[1][0] > matrix[1][1])
				{
					printf("第一個數要再大一點,第二個數要再小一點!!");
					matrix[0][2] = matrix[0][0];
					matrix[1][3] = matrix[1][0];
				}
				else if (matrix[0][0] < matrix[0][1] && matrix[1][0] < matrix[1][1])
				{
					printf("兩個數字都要再大一點!!");
					matrix[0][2] = matrix[0][0];
					matrix[1][2] = matrix[1][0];
				}
				else if (matrix[0][0] == matrix[0][1] && matrix[1][0] > matrix[1][1])
				{
					printf("猜對了,請記住第一個答案是 %d\n", matrix[0][0]);
					printf("但是第二個數字要再小一點!!");
					matrix[1][3] = matrix[1][0];
				}
				else if (matrix[0][0] == matrix[0][1] && matrix[1][0] < matrix[1][1])
				{
					printf("猜對了,請記住第一個答案是 %d\n", matrix[0][0]);
					printf("但是第二個數字要再大一點!!");
					matrix[1][2] = matrix[1][0];
				}
				else if (matrix[0][0] > matrix[0][1] && matrix[1][0] == matrix[1][1])
				{
					printf("猜對了,請記住第二個答案是 %d\n", matrix[1][0]);
					printf("第一個數字要再小一點!!");
					matrix[0][3] = matrix[0][0];
				}
				else if (matrix[0][0] < matrix[0][1] && matrix[1][0] == matrix[1][1])
				{
					printf("猜對了,請記住第二個答案是 %d\n", matrix[1][0]);
					printf("第一個數字要再大一點!!");
					matrix[0][2] = matrix[0][0];
				}
				printf(" 您猜了 %d 次!\n\n", count);
			}
		}
		else
		{
			printf("\n輸入錯誤!\n\n");
		}
	} while (1);
	printf("\n總共猜了 %d 次!\n\n", count);
	system("PAUSE");
	return 0;
}
