#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX 3
struct product
{
	char no[5];
	char title[20];
	int price;
};

int main(int argc, char *argv[])
{
  	int i, num=-1;
	struct product cd[MAX],*ptr;
	char price[5];
	char keyin[5];
	ptr=cd;
	printf(" ====  CD�ۤ��n�J�@�~ ==== \n\n");
	for (i=0;i<MAX; i++,ptr++)
	{
		printf(" �� %d �iCD�s���G",i+1);
		gets(ptr->no);
		printf("        CD���Y�G");
		gets(ptr->title);
		printf("        ��  ���G");
		gets(price);
		ptr->price=atoi(price);
		printf("\n");
	}
	printf("\n");
	ptr=cd;
	printf(" �п�J�d�M��CD�s���G");
	gets(keyin);
	/* �`�Ƿj�M�k */
	for(i=0; i<3; i++,ptr++)
	{
		if(strcmp(ptr->no,keyin)==0)
		{
			num=i;
			break;
		}
	}
	/* ��ܴ`�Ƿj�M�k�����G */
	if(num==-1)
	{
		printf("\n   �d�L����� ! ....");
	}
	else
	{
		printf("\n�z�n�䪺CD �ԲӸ�Ʀp�U: \n");
		printf(" 1. CD �s�� : %s \n", ptr->no);
		printf(" 2. CD ���Y : %s \n", ptr->title);
		printf(" 3. ��   �� : %d \n", ptr->price);
	}
	printf(" \n\n");

    system("PAUSE");	
    return 0;
}
