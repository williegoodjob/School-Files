#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <io.h>
#define LEN 100

typedef struct 			/*�w�q��Ƶ��c*/
{
	char id[6];			/*�s��*/
	char title[30];		/*�q�W*/
	int year;			/*�~��*/
	int rank;			/*�ƦW*/
	char flag[3];		/*�R���X��*/
}song;

int main(int argc, char *argv[]) {
  	FILE *fptr;
	char fpath[LEN], t_year[10], t_rank[10];
	int fno, fsize, rectot;
	song mysong;
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
	while(1){
		printf("\n�аݬO�_�n�~��s�W���(Y/N)�G");
		if(toupper(getche())=='Y'){
			printf("\n�п�J�n�s�W�����->\n");
			printf("�s���G");
			gets(mysong.id);		
			printf("�q�W�G");
			gets(mysong.title );
			printf("�~�סG");
			gets(t_year);
			mysong.year = atoi(t_year);
			printf("�ƦW�G");
			gets(t_rank);
			mysong.rank = atoi(t_rank);
			fwrite(&mysong, sizeof(mysong), 1, fptr);/*�N���c�g�J�ɮ�*/
		}
		else{
			fclose(fptr);
			break;	
		}
	}
	fptr=fopen(fpath, "r");	
	fno=fileno(fptr);
	fsize=filelength(fno);
	rectot=filelength(fileno(fptr))/sizeof(song);	/*���o�O���`����*/
	printf("\n��Ƨ�s����...");
	printf("\n%s �ثe�ɮפj�p %d Bytes\n", fpath, fsize);
	printf("%s ����ɤ��e�p�U\n", fpath);
	printf("\n�O���`���ơG%d\n", rectot);
	printf("%6s %30s %5s %5s\n","�s��", "�q�W", "�~��", "�ƦW");
	/* �P�_�O�_�٦����*/
	while(fread(&mysong, sizeof(mysong), 1, fptr)!=NULL){
		/*���X�@���O���A�ɮ׫��ЦA���Ჾ�ʤ@���O��������*/
		printf("%6s %30s %5d %5d\n", 
			mysong.id, mysong.title, mysong.year, mysong.rank);
	}
	fclose(fptr);
	printf("\n");
    system("PAUSE");	
	return 0;
}
