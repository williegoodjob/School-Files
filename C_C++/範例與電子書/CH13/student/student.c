#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define SIZE 10

struct student
{
	char name[SIZE];
	int score;
	char *remark;
} student1, student2;

int main(int argc, char *argv[]) {
    char str[32];
    struct student student3 = {"����", 75, 
        "�I�q�訥�A�ө��w�p�A�����P�H���A���Ʀ��d���ߡC"};
    strcpy(student1.name, "�i�T");
    student1.remark = "�߫�ӱ��A���|�@�ϤT�A�ߦ��ɪ`�N�O�������C";
    student1.score = 79;
    
    printf("�п�J�m�W�G"); 
    gets(student2.name);
    printf("�п�J���Z�G"); 
    gets(&student2.score);
    printf("�п�J���y�G"); 
    gets(str);
    student2.remark = str;
    
    printf("\n ====== �ǥͦ��Z�C�� ====== \n");

    printf("�ǥͩm�W�G%s\n", student1.name);
    printf("�ǥͦ��Z�G%d\n", student1.score);
    printf("�Ѯv���y�G%s\n\n", student1.remark);
    
    printf("�ǥͩm�W�G%s\n", student2.name);
    printf("�ǥͦ��Z�G%d\n", student2.score);
    printf("�Ѯv���y�G%s\n\n", student2.remark);
    
    printf("�ǥͩm�W�G%s\n", student3.name);
    printf("�ǥͦ��Z�G%d\n", student3.score);
    printf("�Ѯv���y�G%s\n\n", student3.remark);
    system("PAUSE");
	return 0;
}
