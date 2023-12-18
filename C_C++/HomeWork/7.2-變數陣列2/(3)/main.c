#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int a[10]={0};		
	int i=0, max;		
	printf("-----尋找最大值-----\n");
	printf("請連續輸入十個數值-\n");
	for(i=0;i<10;i++)		
	{
	   printf("請輸入第 %d 個資料：", i+1 );
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
	printf("最大值：%d\n\n",max); 
	
	system("PAUSE");	
	return 0;
}
