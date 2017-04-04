#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[20];
    char apellido[20];
    char numChar;
    int i;
    char nombreYApellido[100];

    printf("Ingrese el nombre: ");
    gets(nombre);
    strlwr(nombre);
    nombre[0]=toupper(nombre[0]);

    printf("Ingrese el apellido: ");
    gets(apellido);
    strlwr(apellido);
    apellido[0]=toupper(apellido[0]);

    numChar=strlen(apellido);

    for(i=0;i<numChar;i++)
    {
        if(apellido[i]==' ')
        {
            apellido[i+1]=toupper(apellido[i+1]);
        }
    }


    strcpy(nombreYApellido,nombre);
    strcat(nombreYApellido," ");
    strcat(nombreYApellido,apellido);


    printf("%s",nombreYApellido);

    return 0;
}
