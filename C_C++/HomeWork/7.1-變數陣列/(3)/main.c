#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	printf("�]�w�r���}�C name �����r��\n");
	char name[9];
	scanf("%s", name);
	printf("\n");
	printf("==== �ϥ� printf ��X ====\n");
	printf("%s\n\n", name);
	printf("=== �ϥ� puts() �禡��X ===\n");
	puts(name);
	printf("\n");
	printf("=== �ϥ� strlen() �禡��X ===\n");
	for (int i = 0; i < strlen(name) - 1; i++)
	{
		printf("name[%d] = %c\n", i, name[i]);
	}

	system("PAUSE");
}
