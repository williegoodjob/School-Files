#include <stdio.h>
#include <stdlib.h>

int comb(int, int);	/*�ŧicomb�禡�쫬*/

int main(int argc, char *argv[])
{
	int numN, numM, ans;
	printf(" �п�J�n�p��զX����ӼơC\n");
	printf(" �п�J�Ĥ@�Ӽ� n�G");
	scanf("%d", &numN);
	printf(" �п�J�ĤG�Ӽ� m�G");
	scanf("%d", &numM);
	if(numN>=numM)
	{
		ans=comb(numN, numM);
		printf("\n �զX���� comb(%d,%d)=%d\n\n",numN, numM, ans);
	}
	else
	{
		printf("\n �ƭ� n �����j�� m \n\n");
	}
   system("PAUSE");	
   return 0;
}

int comb(int n, int m)
{
	if(n==m || m==0)
	{
		return 1;
	}
	else
	{
		return comb(n-1, m)+comb(n-1, m-1);	
	}
}

  
