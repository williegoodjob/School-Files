#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
   	char usr_id[7];    
   	char pwd[5];       
   	printf("==== �b�� & �K�X �ˬd ====\n\n");
   	printf("�п�J�b�� (�����Ӧr��)�G");
	scanf("%s", usr_id);
	printf("�п�J�K�X (���|�Ӧr��)�G");
	scanf("%s", pwd);		
	printf("\n");
	if (strcmp(usr_id, "mebest")==0 && strcmp(pwd,"1688")==0) {
		printf("�b�� �M �K�X���T ...  ^_^ !!\n");
		printf("�w��i�J���t��...\n\n");
	}
	else {
		printf("�b�� �� �K�X��J���~ ...  @_@ !!\n");
		printf("�L�k�i�J���t��...\n\n");
	}
	
	system("PAUSE");	
	return 0;
}

