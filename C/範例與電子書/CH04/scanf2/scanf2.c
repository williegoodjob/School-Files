#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char cname[20], ename[20];
    printf("�п�J����m�W:" );
    scanf("%s", &cname);  
    printf("�A���W�r�G %s \n", cname);
    printf("\nPlease input your English name�G");
    scanf("%s", &ename); 
    printf("Your English name : %s \n\n", ename);
    system("PAUSE") ;
	return 0;
}
