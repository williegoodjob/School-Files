#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416      					/* �w�q�`�� */
#define AREA(r) PI*r*r 					/* �w�q�ƾǤ��� */
#define INPUT scanf    					/* ���O�N�� */
#define OUTPUT printf  					/* ���O�N�� */
#define MSG "Please input radius :"			/* �r��N�� */
#define FMT "The circle area is : %6.2f\n"	/* �榡�N�� */
#define BEEP "\007"      	/* ����r���o�X���n�N�� */

int main(int argc, char *argv[])
{
  	int r;
	OUTPUT(MSG);     	/* printf("Please input radius :"); */
	INPUT("%d",&r);		/* scanf("%d",&r); */
    /* printf("The circle area is : %6.2f\n",3.1416*r*r); */
	OUTPUT(FMT,AREA(r));
	OUTPUT(BEEP);     	/* printf("\007"); */
    system("PAUSE");	
    return 0;
}
