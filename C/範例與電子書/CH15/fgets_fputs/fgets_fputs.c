#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <io.h>
#define LEN 100

int main(int argc, char *argv[]) {
  	FILE *fptr;
	char fpath[LEN], keyin[LEN], t[LEN];
	int fno, fsize;
	printf("�п�ܶ���->1.�}�s��  2.�}���ɡG");
	if(getche()=='1'){
		printf("\n�п�J�s�ɮ׸��|�G");
		gets(fpath);
		fptr=fopen(fpath, "w+");	/*Ū�g�s��*/
	}
	else{
		printf("\n�п�J���}�Ҫ��ɮ׸��|�G");
		gets(fpath);
		fptr=fopen(fpath, "a+");	/*Ū�g���[�ɮ׼Ҧ�*/
	}
	if(fptr==NULL){
		printf("\n�}�ɥ���, %s �i�ण�s�b\n", fpath);
		exit(0);
	}
	fno=fileno(fptr);			/* ���o�ɮץN�X */
	fsize=filelength(fno);		/* ���o�ɮפj�p */
	printf("\n%s �}�ɧ���, ���ɮפj�p %d Bytes\n", fpath, fsize);
	while(1){
		printf("\n�аݬO�_�n�~��s�W���(Y/N)�G");
		if(toupper(getche())=='Y')	{
			printf("\n�п�J�n�s�W����ơG");
			gets(keyin);		/*�ϥΪ̿�J�r����w��keyin*/
			fputs(keyin, fptr);	/*keyin�r��g�Jfptr�ҫ����ɮ�*/
			fputs("\n", fptr);	/*�N����r���g�Jfptr�ҫ����ɮ�*/
		}
		else{
			fclose(fptr);
			break;	
		}
	}
	fptr=fopen(fpath, "r");	
	fno=fileno(fptr);			/*���o�ɮץN�X*/
	fsize=filelength(fno);		/*���o�ɮפj�p*/
	printf("\n��Ƨ�s����...");
	printf("\n%s �ثe�ɮפj�p %d Bytes\n", fpath, fsize);
	printf("%s ����ɤ��e�p�U\n", fpath);
	while(fgets(t, LEN, fptr)!=NULL){	/* �H�r�ꪺ�覡Ū������ɤ������ */
		printf("%s", t);
	}
	fclose(fptr);
	printf("\n");
    system("PAUSE");	
	return 0;
}
