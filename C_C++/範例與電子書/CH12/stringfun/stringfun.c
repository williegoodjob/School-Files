#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 80

int main(int argc, char *argv[]) {
	/* �ŧi�i�s��100�Ӧr����str1, str2, str3, str4�r�� */
	char str1[BUFSIZE], str2[BUFSIZE], str3[BUFSIZE], str4[BUFSIZE];
	char *ptr;					/* �ŧi�r������ptr */
	int keyin, i, j, str_num;
	printf("\n========== �r�ꪺ��J ==========\n");
	printf(" �п�J str1 �r��G");
	gets(str1);					/* ��J���r����w��str1  gets_s() for VC++ */
	printf(" �п�J str2 �r��G");
	gets(str2);					/* ��J���r����w��str2 gets_s() for VC++  */
	printf("\n========== �r�ꪺ��� ==========\n");
	if(strcmp(str1, str2)==0)		/* ����r�� */
	{
		printf(" str1�r��Pstr2�r��۵�\n");
	}
	else if(strcmp(str1, str2)>0)
	{
		printf(" str1�r��p��str2�r��\n");
	}
	else
	{
		printf(" str1�r��j��str2�r��\n");
	}
	printf("\n========== �r�ꪺ�s�� ==========\n");
	strcat(str1,str2);	/* �Nstr2�r��s����str1�r�ꪺ�᭱, strcat_s() for VC++ */
	printf(" str1 �r��s�� str2 �r��G%s\n", str1);
	printf("\n========== �r�ꪺ�ƻs ==========\n");
	strcpy(str3,str1);/* �Nstr1�r��ƻs��str3�r��, strcpy_s()for VC++  */
	printf(" str1 �r��ƻs�� str3 �r��\n");
	printf(" str3 �r��O %s\n", str3);
	printf("\n========== �r�ꪺ���� ==========\n");
	printf(" �п�J�n��������r�G");
	gets(str4);
	printf(" �аݭn�����e�X�Ӧr�G");
	scanf("%d", &keyin);   /* scanf_s() for VC++ */
	/* �Nstr3�r��e��keyin�Ӧr������str4�r��e��keyin�Ӧr */
	strxfrm(str3, str4, keyin);	
	printf(" ������str3 �r��O %s\n", str3);
	printf("\n========== �r�ꪺ�˦L ==========\n");
	str_num=strlen(str3);		/*���ostr3�r����סA�M����w��str_num*/
	ptr=str3;				/*ptr���Ы��Vstr3�r�ꪺ�_�l��m*/
	printf(" str3 �r�ꪽ�L�O�G");
	for(i=0; i<str_num; i++)				/*�L�X�r��*/
	{
		printf("%c", *(ptr+i));
	}
	printf("\n");
	printf(" str3 �r��˦L�O�G");
	for (i=str_num-1, j=0; i>=0 ; i--,j++)	/*�˦L�r��*/
	{
		printf("%c", *(ptr+i));
	}
	printf("\n");
	
	system("PAUSE");	
	return 0;
}
