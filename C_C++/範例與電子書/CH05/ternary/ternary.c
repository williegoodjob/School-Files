#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int score;
    printf("=== ���Z���� ===\n");
	printf("�п�J�A�������Ҥ��ơG");
	scanf("%d", &score);
	printf("�A�����Ҫ����Z����O %s ! ^_^ ... \n", score>=80? "��{�u��":
 			(60<=score && score<80 ? "�t�j�H�N" : "���ݥ[�j"));	

   	printf("\n\n");
   	system("PAUSE");	
	return 0;
}
