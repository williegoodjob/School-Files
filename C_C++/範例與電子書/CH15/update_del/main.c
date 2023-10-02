#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <io.h>
#define LEN 100

typedef struct{			/*�w�q��Ƶ��c*/
	char id[6];			/*�s��*/
	char title[30];		/*�q�W*/
	int year;			/*�~��*/
	int rank;			/*�ƦW*/
	char flag[3];		/*�R���X��*/
}song;

void showfiledata(FILE *, char[]);

int main(int argc, char *argv[]) {
	FILE *fptr;
	char fpath[LEN];
	char search_id[6], t_year[10], t_rank[10];
	song mysong;
	int recno = 0;		/*��ưO���s��*/
	char ch;
	printf("�п�J���}�Ҫ��ɮ׸��|�G");
	gets(fpath);
	fptr = fopen(fpath, "r+");
	if (fptr == NULL){
		printf("\n�}�ɥ���, %s �i�ण�s�b\n", fpath);
		exit(0);
	}
	showfiledata(fptr, fpath);
	printf("\n�п�ܶ���->1.�ק�  2.�R��  3.���}�G");
	ch = getche();
	if (ch == '3' && ch != '1' && ch != '2'){		/*��ܥ\��M��*/
		printf("\n\n�����{��...\n");
		fclose(fptr);
		exit(0);
	}
	printf("\n�п�J�n���ʰO�����s���G");
	gets(search_id);	/*��J�n�d�ߪ��s��*/
	rewind(fptr);		/*�ɮ׫��в����ɮ׳̶}�Y*/
	while (1){
		printf("recno1:%d\n",recno);
		/* �ɮ׫��в���̫ᵲ���|�Ǧ^NULL�A��ܧ䤣���� */
		if (fread(&mysong, sizeof(mysong), 1, fptr) == NULL){
			printf("\n�S���s�� %s �o���O��...\n", search_id);
			fclose(fptr);
			exit(0);
		}
		else{	/*�����*/
			/*�P�_��ƬO�_�Q�R��*/
			printf("recno2:%d\n",recno);
			if (strcmp(mysong.id, search_id) == 0 && 
						strcmp(mysong.flag, "*") != 0){
				if (ch == '1'){					/*��J�n�ק諸���*/
					printf("�ק�@�~...\n");
					printf("�q�W�אּ->");
					gets(mysong.title);
					printf("�~�קאּ->");
					gets(t_year);
					mysong.year = atoi(t_year);
					printf("�ƦW�אּ->");
					gets(t_rank);
					mysong.rank = atoi(t_rank);
				}
				else if (ch == '2')	{					
					printf("�R���@�~...\n");
					strcpy(mysong.flag, "*");/*�Nmysong.flag�]��"*"*/
				}
				printf("�T�w�n���ʶ�(Y/N)�H");	/*�߰ݬO�_���沧�ʸ�ƪ��@�~*/
				if (toupper(getche()) == 'Y') {
					/*�ɮ׫��в����recno����Ʀ�}*/
					fseek(fptr, sizeof(mysong)*recno, 0);
					/*�Nmysong ���c��Ƽg�J�ɮ׫��Хثe�ҫ�����Ʀ�}*/
					fwrite(&mysong, sizeof(mysong), 1, fptr);
					break;
				}
				else {
					printf("\n\n������...\n");
					fclose(fptr);
					exit(0);
				}
			}
			else {
				recno++;	/*recno�O���s���[1�A��ܲ���U�@�����*/
			}
		}
	}
	printf("\n��Ʋ��ʧ���...\n");
	showfiledata(fptr, fpath);
	fclose(fptr);	
	printf("\n");
	system("PAUSE");
	return 0;
}

void showfiledata(FILE * vfptr, char vfpath[]){
	int rectot = 0;
	song vsong;
	rewind(vfptr);					/*�ɮ׫��в����ɮ׳̶}�Y*/
	printf("\n%s ����ɤ��e�p�U\n", vfpath);
	printf("%6s %30s %5s %5s\n","�s��", "�q�W", "�~��", "�ƦW");
	while (fread(&vsong, sizeof(vsong), 1, vfptr) != NULL){
		if (strcmp(vsong.flag, "*") != 0){
			printf("%6s %30s %5d %5d\n",
				vsong.id, vsong.title, vsong.year, vsong.rank);
			rectot++;
		}
	}
	printf("�O���`���ơG%d\n", rectot);
	//fclose(vfptr);
}

