#include <stdio.h>
#include <stdlib.h>

enum month
{
    January=1,February,March,April,May,June,July,
    August,September,October,November,December
};

int main(int argc, char *argv[]) {
  	int year=0,month=0,day=0;
	printf(" �п�J���Ѫ����(�榡yy/mm/dd)�G");
	scanf("%d/%d/%d", &year, &month, &day);	/* �ϥΪ̿�J��� */

	printf("\n\n ���ѬO : %d�~ %d�� %d�� ! ... ^_^\n\n", year, month, day);
	switch(month)
	{
		case March:
		case April:
		case May:
			printf(" %2d ��O�K�����A���u�`�I", month);
			break;
		case June:
		case July:
		case August:
			printf(" %2d ��Ѯ𪢼��p���ζˡI", month );
			break;
		case September:
		case October:
		case November:
			printf(" %2d ����n�ȹC�n�u�`�I", month );
			break;
		case December:
		case January:
		case February:
			printf(" %2d ��ūפU���`�N�O�x�I", month);
			break;
	}
	printf("\n\n");
    system("PAUSE");	
	return 0;
}
