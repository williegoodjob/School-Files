#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int i,n,a[]={7,5,3,1,2};
	char c[]={'a','b','c','d','e'};
	n = sizeof(a)/sizeof(int);	/*�Da�}�C�������ӼƵM����w��n*/
	for(i=0 ; i<n ; i++)
	{
		printf("\n a[%d] = %d " , i , a[i] ) ;  
	}
	printf("\n a�}�C�O����Ŷ��G%d Bytes\n\n", sizeof(a));
	n = sizeof(c)/sizeof(char);	/*�Dc�}�C�������ӼƵM����w��n*/
	for(i=0 ; i<n ; i++)
	{
		printf("\n c[%d] = %d " , i , c[i] ) ;  
	}
	printf("\n c�}�C�O����Ŷ��G%d Bytes\n\n", sizeof(c));
	system("PAUSE");	
	return 0;
}
