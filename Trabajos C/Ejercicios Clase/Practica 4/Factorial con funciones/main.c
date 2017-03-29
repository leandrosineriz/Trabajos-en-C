#include <stdio.h>
#include <stdlib.h>

/*
  Calcular el factorial de un numero utilizando una estructura repetitiva
  5!=5x4x3x2x1=120
*/

int main()
{
    int resultado=1;
    int i;
    for(i=5;i>0;i--)
    {
        resultado=resultado*i;

    }
    return 0;
}

int funcionFactorial(int n)
{
    int valor;
    if(n==0)
    {
        return 1;
    }
    else
    {
        valor=n*funcionFactorial(n-1);
        return valor;
    }
}
