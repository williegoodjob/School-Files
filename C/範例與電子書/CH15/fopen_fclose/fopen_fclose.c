#include <stdio.h>
#include <stdlib.h>

#include <io.h>
#define LEN 100

int main(int argc, char *argv[]) {
  	FILE *fptr;
	char fpath[LEN];
	int fno, fsize;
	printf(" �п�J���}�Ҫ��ɮ׸��|�G");
	gets(fpath);			/* �ϥΪ̿�J���}�Ҫ��ɮרë��w��fpath */
	fptr=fopen(fpath, "r");	/* �}�Ҥv�g�s�b���ɮ� */
	if(fptr==NULL){		/* �P�_�O�_�}�ɥ��� */
		printf("\n �}�ɥ���, %s �i�ण�s�b\n", fpath);
		system("PAUSE");
		exit(0);			/* �����{�� */
	}
	fno=fileno(fptr);		/* ���o�ɮץN�X */
	fsize=filelength(fno);	/* ���o�ɮפj�p�A�HByte����� */
	printf("\n %s �}�ɧ���, �ɮפj�p %d Bytes\n", fpath, fsize);
	fclose(fptr);
    system("PAUSE");	
	return 0;
}
