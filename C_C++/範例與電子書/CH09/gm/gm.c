#include <stdio.h>
#include <stdlib.h>

#define AREA 2	/* �u�n���Ʀr�A�sĶ���|�̱����ܽsĶ */
#if AREA == 1
	#define NAME "��y"
	#define G 0.165
#elif AREA==2
	#define NAME "���P"
	#define G 0.38
#elif AREA==3 
	#define NAME "��P"
	#define G 2.53
#else
	#define NAME "�a�y"
	#define G 1.0 
#endif
int main(int argc, char *argv[]) 
{
	float kg;
	printf("�п�J�z���魫(��줽��)�G"); 
	scanf("%f", &kg);
	printf("\n�b%s����%6.2f����\n", NAME, G * kg);
	system("PAUSE");
	return 0;
}
