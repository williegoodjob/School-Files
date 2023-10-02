#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char STRING[10];
typedef unsigned short UNSHORT;
typedef unsigned int UNINT;
typedef float REAL;

struct member_data
{
	STRING name;	/* char name[10]; */
	UNSHORT age;  	/* unsigned short age; */
	UNINT income;   /* unsigned int income;	*/
	REAL avg;      	/* float avg; */
};

typedef struct member_data DATAS;	/* DATAS ���N struct member_data */
DATAS average(STRING tname, UNSHORT tage,UNINT tincome)
{
	DATAS ds;
	strcpy(ds.name, tname);
	ds.age = tage;
	ds.income = tincome;
	ds.avg = (REAL)tincome /12;
	return ds;
}

int main(int argc, char *argv[]) {
	DATAS hr[3];
	hr[0] = average("�i�L��", 24, 456789);
	hr[1] = average("�P��Y", 36, 567890);
	hr[2] = average("������", 42, 678908);
	printf("   �ƨΨ� ���q�H�O�귽�������u�~��� \n");	
	printf(" �m�W\t�~��\t�~���J\t�������~ \n");
	printf(" ===================================== \n");
	int i;
	for(i=0; i<=2; i++)
	{
		printf("%5s%5d%11d%11.2f \n", hr[i].name, hr[i].age, hr[i].income, hr[i].avg);		
	}
    system("PAUSE");	
	return 0;
}
