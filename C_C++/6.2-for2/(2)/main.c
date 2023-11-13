#include <stdio.h>
#include <stdlib.h>

float d[5]={1.5,3.5,5.5,7.5,9.5};
int main(int argc, char *argv[]) {
    printf("%-5s | %-5.1f %-5.1f %-5.1f %-5.1f %-5.1f\n------------------------------------\n","",d[0],d[1],d[2],d[3],d[4]);
    for(int i = 0;i<5;i++){
        printf("%-5.1f | %-5.2f %-5.2f %-5.2f %-5.2f %-5.2f\n",d[i],d[0]*d[i],d[1]*d[i],d[2]*d[i],d[3]*d[i],d[4]*d[i]);
    }
    system("pause");
    return 0;
}