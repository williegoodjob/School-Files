#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int keyin, guess, count, min, max;
	count=0;
	min=0;
	max=100;
	srand((unsigned)time(NULL));  
    guess=rand()%99+1; 		
	printf("======= �q�Ʀr�C�� =======�G\n\n");
	do
	{	
		printf("�q�Ʀr�d�� %d < ? < %d �G", min, max);
		scanf("%d", &keyin);
		count++;
		if(keyin>=1 && keyin<100)
		{
			if(keyin==guess)
			{
				printf("���G! �q��F, ���׬O %d\n", guess);
				break;
			}
			else if(keyin>guess)
			{
				max=keyin;	/*�N�ثe��J���Ʀrkeyin���w��max*/
				printf("�A�p�@�I!!");
			}
			else if(keyin<guess)
			{
				min=keyin;	/*�N�ثe��J���Ʀrkeyin���w��min*/
				printf("�A�j�@�I!!");
			}
			printf(" �z�q�F %d ��\n\n", count);
		}
		else
		{
			printf("�п�J���ܽd�򤺪��Ʀr!\n");
		}
	}while(1);	/*�L�a�j��*/
	printf("\n�`�@�q�F %d ��!\n\n", count);
	system("PAUSE");	
	return 0;
}
