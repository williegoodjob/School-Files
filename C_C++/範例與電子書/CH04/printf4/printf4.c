#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("== 1234567890\n");
	printf("1. %c \n",65);	    /* ���A�r��,A�r����ASCII�X��65 */
	printf("2. %#6o \n",65);	/* 8�i�� */
	printf("3. %#6x \n",65);	/* 16�i�� */
	printf("4. %6x \n",65);
	printf("5. %-6x \n",65);
	printf("6. %06x \n",65);
	printf("7. ASCII Code of 35(Hex): \x35 \n");
	printf("8. ASCII Code of 65(Oct): \065 \n\n");
    system("PAUSE");
	return 0;
}
