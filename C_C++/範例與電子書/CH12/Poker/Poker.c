#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define CARDS 52

int main(int argc, char *argv[]) {
	/*�s��켳�J�Pcard[1]~card[52] �� */
	int card[CARDS+1];        
	/*�s��~�P��suffle_card[1]~suffle_card[52]��*/
	int suffle_card[CARDS+1]; 
	int rem_card;    /* �ѤU�P�� */
	int i, k,index;
	/*player[0]~play[4]�F��n�_�|�a*/
	char *player[5]={"","�F","��","�n","�_"}; 
	/* ���j��]�wcard[1]~card[52]���O�s�J1~52 */
	for(i=1;i<=CARDS;i++) 
	{
		card[i]=i;
	}
	rem_card=CARDS;
	srand((unsigned)time(NULL));	/*�üƺؤl��*/
	for(i=1;i<=CARDS;i++)				/*�~�P  */
	{
    	/*�üƲ���1~(�Ѿl�P��+1)��card�}�C������*/
		index=rand()%rem_card+1; 
		suffle_card[i]=card[index];
		for(k=index;k<rem_card;k++)
		{
        	/*�Ncard�}�C���Ь�index�᭱�������W���@��*/
			card[k]=card[k+1]; 
		}
		rem_card--;
	}
	k=1;
	for(i=1; i<=CARDS; i++)   /* ���F�B��B�n�B�_�|�a�o�P */
	{
		if(i%13==1) 
		{
			printf("\n\n");
			printf("=== %s �� �P === \n", player[k]);
			k++;
		}
		if(suffle_card[i]>=1 && suffle_card[i]<=13)
		{
			printf("�®�%2d ",suffle_card[i]%13+1);
		}
		else if(suffle_card[i]>=14 && suffle_card[i]<=26)
		{
			printf("����%2d ",suffle_card[i]%13+1);
		}
		else if(suffle_card[i]>=27 && suffle_card[i]<=39)
		{
			printf("�ª�%2d ",suffle_card[i]%13+1);
		}
		else if(suffle_card[i]>=40 && suffle_card[i]<=52)
		{
			printf("���j%2d ",suffle_card[i]%13+1);
		}
	}
	printf("\n\n");
	system("PAUSE");	
	return 0;
}
