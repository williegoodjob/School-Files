#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
	printf("=== 程式中直接設定整數陣列初始值 ===\n\n");
	int matrix[4]={10, 20, 30, 40};
	for(int i=0; i<4; i++)
	{
		printf("%d\n", matrix[i]);
	}
	printf("=== 由盤輸入設定整數陣列初始值 ===\n\n");
	for(int i=0; i<4; i++)
	{
		printf("<<請輸入陣列第%s個元素初始值>>\n", i == 0 ? "第一個" : i == 1 ? "第二個" : i == 2 ? "第三個" : "第四個") ;
		scanf("%d", &matrix[i]);
	}
	printf("=== 完成設定整數陣列初始值 ===\n");
	for(int i=0; i<4; i++)
	{
		printf("%d\n", matrix[i]);
	}
	system("PAUSE");
}
