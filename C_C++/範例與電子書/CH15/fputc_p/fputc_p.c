#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <io.h>
#define LEN 100

int main(int argc, char *argv[]) {
  	FILE *fptr;
	char fpath[LEN], keyin[LEN];
	int fno, fsize, i;
	char ch;
	printf("�g�ɧ@�~...\n");
	printf("�п�J�n�}���ɮת�������|���ɦW�G");
	gets(fpath);
	fptr=fopen(fpath, "a+");
	if(fptr==NULL){
		printf("\n�}�ɥ���, %s �i�ण�s�b\n", fpath);
		exit(0);
	}
	while(1){
		printf("\n�аݬO�_�n�~��s�W���(Y/N)�G");
		if(toupper(getche())=='Y')		{
			printf("\n�п�J�n�s�W����ơG");
			gets(keyin);
			for(i=0; i<strlen(keyin) ; i++)			{
				fputc(keyin[i], fptr);
			}
			fputc('\n', fptr);
		}
		else		{
			fclose(fptr);
			break;	
		}
	}
	printf("\n\n");
    system("PAUSE");	
	return 0;
}
