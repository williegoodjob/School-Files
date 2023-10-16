#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	char ch;
	printf("  用戶門號管理維護系統 \n");
	printf(" o o o o o o o o o o o o o\n");
	printf(" o    A：新增用戶門號    o\n");
	printf(" o    B：刪除用戶門號    o\n");
	printf(" o    C：轉入用戶門號    o\n");
	printf(" o    D：轉出用戶門號    o\n");
    printf(" o    E：無效用戶門號    o\n");
	printf(" o o o o o o o o o o o o o\n");
	printf("  請選項 [A, B, C, D, E]： ");
	ch = getchar();
	ch = toupper(ch);
	switch(ch) {
		case 'A':
			printf("\n 新增用戶門號...\n");
           	break ;
		case 'B':
			printf("\n  刪除用戶門號...\n");
			break ;
		case 'C':
			printf("\n  轉入用戶門號...\n");
			break ;
		case 'D':
			printf("\n  轉出用戶門號 ! ^_^ ... Bye Bye!\n");
			break ;
        case 'E':
            printf("\n  無效用戶門號...\n");
		default :
			printf("\n  沒有這個選項...\n");
	}
	printf("\n");	
	system("PAUSE");	
	return 0;
}
