#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
	printf("=== �{���������]�w��ư}�C��l�� ===\n\n");
	int matrix[4]={10, 20, 30, 40};
	for(int i=0; i<4; i++)
	{
		printf("%d\n", matrix[i]);
	}
	printf("=== �ѽL��J�]�w��ư}�C��l�� ===\n\n");
	for(int i=0; i<4; i++)
	{
		printf("<<�п�J�}�C��%s�Ӥ�����l��>>\n", i == 0 ? "�Ĥ@��" : i == 1 ? "�ĤG��" : i == 2 ? "�ĤT��" : "�ĥ|��") ;
		scanf("%d", &matrix[i]);
	}
	printf("=== �����]�w��ư}�C��l�� ===\n");
	for(int i=0; i<4; i++)
	{
		printf("%d\n", matrix[i]);
	}
	system("PAUSE");
}
