#include <stdio.h>
#include <stdlib.h>

#include <io.h>
#define LEN 100

int main(int argc, char *argv[]) {
  	FILE *fptr;
	char fpath[LEN] ;
	int fno, fsize;
	char ch;
	printf("�п�J�n�}���ɮת�������|���ɦW�G");
	gets(fpath);
	fptr=fopen(fpath, "r");
	if(fptr==NULL){
		printf("\n�}�ɥ���, %s �i�ण�s�b\n", fpath);
	    system("PAUSE");
		exit(0);
	}
	fno=fileno(fptr);
	fsize=filelength(fno);
	printf("\n%s �}�ɧ���, �ɮפj�p %d Bytes\n", fpath, fsize);
	printf("%s ����ɤ��e�p�U\n", fpath);
	while((ch=fgetc(fptr))!=EOF){
		printf("%c", ch);
	}
	fclose(fptr);
	printf("\n\n");
    system("PAUSE");	
	return 0;
}
