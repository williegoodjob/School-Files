#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int yy,mm,dd; 
    printf("Date�G(yyyy-mm-dd) : ");
    scanf("%d-%d-%d",&yy ,&mm,&dd);
    printf("\n���Ѥ���G%d/%d/%d \n\n",yy,mm,dd);
	system("PAUSE");
	return 0;
}
