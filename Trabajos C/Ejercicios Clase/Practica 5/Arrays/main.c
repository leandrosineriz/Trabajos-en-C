#include <stdio.h>
#include <stdlib.h>

int random_number(int,int);

int main()
{
    int i;
    int x;
    int array[4][4];

    for(i=0;i<4;i++)
    {
        for(x=0;x<4;x++)
        {
            array[i][x]=rand()%11;
        }
    }

    for(i=0;i<4;i++)
    {
        for(x=0;x<4;x++)
        {
            printf("posicion %d - %d: %d\n",i+1,x+1,array[i][x]);
        }
    }




    return 0;
}
