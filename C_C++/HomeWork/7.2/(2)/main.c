#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int a[10]={0};		
	int i=0, max;		
	printf("-----�M��̤j��-----\n");
	printf("�гs���J�̭Ӽƭ�-\n");
	for(i=0;i<10;i++)		
	{
	   printf("�п�J�� %d �Ӹ�ơG", i+1 );
	   scanf("%d", &a[i]);  
	}
	max=a[0];			
	for(i=0;i<10;i++)		
	{
	  if (max<a[i])	
	  {
		  max=a[i];
	  }
	}
	printf("�̤j�ȡG%d\n\n",max); 
	
	system("PAUSE");	
	return 0;
}
