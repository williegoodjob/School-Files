#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <io.h>
#define LEN 100

int main(int argc, char *argv[]) {
  	FILE *fptr_source, *fptr_target;
	char paths[LEN], patht[LEN];
	char keyin[LEN], temp[LEN];
	int fno, fsize;
	printf("�п�J���ƻs���ӷ��ɮסG");
	gets(paths);
	fptr_source=fopen(paths, "r");
	printf("�п�J���ƻs���ئa�ɮסG");
	gets(patht);
	fptr_target=fopen(patht, "w");
	if(fptr_source==NULL || fptr_target==NULL){
		printf("\n�}�ɥ���, �L�k�ƻs\n");
		exit(0);
	}
	while(fgets(temp, LEN, fptr_source)!=NULL)	{
		fputs(temp, fptr_target);
	}
	fclose(fptr_source);
	fclose(fptr_target);
	printf("\n%s �ɮ׽ƻs����...\n", patht, fsize);
    system("PAUSE");	
	return 0;
}
