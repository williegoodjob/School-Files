#include <stdio.h>
#include <stdlib.h>

#include <math.h>				/* �t�Jmath.h���Y�� */

int yr_total(int, int, float);  /* �禡�ŧi�Ayr_total�禡�ĨC�~�p���@�� */
int mon_total(int, int, float); /* �禡�ŧion_total�禡�ĨC��p���@�� */

int main(int argc, char *argv[])
{
	int money, years, yrate;
	float per_rate;
	printf("== �ƧQ�v���Q�M�պ� ==\n");
	printf(" 1.�п�J�����G");
	scanf("%d", &money);
	printf(" 2.�п�J�~�Q�v(�H)�G");
	scanf("%d", &yrate);
	printf(" 3.�X�~���^�G");
	scanf("%d", &years);
	per_rate=(float)yrate/100;		/*�D�Q�v*/
	printf("\n");
	printf(" *** �C�~�p���@���A%d�~���^���Q�M�G%d", years,yr_total(money, years, per_rate));
	printf("\n\n");
	printf(" *** �C��p���@���A%d�~���^���Q�M�G%d", years,mon_total(money, years, per_rate));
	printf("\n\n");
    system("PAUSE");	
    return 0;
}

int yr_total(int vmoney, int vyears,float vper_rate)	/*�C�~�p���@��*/ 
{
	return vmoney*pow(1+vper_rate,vyears);
}
int mon_total(int vmoney, int vyears,float vper_rate)	/*�C��p��@��*/
{
	return vmoney*pow(1+(vper_rate)/12,vyears*12);
}

 
