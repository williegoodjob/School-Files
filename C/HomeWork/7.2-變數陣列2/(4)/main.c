#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int a[10]={0};		
	int i=0, mid;		
	printf("-----尋找中間值-----\n");
	printf("請連續輸入十個數值-\n");
	for(i=0;i<10;i++)		
	{
	   printf("請輸入第 %d 個資料：", i+1 );
	   scanf("%d", &a[i]);  
	}
	mid=a[4];
	printf("中間值：%d\n\n",mid); 
	
	system("PAUSE");	
	return 0;
}
