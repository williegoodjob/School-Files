#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	printf("設定字元陣列 name 中的字串\n");
	char name[9];
	scanf("%s", name);
	printf("\n");
	printf("==== 使用 printf 輸出 ====\n");
	printf("%s\n\n", name);
	printf("=== 使用 puts() 函式輸出 ===\n");
	puts(name);
	printf("\n");
	printf("=== 使用 strlen() 函式輸出 ===\n");
	for (int i = 0; i < strlen(name) - 1; i++)
	{
		printf("name[%d] = %c\n", i, name[i]);
	}

	system("PAUSE");
}
