#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float a, b, c;
	printf("�п�J A ����G");
	scanf("%f", &a);			
	printf("�п�J B ����G");
	scanf("%f", &b);
	printf("�п�J C ����G");
	scanf("%f", &c);		
		
   	if((pow(a,2)+pow(b,2))==pow(c,2)||(pow(a,2)+pow(c,2))==pow(b,2)
	                      ||(pow(b,2)+pow(c,2))==pow(a,2))
   		printf("\n �o�O�@�Ӫ����T����!" );
   	else
   		printf("\n �o���O�@�Ӫ����T����!");

   	printf("\n\n");
	system("PAUSE");	
	return 0;
}


