#include <stdio.h>
#include <stdlib.h>             /* ��X�J�禡���Y�� */
#define MSG1 " ��b�| : "   	/* �{���� "��b�|:" �HMSG1�Ÿ����N */
#define MSG2 " ��P�� : "   	/* �{���� "��P��:" �HMSG2�Ÿ����N */
#define MSG3 " �ꭱ�n : "   	/* �{���� "�ꭱ�n:" �HMSG3�Ÿ����N */
#define PI 3.14159        	    /* �{���� ��P�v 3.14159 �HPI�Ÿ����N */

int radius = 100;           /* �ŧiradius������������ܼƨó]�w��� */

float get_area(void);       /* �ŧiget_area()���ۭq�禡 */

int main(int argc, char *argv[]) {  	/* �{���i�J�I */
	float perimeter;        /* �ŧiperimeter��P�����ϰ��ܼ�,��ƫ��O���B�I�� */
	printf(" %s %d \n\n" , MSG1, radius);      /* ��ܶ�b�|�ƭ� */
	perimeter = 2 * PI * radius;               /* �p���P�� perimeter*/
	printf(" %s %.2f \n\n" , MSG2, perimeter); /* ��ܶ�P�����p�⵲�G */
   	/* �I�sget_area()�禡,���o�ꭱ�n�p���Ǧ^�D�禡����,�A��ܶꭱ�n�����G */	
	printf(" %s %.2f \n\n" , MSG3, get_area());
	system("PAUSE");	    /* �Ȱ�����H�[�ݰ��浲�G */
	return 0;              	/* �����{������ */
}

float get_area(void) {      /* �p��ꭱ�n�۩w�禡 */
	float area;             /* �ŧiarea�ꭱ�n���ϰ��ܼơA��ƫ��O���B�I�� */
	area = PI * radius * radius;               /* �p��ꭱ�n area */
	return(area);           /* �N�p���ꭱ�narea�Ǧ^main()�D�禡�I�s�B*/
}

