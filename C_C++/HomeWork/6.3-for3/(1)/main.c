#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j=0, k;
	printf("    ");	
	for(k=0; k<=9; k++)
	{
		printf("%3d", k);
	}
	printf("\n");
	printf("     -----------------------------");
	for (i=0; i<=127; i++)
	{	
		if (i%10==0)
		{
			printf("\n");
			printf(" %2d|", j);	
			j++;
		}
		if ( i <= 31)
		{
			printf("   ");
		}else
		{
			printf("  %c", (char)i);
		}
	}
	printf("\n\n");

	system("PAUSE");	
	return 0;
}
