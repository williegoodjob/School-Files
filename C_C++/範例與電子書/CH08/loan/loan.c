#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int loan(int, int, float);
void showloan(int, int, float);

int main(int argc, char *argv[])
{
  	int keyin_money, keyin_year, keyin_rate;
	float rate;
	printf("=�����I�ڪ��Q���P�����պ�=\n");
	printf(" �п�J�U�ڪ��B�G");
	scanf("%d", &keyin_money);
	printf(" �п�J�X�~�v�١G");
	scanf("%d", &keyin_year);
	printf("   �п�J�~�Q�v�G");
	scanf("%d", &keyin_rate);
	rate=(float)keyin_rate/100;
	printf("\n");
	printf(" �C�~���٥����[�Q���@ %d", 
		loan(keyin_money, keyin_year, rate));
	printf("\n\n");
	showloan(keyin_money ,keyin_year ,rate);
	printf("\n");

    system("PAUSE");	
    return 0;
}

int loan(int money, int year, float rate)
{
	return money/((1-pow((1+rate),-(year)))/rate);
}

void showloan(int money, int year, float rate)
{
	int i, capital_interest, capital, interest;
	/* �C�~���٤����I�ڪ��Q���P���� */
	capital_interest=money/((1-pow((1+rate),-(year)))/rate);
	printf(" �u�٦~��\t����l�B\t���I�Q��\t�v�٥���\t�C�~�v�٪��B\n");
	printf("======================================");
	printf("======================================\n");
	for(i=1;i<=year;i++)
	{
		interest=money*rate;				/* �Q�� */
		capital=capital_interest-interest;	/* ���� */
		if(i==year)
		{
			capital=money;
		}
		printf(" �� %2d �~\t%8d\t%8d\t%8d\t%8d\n",
			i, money, interest, capital, capital_interest);
		money-=capital;
	}
}
