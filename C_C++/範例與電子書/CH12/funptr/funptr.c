#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 80			/*  ��J�r��̪���80�Ӧr�� */
#define MSG1 " �п�J�^��r��G"
#define MSG2 " �r��ϦV��ܡG"
char *reverse(char[]);

int main(int argc, char *argv[]) {
	char str1[BUFSIZE];
	char *ptr1;
	printf("\n%s",MSG1);
	gets(str1);    	/*�N��J���r����w��str1�}�C  gets_s() for VC++  */
	/*�I�sreverse�禡�A�ñNnew_ptr�ҫ���r�ꪺ�_�l��}���w��ptr1*/
	ptr1=reverse(str1);
	printf("\n%s",MSG2);
	puts(ptr1);    
	printf("\n");
	system("PAUSE");	
	return 0;
}

char *reverse(char str2[])	/* �r�����禡*/
{
	char *ptr2, *new_ptr;    	/* �ϰ�����ܼ� */
	int i, j;
	int strcount=strlen(str2);	/* ���o�r�����*/
	new_ptr=(char*)malloc(sizeof(char)*strcount);  /* �ʺA�t�m�O���� */
	ptr2=str2;             			/* ptr2����}�C�_�l��} */
	/*����r��é�Jnew_ptr�ҫ��V����}*/
	for (i=strcount-1, j=0; i>=0 ; i--,j++)
	{
		*(new_ptr+j)=*(ptr2+i);	/* ptr2+i�����r�ꪺ���� */
	}
	*(new_ptr+j)='\0'; 	/* �s�r������[�W�r�굲���r�� */
	return new_ptr;    	/*�Nnew_ptr�ҫ��r�ꪺ�_�l��}�Ǧ^*/

}
