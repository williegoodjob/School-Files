#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX 10

struct product
{
   char id[MAX];
   char name[40];
   int price;
} book[] ={"vb001", "Visual Basic �{���]�p�g��", 660,
         "vc001", "Visual C++ �{���]�p�g��", 650,
         "cs001", "Visual C# �{���]�p�g��", 670, };
         
void show(int, struct product[]);
void search(int, struct product[], char[]);

int main(int argc, char *argv[])
{
   char keyin[MAX];
   show(sizeof(book),book);
   printf("\n\n");
   printf("===>>> �п�J�d�M�Ѹ��G");
   gets(keyin);

   search(sizeof(book), book, keyin);
   printf(" \n\n");

   system("PAUSE");	
   return 0;
}

void show(int arysize, struct product tary[])
{
    int aryindex = arysize/sizeof(struct product);
    int i=0;
    struct product *ptr;
    ptr=tary;
    for(i=0; i<aryindex; i++,ptr++)
    {
     printf("\n �� %d ���Ѹ��G%s\n",i+1 , (*ptr).id);
     printf("        �ѦW�G%s\n", (*ptr).name);
    printf("        ����G%d\n", (*ptr).price);
    }
}

void search(int arysize, struct product tary[], char keyin[])
{
   int i=0, num=-1;
   int aryindex;
   struct product *ptr;
   ptr=tary;  
   aryindex = arysize/sizeof(struct product);

   for(i=0; i<aryindex; i++,ptr++)
   {
      if(strcmp((*ptr).id, keyin)==0)
      {
         num=i;
         break;
       }
   }

   if(num==-1)
   {
      printf(" �d�L����� !.... ");
   }
   else
   {
      printf(" \t\t �ѦW : %s \n" ,(*ptr).name);
      printf(" \t\t ��� : %d \n" ,(*ptr).price);
   }
}
