#include <stdio.h>
#include <stdlib.h>
void getDynamicString(char*);

int main()
{
    char* punt;
    int i;

    punt=(char*)malloc(sizeof(char)*50);

    getDynamicString(punt);


    for(i=0;i<50;i++)
    {
         printf("%c",*(punt+i));
    }




    return 0;
}

void getDynamicString(char* punt)
{
    char texto[50]={};
    int i;


    gets(texto);

    for(i=0;i<50;i++)
    {
        *(punt+i)=texto[i];
    }


}
