#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 		int data[5];	
		int n, i, j, t;
		printf("== ��w�Ʈ�k(�Ѥj��p�Ƨ�)==\n\n");
		printf("...�гs���J���Ӽƭ�(��ƶ��Ť@��)...\n\n");
		
		printf(" �Ƨǫe�G");
		for(i=0;i<5;i++) 
		{
			scanf("%d", &n);
			data[i]=n;
		}
		
		for(i=3;i>=0;i--)
		{
			for(j=0;j<=i;j++)
			{
				if(data[j]<data[j+1])
			{
					t=data[j];			
					data[j]=data[j+1];
					data[j+1]=t;
				}
			}
		}
		
		printf("\n �Ƨǫ�G");
		for(i=0;i<5;i++)
		{
			printf("%d ", data[i]);
		}
	printf("\n\n");
	system("PAUSE");	
return 0;
}
