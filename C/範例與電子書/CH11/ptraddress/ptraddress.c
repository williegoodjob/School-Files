#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i=10,k;
	int *ptr1;
	printf(" Var-Name   Address    Content  \n");
	printf(" ========= ========= ========== \n");
	printf("     i     %d     %d    \n",&i,i);
	printf("     k     %d      ?    \n",&k);
	ptr1=&i;    /* �N�ܼ�i���O�Ц�}�s�Jptr1�� */
	printf("    ptr1   %d     %d    \n",&ptr1,ptr1);
	k=*ptr1; /* �N�s��bptr1��(�Y�ܼ�i����})���x�s�����10���w���ܼ�k */
	printf("     k     %d     %d    \n",&k,*ptr1);
	system("PAUSE");	
	return 0;
}
