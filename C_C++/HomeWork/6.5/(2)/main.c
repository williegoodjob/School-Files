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
	printf("======= �q�Ʀr�C�� =======�G\n\n");
	do
	{
		for (int i = 0; i < 2; i++)
		{
			printf("�q��%s�ӼƦr�d�� %d < ? < %d �G", i == 0 ? "�@" : "�G", min[0], max[0]);
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
				printf("���G! �q��F, �Ĥ@�ӵ��׬O %d\n", status[0]);
				printf("���G! �q��F, �ĤG�ӵ��׬O %d\n", status[1]);
				break;
			}
			else if (status[0] == 1 && status[1] == 1)
			{
				max[0] = keyin[0];
				max[1] = keyin[1];
				printf("��ӼƦr���n�A�p�@�I!!");
			}
			else if (status[0] == 2 && status[1] == 2)
			{
				min[0] = keyin[0];
				min[1] = keyin[1];
				printf("��ӼƦr���n�A�j�@�I!!");
			}
		}
		else
		{
			if (status[0] == 0)
			{
				printf("�q��F,�аO��Ĥ@�ӵ��׬O %d\n", status[0]);
			}
			else if (status[0] == 1)
			{
				max[0] = keyin[0];
				printf("�Ĥ@�ӼƦr�n�A�p�@�I!!");
			}
			else if (status[0] == 2)
			{
				min[0] = keyin[0];
				printf("�Ĥ@�ӼƦr�n�A�j�@�I!!");
			}

			if (status[1] == 0)
			{
				printf("�q��F,�аO��ĤG�ӵ��׬O %d\n", status[1]);
			}
			else if (status[1] == 1)
			{
				max[1] = keyin[1];
				printf(",�ĤG�ӼƦr�n�A�p�@�I!!");
			}
			else if (status[1] == 2)
			{
				min[1] = keyin[1];
				printf(",�ĤG�ӼƦr�n�A�j�@�I!!");
			}
		}

		// if (keyin[2] >= 1 && keyin[2] < 1000)
		// {
		// 	if (keyin[2] == guess)
		// 	{
		// 		printf("���G! �q��F, ���׬O %d\n", guess);
		// 		break;
		// 	}
		// 	else if (keyin[2] > guess)
		// 	{
		// 		max[0] = keyin[2]; /*�N�ثe��J���Ʀrkeyin[2]���w��max*/
		// 		printf("�A�p�@�I!!");
		// 	}
		// 	else if (keyin[2] < guess)
		// 	{
		// 		min[0] = keyin[2]; /*�N�ثe��J���Ʀrkeyin���w��min*/
		// 		printf("�A�j�@�I!!");
		// 	}
		// 	printf(" �z�q�F %d ��\n\n", count);
		// }
		// else
		// {
		// 	printf("�п�J���ܽd�򤺪��Ʀr!\n");
		// }
	} while (1); /*�L�a�j��*/
	printf("\n�`�@�q�F %d ��!\n\n", count);
	system("PAUSE");
	return 0;
}
