#include <stdio.h>
#include <stdlib.h>
void fun1();
int times=1;   				/* �����ܼ�  */

int main(int argc, char *argv[]) {
	for (times=1 ; times<=5 ; times++)	/* �I�sfun1()�禡5��  */
	{
		fun1();
	}
	printf("\n");
	system("PAUSE");	
	return 0;
}

void fun1()
{
		int a_var=10;     		/* �۰��ܼ�  */
		static int l_stat=10;	/* �����R�A	�ܼ�  */
		printf(" \n ��%d���I�s fun1() a_var1=%d  l_stat= %d \n",
times,a_var++,l_stat++);
}

