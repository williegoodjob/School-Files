#include <stdio.h>
#include <stdlib.h>
void callval(int, int);

int main(int argc, char *argv[]) {
	int a=10, b=15;
	printf(" �I�s�e�ܼ�a��}�����e:\t(&a)=(%x)=%d\n", &a, a);
	printf(" �I�s�e�ܼ�b��}�����e:\t(&b)=(%x)=%d\n\n", &b, b);
	callval(a, b);
	printf(" �I�s���ܼ�a��}�����e:\t(&a)=(%x)=%d\n", &a, a);
	printf(" �I�s���ܼ�b��}�����e:\t(&b)=(%x)=%d\n\n", &b, b);
	system("PAUSE");	
	return 0;
}

void callval(int x, int y){
	x+=3 ;
	y+=2 ;
	printf(" �I�s���ܼ�x��}�����e:\t(&x)=(%x)=%d\n", &x, x);
	printf(" �I�s���ܼ�y��}�����e:\t(&y)=(%x)=%d\n\n", &y, y);
}
