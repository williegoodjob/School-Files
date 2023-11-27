#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int check(int guess, int answer, int min, int max)
{
	if (guess >= min && guess <= max)
	{
		if (guess == answer)
		{
			return 0;
		}
		else if (guess > answer)
		{
			return 1;
		}
		else if (guess < answer)
		{
			return 2;
		}
	}
	else
	{
		return 3;
	}
}
int main(int argc, char *argv[])
{
	int keyin[2], guess[2], count, min[2], max[2], status[2];
	count = 0;
	min[0] = 0;
	min[1] = 0;
	max[0] = 1000;
	max[1] = 1000;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 2; i++)
		guess[i] = rand() % 1000 + 1;
	printf("======= 猜數字遊戲 =======：\n\n");
	do
	{
		for (int i = 0; i < 2; i++)
		{
			printf("猜第%s個數字範圍 %d < ? < %d ：", i == 0 ? "一" : "二", min[0], max[0]);
			scanf("%d", &keyin[i]);
		}

		count++;

		for (int i = 0; i < 2; i++)
		{
			status[i] = check(keyin[i], guess[i], min[i], max[i]);
		}
		bool flag = false;
		if (status[0] == status[1])
		{
			if (status[0] == 0 && status[1] == 0)
			{
				printf("賓果! 猜對了, 第一個答案是 %d\n", status[0]);
				printf("賓果! 猜對了, 第二個答案是 %d\n", status[1]);
				break;
			}
			else if (status[0] == 1 && status[1] == 1)
			{
				max[0] = keyin[0];
				max[1] = keyin[1];
				printf("兩個數字都要再小一點!!");
			}
			else if (status[0] == 2 && status[1] == 2)
			{
				min[0] = keyin[0];
				min[1] = keyin[1];
				printf("兩個數字都要再大一點!!");
			}
		}
		else
		{
			if (status[0] == 0)
			{
				printf("猜對了,請記住第一個答案是 %d\n", status[0]);
			}
			else if (status[0] == 1)
			{
				max[0] = keyin[0];
				printf("第一個數字要再小一點!!");
			}
			else if (status[0] == 2)
			{
				min[0] = keyin[0];
				printf("第一個數字要再大一點!!");
			}

			if (status[1] == 0)
			{
				printf("猜對了,請記住第二個答案是 %d\n", status[1]);
			}
			else if (status[1] == 1)
			{
				max[1] = keyin[1];
				printf(",第二個數字要再小一點!!");
			}
			else if (status[1] == 2)
			{
				min[1] = keyin[1];
				printf(",第二個數字要再大一點!!");
			}
		}

		// if (keyin[2] >= 1 && keyin[2] < 1000)
		// {
		// 	if (keyin[2] == guess)
		// 	{
		// 		printf("賓果! 猜對了, 答案是 %d\n", guess);
		// 		break;
		// 	}
		// 	else if (keyin[2] > guess)
		// 	{
		// 		max[0] = keyin[2]; /*將目前輸入的數字keyin[2]指定給max*/
		// 		printf("再小一點!!");
		// 	}
		// 	else if (keyin[2] < guess)
		// 	{
		// 		min[0] = keyin[2]; /*將目前輸入的數字keyin指定給min*/
		// 		printf("再大一點!!");
		// 	}
		// 	printf(" 您猜了 %d 次\n\n", count);
		// }
		// else
		// {
		// 	printf("請輸入提示範圍內的數字!\n");
		// }
	} while (1); /*無窮迴圈*/
	printf("\n總共猜了 %d 次!\n\n", count);
	system("PAUSE");
	return 0;
}
