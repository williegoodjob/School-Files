#include <stdio.h>
#include <stdlib.h>

#include <conio.h>
#include <ctype.h>
#include <string.h>

void checkid(char *);  /*checkid�禡�쫬�ŧi*/

int main(int argc, char *argv[]) {
	/*�ŧiid�r���}�C�A�ΨӦs�񨭤��Ҹ��X*/
	char id[11];  
	char goon;
	printf(" == �����Ҹ��X���ҵ{�� ==\n");
	do{
		printf("\n �п�J�����Ҹ��X�G");
		/* ��J�����Ҹ��X�æs���id�r���}�C(�r��) */
		gets(id);
		/* �I�scheckid()�禡�ˬdid�r��O�_���X�k���X */
		checkid(id);
		printf("\n �O�_�~��H(Y/N) :");
		goon = toupper(getche());  /*��J�r���ন�j�g�^��r�A���w��ch�ܼ�*/
		printf("\n\n");
	}while(goon == 'Y');  /*�P�_goon�O�_��'Y'�A�Y�O�~�����j�餺���ԭz�A�_�h���}�j��*/
	
	system("PAUSE");
	return 0;
}

void checkid(char *idptr){  /* �w�qcheckid�禡 */
	int first_no, n;
	int head[] = {  /* �����Ҹ��X�Ĥ@�Ӧr���ഫ��  */
		10,11,12,13,14,15,16,17,
		34,18,19,20,21,22,35,23,24,
		25,26,27,28,29,32,30,31,33
	};
	/*���oidptr�ҫ��r��ζǤJ�������Ҹ��X������ */
	if(strlen(idptr) != 10){
		printf("\n �����Ҹ��X���X�k�I@_@\n");
		return;
	}
	/* ���o�Ĥ@�Ӧr�������ƭ�*/
	first_no=head[toupper(idptr[0])-'A']; 
	n = (first_no / 10) +  /* �N�J�����p���`�M */
		(first_no % 10) * 9 +
		(idptr[1] - '0') * 8 +
		(idptr[2] - '0') * 7 +
		(idptr[3] - '0') * 6 +
		(idptr[4] - '0') * 5 +
		(idptr[5] - '0') * 4 +
		(idptr[6] - '0') * 3 +
		(idptr[7] - '0') * 2 +
		(idptr[8] - '0') +
		(idptr[9] - '0');
	if((n % 10) == 0)  /* ���H10���l�ơA�P�_�O�_��0  */
	{
		printf("\n �����Ҹ��X���T�I^_^\n");
	}
	else{
		printf("\n �����Ҹ��X�����T�I@_@\n");
	}
}

