#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vecA[5], vecB[5], vecC[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("Ingrese un numero para el vecA: ");
        scanf("%d", &vecA[i]);
        printf("Ingrese un numero para el vecB: ");
        scanf("%d", &vecB[i]);


    }

    for(i=0; i<5; i++)
    {
         vecC[i] = vecA[i]+vecB[i];
        /*if(vecA[i]>=vecB[i])
        {
            vecC[i] = vecA[i];
        }
        else
        {
            vecC[i] = vecB[i];
        }*/
    }

    for(i=0; i<5; i++)
    {
        printf("\n%d\t%d\t%d", vecA[i],vecB[i], vecC[i]);
    }




    return 0;
}
