#include <stdio.h>
#include <stdlib.h>
void swap(int *, int *);  /* �禡�쫬�ŧi���޼ƪ���ƫ��O�᭱�[�W*�Ÿ� */

int main(int argc, char *argv[]) {
	int a=10,b=20;
	printf("main()�D�禡�I�sswap()�禡�e,a��}���e(%x)=%d\n",&a,a);
	printf("main()�D�禡�I�sswap()�禡�e,b��}���e(%x)=%d\n\n",&b,b);
	swap(&a ,&b);	/* ��޼ƥ[�W&�Ÿ��A��ܶǹ�޼Ʀ�}����޼� */
	printf("�^main()�D�禡��,a��}���e(%x)=%d\n",&a,a);
	printf("�^main()�D�禡��,b��}���e(%x)=%d\n\n",&b,b);
	system("PAUSE");	
	return 0;
}

void swap(int *x,int *y)  /* ��޼ƥ[�W*�Ÿ��A��ܶǧ}�I�s */
{
	int temp;
	printf("�i�Jswap()�禡�洫�e,x��}���e(%x)=%d\n",x,*x);
	printf("�i�Jswap()�禡�洫�e,y��}���e(%x)=%d\n\n",y,*y);
	temp=*x;
	*x=*y;
	*y=temp;
	printf("�i�Jswap()�禡���洫��,x��}���e(%x)=%d\n",x,*x);
	printf("�i�Jswap()�禡���洫��,y��}���e(%x)=%d\n\n",y,*y);	
}
