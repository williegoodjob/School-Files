#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	for (i=1;i<=20;i+=2)
	{
	  printf(" %d",i);   /* ��ܼƦr */
	  if (i < 20)
	    printf(",");    /* �Ʀr�᭱�[�r��,�̫�@�ӼƦr�ٲ� */ 
	}
	printf("\n\n");
	
	system("PAUSE");	
	return 0;
}
