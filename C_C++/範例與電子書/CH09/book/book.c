#include <stdio.h>
#include <stdlib.h>
#define ID 1				/* �]�w����ID��1 ���欰�u��*/
#include "selectbook.h"		/* �t�Jselectbook.h���Y�� */

int main(int argc, char *argv[])
{
  	printf(" ====�g��t�C���y==== \n\n");
	printf("   �ѦW�G%s \n", BNAME);
	printf("   ���šG%s \n", LEVEL);
	printf("   �w���G%d \n", PRICE);
	printf("   �����G%s \n", SERIES);
    system("PAUSE");	
    return 0;
}
