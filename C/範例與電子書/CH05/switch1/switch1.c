#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>		/* �t�Jctype.h���Y�� */
#include <conio.h>

int main(int argc, char *argv[]) {
	char ch;
	printf("  �Ȥ�޲z���@�t�� \n");
	printf(" =====================\n");
	printf("     A�G�s�W�@�~\n");
	printf("     D�G�R���@�~\n");
	printf("     U�G�ק�@�~\n");
	printf("     Q�G���}�@�~\n");
	printf(" =====================\n");
	printf("  �пﶵ [A,D,U,Q]�G ");
	ch = getchar();
	ch = toupper(ch);	/* �Nch�����ন�j�g�^��r�A�M��A���w��ch */
	switch(ch) {
		case 'A':
			printf("\n �i�J�s�W�@�~...\n");
           	break ;
		case 'D':
			printf("\n  �i�J�R���@�~...\n");
			break ;
		case 'U':
			printf("\n  �i�J�ק�@�~...\n");
			break ;
		case 'Q':
			printf("\n  ���}�t�� ! ^_^ ... Bye Bye!\n");
			break ;
		default :
			printf("\n  �S���o�ӿﶵ $#%^&*?\n");
	}
	printf("\n");	
	system("PAUSE");	
	return 0;
}
