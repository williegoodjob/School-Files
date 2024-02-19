#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
   	char usr_id[7];    
   	char pwd[5];       
   	printf("==== 帳號 & 密碼 檢查 ====\n\n");
   	printf("請輸入帳號 (限六個字元)：");
	scanf("%s", usr_id);
	printf("請輸入密碼 (限四個字元)：");
	scanf("%s", pwd);		
	printf("\n");
	if (strcmp(usr_id, "mebest")==0 && strcmp(pwd,"1688")==0) {
		printf("帳號 和 密碼正確 ...  ^_^ !!\n");
		printf("歡迎進入本系統...\n\n");
	}
	else {
		printf("帳號 或 密碼輸入錯誤 ...  @_@ !!\n");
		printf("無法進入本系統...\n\n");
	}
	
	system("PAUSE");	
	return 0;
}

