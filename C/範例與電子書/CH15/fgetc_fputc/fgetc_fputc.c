#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <io.h>
#define LEN 100

int main(int argc, char *argv[]) {
  	FILE *fptr;				/* �ŧifptr�ɮ׵��c���� */
	char fpath[LEN], keyin[LEN];
	int fno, fsize, i;
	char ch;
	printf("�п�ܶ���->1.�}�s��  2.�}���ɡG");
	if(getche()=='1'){
		printf("\n�п�J�s�ɮ׸��|�G");
		gets(fpath);
		fptr=fopen(fpath, "w+");	
	}
	else{
		printf("\n�п�J���}�Ҫ��ɮ׸��|�G");
		gets(fpath);
		fptr=fopen(fpath, "a+");	
	}
	if(fptr==NULL){
		printf("\n�}�ɥ���, %s �i�ण�s�b\n", fpath);
		exit(0);
	}
	fno=fileno(fptr);		/* ���o�ɮץN�X */
	fsize=filelength(fno);	/* ���o�ɮפj�p */
	printf("\n%s �}�ɧ���, ���ɮפj�p %d Bytes\n", fpath, fsize);
	while(1){
		printf("\n�аݬO�_�n�~��s�W���(Y/N)�G");
		if(toupper(getche())=='Y'){
			printf("\n�п�J�n�s�W����ơG");
			gets(keyin);
			for(i=0; i<strlen(keyin) ; i++){	
				fputc(keyin[i], fptr);	
			}
			fputc('\n', fptr);
		}
		else{
			fclose(fptr);
			break;	
		}
	}
	fptr=fopen(fpath, "r");	
	fno=fileno(fptr);
	fsize=filelength(fno);
	printf("\n\n��Ƨ�s����...");
	printf("\n%s �ثe�ɮפj�p %d Bytes\n", fpath, fsize);
	printf("%s ����ɤ��e�p�U\n", fpath);
	while((ch=fgetc(fptr))!=EOF){
		printf("%c", ch);
	}
	fclose(fptr);
	printf("\n");
    system("PAUSE");	
	return 0;
}
