#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 		int data[5];	
		int n, i, j, t;
		printf("== 氣泡排氣法(由大到小排序)==\n\n");
		printf("...請連續輸入五個數值(資料間空一格)...\n\n");
		
		printf(" 排序前：");
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
		
		printf("\n 排序後：");
		for(i=0;i<5;i++)
		{
			printf("%d ", data[i]);
		}
	printf("\n\n");
	system("PAUSE");	
return 0;
}
