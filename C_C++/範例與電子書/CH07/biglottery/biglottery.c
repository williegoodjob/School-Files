#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	int lot[49];		/* �}�C������lot[0]~lot[48]  */
	int choose[7];	    /* �}�C������choose[0]~choose[6] */
	int min=1, max=49, num=7;
	int max_dim, choice;
	int i;
	max_dim=max-min+1;
	for(i=0;i<max_dim;i++)
	{
		lot[i]=min+i;
	}
	srand((unsigned)time(NULL));/*�üƺؤl��*/
	for(i=0;i<num;i++)
	{
       choice=rand()%max_dim;   /* ���Ͷü� */
       choose[i]=lot[choice];   /* �H�����@�Ӹ��X */
       /* �}�C�̫�@�Ӹ��X����ثe������X�}�C��������m */
       lot[choice]=lot[max_dim-1];    
       max_dim--;
	}
	printf("\n �����j�ֳz �q���︹ ���X�p�U�G\n\n");
	for(i=0; i<num; i++)					/* �L�X�j�ֳz��6�Ӹ��X */
	{
		printf(" %d", choose[i]);
	}
	printf("\n\n �S�O���G %d \n", choose[6]);	/* �L�X�j�ֳz���S�O�� */   
	printf("\n\n");
	system("PAUSE");
	return 0;
}
