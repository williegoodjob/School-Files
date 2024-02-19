#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <ctype.h>
#define MAXSIZE 10
#define MSG "Press any key to continue..."
void push(void);
void pop(void);
void printout(void);
int stack[MAXSIZE];
int i=1,choose; 		/* i:����  choose:�ﶵ */
int *sptr, *full, *empty;

int main(int argc, char *argv[]) {
	sptr=stack;	      	/* sptr���Ы���stack[0]��} */
	empty=stack; 	        	/* empty���Ы���stack[0]��}*/
	full=stack+MAXSIZE-1;	/* full���Ы���stack[9]��} */
	do
	{
		printf(" \n ===  Stack Operation  ===");
		printf(" \n   1. Push Operation ");
		printf(" \n   2. Pop Operation ");
		printf(" \n   3. Printout Stack ");
		printf(" \n   0. Quit ");
		printf(" \n =========================");
		printf(" \n   �п�� [0-3] : ");
		scanf("%d",&choose);    /* scanf_s() for VC++   */
		switch (choose)  	/* �P�_�ϥΪ̿�ܪ��ﶵ */
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3: 
				printout();
				break;
			case 0:
				exit(0);
			default:
	     		printf("\n\n  === Error input (0-3) !! ");
	     		break;
		}
		printf(" \n\n %s\n", MSG);
	}while(1);
	system("PAUSE");	
	return 0;
}

void push(void)
{
	sptr++; 				/*sptr���Щ��e��*/
	if(sptr==full) 		/*�P�_���|�O�_�v�g���F*/
	{
		printf("\n\n  �K. ���|�v���I ");
		sptr--;
	}
	else
	{
		printf("\n\n �п�J�� %d ����ơG", i++); 
       /* �N�ϥΪ̿�J����Ʃ�Jsptr���V����}*/
		scanf("%d", sptr);    /* scanf_s() for VC++  */
	}
}

void pop(void)
{
	if(sptr!=empty)	 	/*�P�_���|�O�_�٨S����*/
	{
		printf("\n\n  ... Pop from stack : %3d", *sptr);
		sptr--;
		i--;
	}
	else
	{
		printf("\n\n .... ���|�v�g�ŤF! \n\n");
		i=1;    				/* ���|����Ƶ��ƭ��s�}�l�� */
	}
}

void printout(void)
{
	int *lptr;
	lptr=sptr;
	printf("\n\n�ثe���|����ơG");
	do
	{
		if(lptr!=empty)		/*�P�_���|�O�_�٨S����*/
		{
			printf(" %3d", *lptr);
			lptr--;
		}
		else
		{
			break;
		}
	}while(1);
	printf("\n                Top <-- Stack --> Bottom \n");
}
