#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, sum=0, i=0;
    printf(" =�D 1 �� 100 �i�H�Qn�㰣�����=\n\n");
	printf(" �п�J 1 �� 100 ����� n�G");
	scanf("%d", &n);
	if (n>=1 && n<=100)
	{
		while (sum+n<=100)
		{
			sum+=n;
			printf("%3d,", sum);
			i++;
			if(i%5==0)
			{
				printf("\n");
			}
		}
		printf("\n\n");
		printf(" �� 1 �� 100 �� %d �Ӿ�ƥi�H�Q %d �㰣 ! \n", i, n);
	}
	else
	{
		printf("��J����ƿ��~!@_@\n");
	}

	system("PAUSE");	
	return 0;
}
