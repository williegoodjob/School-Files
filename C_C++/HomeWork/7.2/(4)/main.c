#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int a[10]={0};		
	int i=0, mid;		
	printf("-----�M�䤤����-----\n");
	printf("�гs���J�̭Ӽƭ�-\n");
	for(i=0;i<10;i++)		
	{
	   printf("�п�J�� %d �Ӹ�ơG", i+1 );
	   scanf("%d", &a[i]);  
	}
	mid=a[4];
	printf("�����ȡG%d\n\n",mid); 
	
	system("PAUSE");	
	return 0;
}
