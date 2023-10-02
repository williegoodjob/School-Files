#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	char area[][13] = {"�s�H����", "����", "�s�_���~���"};
	char date[][4] = {"9/1", "9/2", "9/3", "9/4", "9/5"};
	int mrt[5][3] = {{1948, 3126, 3684}, {1993, 3088, 3649},
			{2008, 3150, 3749}, {2073, 3407, 4011},
			{1811, 3052, 2903}};
	int area_sum[3] = {0}; /* area_sum�}�C�s��3�ӱ��B�����`�B�q */
	int i, j, total = 0; /* total�N������`�B�q */
	
	printf("\n���\t%s\t%s\t\t%s\n", area[0], area[1], area[2]);
	printf("===================================================\n");
	
	for(i = 0; i < 5; i ++)
	{
		printf("%s\t", date[i]);
		for(j = 0; j < 3; j ++){
			printf("%d\t\t", mrt[i][j]); /* �L�X��i��b��j�����f���H�� */
			area_sum[j] += mrt[i][j]; /* �֭p���j�����f���H�� */
		}
		printf("\n");
	}
	for(i = 0; i < 3; i ++)
	{  /* �έp�o�T�����餺���f���`�H�� */
		total += area_sum[i];
	}
	for(i = 0; i < 3; i ++){  /* ��ܲέp��Ƥέp��U���f���H�Ƥ�v*/ 
		printf("%s ���ȶq%d�H���A", area[i], area_sum[i]);
		printf("��%5.2f%%\n", (float)area_sum[i] / total * 100);
	}
	system("PAUSE");
	return 0;
}
