#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	char ch;
	printf("  �Τ�����޲z���@�t�� \n");
	printf(" o o o o o o o o o o o o o\n");
	printf(" o    A�G�s�W�Τ����    o\n");
	printf(" o    B�G�R���Τ����    o\n");
	printf(" o    C�G��J�Τ����    o\n");
	printf(" o    D�G��X�Τ����    o\n");
    printf(" o    E�G�L�ĥΤ����    o\n");
	printf(" o o o o o o o o o o o o o\n");
	printf("  �пﶵ [A, B, C, D, E]�G ");
	ch = getchar();
	ch = toupper(ch);
	switch(ch) {
		case 'A':
			printf("\n �s�W�Τ����...\n");
           	break ;
		case 'B':
			printf("\n  �R���Τ����...\n");
			break ;
		case 'C':
			printf("\n  ��J�Τ����...\n");
			break ;
		case 'D':
			printf("\n  ��X�Τ���� ! ^_^ ... Bye Bye!\n");
			break ;
        case 'E':
            printf("\n  �L�ĥΤ����...\n");
		default :
			printf("\n  �S���o�ӿﶵ...\n");
	}
	printf("\n");	
	system("PAUSE");	
	return 0;
}
