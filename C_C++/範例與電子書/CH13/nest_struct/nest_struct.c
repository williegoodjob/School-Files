#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  	struct date		/* ���c�Y�w�q�b�禡���A�h�u���Ө禡�~��ϥ� */
	{
		int year;
		int month;
		int day;
	};

	struct ename
	{
		char last[10];
		char first[10];
	};

	struct person
	{
		char id[11];
		char cname[10];
		struct date birth;
		char blood[2] ;
		char married;
		struct ename name;
	};

	struct person p1={"B123456789","�i�T",{1980,10,25},
		"A",'Y',{"Lin","David"}};
	printf(" 1. �����Ҧr��: %s\n", p1.id);
	printf(" 2. ����m�W  : %s\n", p1.cname);
	printf(" 3. �X�ͦ~��  : %d �~\n", p1.birth.year-1911);
	printf(" 4. �X�ͤ��  : %d ��\n", p1.birth.month);
	printf(" 5. �X�ͤ��  : %d ��\n", p1.birth.day);
	printf(" 6. ��    ��  : %s ��\n", p1.blood);
	printf(" 6. ��    �B  : %c \n", p1.married);
	printf(" 7. �^��m�W  : %s %s\n", p1.name.first, p1.name.last);
    printf("\n");
    system("PAUSE");	
    return 0;
}
