#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char a[3]={'a','b','c'};
char b[8]={'a','b','c','d','e','f','g','h'};

for (int i=0;i<8;i++)
{
    printf("a[%d] = %c\n",i,a[i]);
}
printf("=========\n");

for (int i=0;i<8;i++)
{
    printf("b[%d] = %c\n",i,b[i]);
}
printf("\n");

}