#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=30,b=20,c=10;
	printf(" %d \n", a>b || a<c);   	/*  �L�X1�A1���true */
   	printf(" %d \n", a>b && a<c);   	/*  �L�X0�A0���false */
   	printf(" %d \n", !(a>b));       	/*  �L�X0�A0���false */

   	system("PAUSE");	
	return 0;
}
