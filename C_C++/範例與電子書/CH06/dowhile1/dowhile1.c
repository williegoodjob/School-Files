#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i, number=1;
	printf("=== �����p�� ===\n\n");
	printf("��J�@�ӥ���ơG");
	scanf("%d", &n);
	i=n;	
	do
	{          
		number*=i;
		i--;
	}while(i>=1);
	printf("\n %d ! = %d \n\n", n, number);
	
	system("PAUSE");	
	return 0;
}
