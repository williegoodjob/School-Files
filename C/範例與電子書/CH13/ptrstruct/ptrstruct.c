#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
     struct bcc
   {
       char name[10];
       int hw;
       int mid;
       int final;
       float avg;
   };
   struct bcc david,*ptr;
   ptr=&david;
   printf("\n    ==== �p������צ��Z�պ� ==== \n\n");
   printf("\t 1. �ǥͩm�W   : ");
   gets((*ptr).name);
   printf("\t 2. ���ɦҦ��Z : ");
   scanf("%d",&(*ptr).hw);
   printf("\t 3. �����Ҧ��Z : ");
   scanf("%d",&(*ptr).mid);
   printf("\t 4. �����Ҧ��Z : ");
   scanf("%d",&(*ptr).final);
   (*ptr).avg=(*ptr).hw*0.3+(*ptr).mid*0.3+(*ptr).final*0.4;
   printf("     =============================  \n");
   printf("\t 5. �Ǵ��`���� : %6.2f \n",(*ptr).avg);
   printf("\n");
   system("PAUSE");	
   return 0;
}
