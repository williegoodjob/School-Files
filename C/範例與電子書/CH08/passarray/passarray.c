#include <stdio.h>
#include <stdlib.h>

void bubblesort(int[],int);

int main(int argc, char *argv[])
{
	int myArray[]={31,12,16,10,78};
	int i, n;
    n=sizeof(myArray)/sizeof(int);	/*���o�}�C�������Ӽƨë��w��n*/
	printf("�Ƨǫe�G");
	for(i=0;i<n;i++)
	{
		printf(" %d", myArray[i]);
	}
	printf("\n\n");
	bubblesort(myArray,n);		/*�I�sbubblesort�禡*/
	printf("�Ƨǫ�G");
	for(i=0;i<n;i++)
	{
		printf(" %d", myArray[i]);
	}
	printf("\n\n");
    system("PAUSE");	
    return 0;
}

void bubblesort(int tArray[], int index)
{
	int i, j, t;
	for(i=index-2 ; i>=0 ; i--)	 	/* ��w�ƧǪk�Ƨ� */
	{
		for(j=0;j<=i;j++)
		{
			if(tArray[j]>tArray[j+1])
			{
				t=tArray[j];
				tArray[j]=tArray[j+1];
				tArray[j+1]=t;
			}
		}
	}
}
 
