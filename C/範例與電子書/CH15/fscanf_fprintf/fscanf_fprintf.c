#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <io.h>
#define LEN 100

int main(int argc, char *argv[]) {
  	FILE *fptr;
	char fpath[LEN];
	char pid[5], pname[30], str_price[5];
	int fno, fsize, price=0;
	printf("�п�ܶ���-->1.�}�s��  2.�}���ɡG");
	if(getche()=='1'){
		printf("\n�п�J�s�ɮ׸��|�G");
		gets(fpath);
		fptr=fopen(fpath, "w+");	/*�H�إ߷s�ɪ��Ҧ��}��*/
	}
	else{
		printf("\n�п�J���}�Ҫ��ɮ׸��|�G");
		gets(fpath);
		fptr=fopen(fpath, "a+");	/*�H���[��ƪ��Ҧ��}��*/
	}
	if(fptr==NULL){
		printf("\n�}�ɥ���, %s �i�ण�s�b\n", fpath);
		exit(0);
	}
	fno=fileno(fptr);
	fsize=filelength(fno);
	printf("\n%s �}�ɧ���, ���ɮפj�p %d Bytes\n", fpath, fsize);
	while(1){
		printf("\n�аݬO�_�n�~��s�W���(Y/N)�G");
		if(toupper(getche())=='Y'){	/* ��'y'��'Y'��ܭn�s�W��� */
			printf("\n�п�J�n�s�W�����->\n");
			printf("�s���G");
			gets(pid);			/*��J�s��*/
			printf("�~�W�G");
			gets(pname);		/*��J�~�W*/
			printf("����G");
			gets(str_price);		/*��J������w��str_price�r�� */
			price=atoi(str_price);/*�Nstr_price�r���ন��ƨë��w��price */
			/* �Npid, pname, price�g�J��fptr�ҫ����ɮ׽w�İϤ� */
			fprintf(fptr, "%s %s %d\n", pid, pname, price);
		}
		else{
			fclose(fptr);	/*�����ɮ�*/
			break;	
		}
	}
	fptr=fopen(fpath, "r");	
	fno=fileno(fptr);				/* ���o�ɮץN�X */
	fsize=filelength(fno);			/* ���o�ɮפj�p */
	printf("\n��Ƨ�s����...");
	printf("\n%s �ثe�ɮפj�p %d Bytes\n", fpath, fsize);
	printf("%s ����ɤ��e�p�U\n", fpath);
	/* �Y�ɮ׫���fptr�٨S�������ɮ׵����A�h�L�X����ɪ���� */
	while(fscanf(fptr, "%s %s %d", pid, pname, &price)!=EOF){
		printf("%5s %15s %5d\n", pid, pname, price);/* �NŪ������ƦL�X */
	}
	fclose(fptr);	/*�����ɮ�*/
	printf("\n");
    system("PAUSE");	
	return 0;
}
