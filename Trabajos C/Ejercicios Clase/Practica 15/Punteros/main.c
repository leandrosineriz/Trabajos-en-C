#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* puntero;
    int variable=9;
    int* otroPuntero;
    int** punteroPuntero;

    puntero=&variable;


    printf("%p\n",&variable);
    printf("%p\n",puntero);
    printf("%d\n",*puntero);

    *puntero=17;
    printf("%d\n",*puntero);
    scanf("%d",puntero);
    printf("%d\n",*puntero);

    otroPuntero=puntero;
    printf("%p\n",otroPuntero);

    *otroPuntero=5;
    printf("%d\n",variable);

    punteroPuntero=&puntero;

    printf("%d\n",**punteroPuntero);
    printf("%p\n",*punteroPuntero);







    return 0;
}
