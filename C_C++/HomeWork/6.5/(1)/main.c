#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

int main(int argc, char *argv[])
{
	char pw[10];
	int count = 0;
	int randomNumber;
	srand(time(0));
	randomNumber = rand() % 50 + 1;
	while (count < 10)
	{
		count++;
		printf("第 %d 次輸入密碼：", count);
		gets(pw);
		if (atoi(pw) == randomNumber)
		{
			printf("密碼正確!! Pass ....\n\n");
			system("PAUSE");
			exit(0);
		}
		else if (count == 10)
		{
			printf("\n 連續十次 結束執行 .... \n");
			exit(0);
		}
		else
		{
			printf(" ^_^ Sorry! 密碼有誤 ....  \n\n");
		}
	}
	return 0;
}