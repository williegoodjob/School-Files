#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b, c, max;
	printf("�гs���J�T�Ӥ��P����� (��ƶ��ϥΡu,�v�r���j�}): ");
	scanf("%d,%d,%d", &a, &b, &c);
	if (a>b) {		/*�P�_ a �O�_�j�� b*/
   		if(a>c)		/*�P�_ a �O�_�j�� c*/
            max = a ;
   		else
   			max = c ;
	}
	else { 		
   		if(b>c)		/*�P�_ b �O�_�j�� c*/
	 		max = b ;
   		else
	 		max = c ;
	}	
  	printf("\n������G : %d, %d, %d �T�Ƥ��̤j�Ƭ� %d \n\n", a,b,c,max);  
   	system("PAUSE");	
	return 0;
}
