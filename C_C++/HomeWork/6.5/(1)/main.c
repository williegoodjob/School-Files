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
		printf("�� %d ����J�K�X�G", count);
		gets(pw);
		if (atoi(pw) == randomNumber)
		{
			printf("�K�X���T!! Pass ....\n\n");
			system("PAUSE");
			exit(0);
		}
		else if (count == 10)
		{
			printf("\n �s��̦� �������� .... \n");
			exit(0);
		}
		else
		{
			printf(" ^_^ Sorry! �K�X���~ ....  \n\n");
		}
	}
	return 0;
}