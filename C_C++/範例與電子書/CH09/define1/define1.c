#include <stdio.h>
#include <stdlib.h>
#define IBM_NB  32000
#define ACER_NB 30000
#define MSG1 " \n IBM NoteBook's Price : %d "
#define MSG2 " \n IBM_NB���w�q "
#define MSG3 " \n ACER NoteBook's Price : %d "

int main(int argc, char *argv[])
{
    #ifdef IBM_NB  	/* �O�_���w�qIBM_NB�����A�������� */
		printf(MSG1,IBM_NB);   /* �sĶ���� */
    #else
		printf(MSG2,ACER_NB);  /* ���L���� */
    #endif
#undef IBM_NB 		/* ������2��IBM_NB�����w�q */

    #ifndef IBM_NB 	/* �O�_���w�qIBM_NB�����A�������� */
		printf(MSG2);	/* �sĶ���� */
    #else
		printf(MSG3,ACER_NB);  /* ���L���� */
    #endif
	printf("\n\n");
    system("PAUSE");	
    return 0;
}
