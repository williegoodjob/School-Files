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
	printf("======= �q�Ʀr�C�� =======�G\n\n");
	do
	{
		printf("�q�Ĥ@�ӼƦr�d�� %d < ? < %d �G", matrix[0][2], matrix[0][3]);
		scanf("%d", &matrix[0][0]);
		printf("�q�ĤG�ӼƦr�d�� %d < ? < %d �G", matrix[1][2], matrix[1][3]);
		scanf("%d", &matrix[1][0]);
		count++;
		if (matrix[0][0] < matrix[0][3] && matrix[0][0] > matrix[0][2])
		{
			if (matrix[0][0] == matrix[0][1] && matrix[1][0] == matrix[1][1])
			{
				printf("���G!�q��F,�Ĥ@�ӵ��׬O %d\n���G!�q��F,�ĤG�ӵ��׬O %d\n\n", matrix[0][0], matrix[1][0]);
				break;
			}
			else
			{
				if (matrix[0][0] > matrix[0][1] && matrix[1][0] > matrix[1][1])
				{
					printf("��ӼƦr���n�A�p�@�I!!");
					matrix[0][3] = matrix[0][0];
					matrix[1][3] = matrix[1][0];
				}
				else if (matrix[0][0] > matrix[0][1] && matrix[1][0] < matrix[1][1])
				{
					printf("�Ĥ@�Ӽƭn�A�p�@�I,�ĤG�Ӽƭn�A�j�@�I!!");
					matrix[0][3] = matrix[0][0];
					matrix[1][2] = matrix[1][0];
				}
				else if (matrix[0][0] < matrix[0][1] && matrix[1][0] > matrix[1][1])
				{
					printf("�Ĥ@�Ӽƭn�A�j�@�I,�ĤG�Ӽƭn�A�p�@�I!!");
					matrix[0][2] = matrix[0][0];
					matrix[1][3] = matrix[1][0];
				}
				else if (matrix[0][0] < matrix[0][1] && matrix[1][0] < matrix[1][1])
				{
					printf("��ӼƦr���n�A�j�@�I!!");
					matrix[0][2] = matrix[0][0];
					matrix[1][2] = matrix[1][0];
				}
				else if (matrix[0][0] == matrix[0][1] && matrix[1][0] > matrix[1][1])
				{
					printf("�q��F,�аO��Ĥ@�ӵ��׬O %d\n", matrix[0][0]);
					printf("���O�ĤG�ӼƦr�n�A�p�@�I!!");
					matrix[1][3] = matrix[1][0];
				}
				else if (matrix[0][0] == matrix[0][1] && matrix[1][0] < matrix[1][1])
				{
					printf("�q��F,�аO��Ĥ@�ӵ��׬O %d\n", matrix[0][0]);
					printf("���O�ĤG�ӼƦr�n�A�j�@�I!!");
					matrix[1][2] = matrix[1][0];
				}
				else if (matrix[0][0] > matrix[0][1] && matrix[1][0] == matrix[1][1])
				{
					printf("�q��F,�аO��ĤG�ӵ��׬O %d\n", matrix[1][0]);
					printf("�Ĥ@�ӼƦr�n�A�p�@�I!!");
					matrix[0][3] = matrix[0][0];
				}
				else if (matrix[0][0] < matrix[0][1] && matrix[1][0] == matrix[1][1])
				{
					printf("�q��F,�аO��ĤG�ӵ��׬O %d\n", matrix[1][0]);
					printf("�Ĥ@�ӼƦr�n�A�j�@�I!!");
					matrix[0][2] = matrix[0][0];
				}
				printf(" �z�q�F %d ��!\n\n", count);
			}
		}
		else
		{
			printf("\n��J���~!\n\n");
		}
	} while (1);
	printf("\n�`�@�q�F %d ��!\n\n", count);
	system("PAUSE");
	return 0;
}
