#include <stdio.h>
#include <stdlib.h>

void encode(char []);
void decode(char []);

int main(int argc, char *argv[]) 
{
    char name[5][10] = {"Helen", "John", "Mary", "Brown", "�i�T"};
    int i;
    
    for(i = 0; i < 5; i ++)
    {
        encode(name[i]);
        printf("�s�X��=%s\n", name[i]);
        decode(name[i]);
        printf("�ѽX��=%s\n", name[i]);
    }
    system("PAUSE");
    return 0;
}

void encode(char str[])
{
    int i = 0;
    
    while(1)
    {
        if(*(str + i) == '\0')
            return;
        *(str + i) += i % 3;
        i++;
    }
}

void decode(char str[])
{
    int i = 0;
    
    while(1)
    {
        if(*(str + i) == '\0')
            return;
        *(str + i) -= i % 3;
        i++;
    }
}
 
