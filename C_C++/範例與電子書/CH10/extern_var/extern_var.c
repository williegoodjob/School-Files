#include <stdio.h>
#include <stdlib.h>
#include "password.h"

int main(int argc, char *argv[]) 
{
	int chk;
	int keyin;
	while(1)
	{
		printf("�п�J�K�X�G");
		scanf("%d", &keyin);
		chk = pw(keyin);
		if(chk == 1){
			printf("�K�X���T!\n");
			printf("�����{��\n");
			break;
		}
		else{
			if(cnt > 0){
				printf("�K�X�����T!\n");
				printf("�٥i��J%d��\n", cnt); /* �ϥ�password��cnt�����ܼ� */
				continue;
			}
			else{
				printf("�K�X�����T!\n");
				printf("�����{��\n");
				break;
			}
		}
	}
	system("PAUSE");	
	return 0;
}
