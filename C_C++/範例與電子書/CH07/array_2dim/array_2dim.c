#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int a[3][4]={ {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11} };
	int sum = 0 ;
	int i, j;
	// �Ĥ@���}�C���׬�3�Ai=3
	for (i=0 ; i<3 ; i++)
	{
		// �ĤG���}�C���׬�4�Aj=4
		for (j=0 ; j<4 ; j++)
		{
			printf(" a[%d][%d]=%2d , ", i, j, a[i][j]);
			sum += a[i][j];
		}
		printf("\n");   /*  �N��в���U�@��  */
	}
	printf("\n===  �}�C a ���`�M���G%d \n\n", sum);
	system("PAUSE");	
	return 0;
}
