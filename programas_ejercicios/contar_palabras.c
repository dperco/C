#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int contarpalabras(char palabra[]);

int main()
{
    char cadena[50]="";
    
    int n=0;

    printf("Ingrese una cadena \n");
    gets(cadena); 
    


    /* llamar a la función para obtener la cantidad de palabras  */
    n = contarpalabras(cadena);

    printf("En la cadena %s hay %d palabras %c\n",cadena , n, "palabras");
    return 0;
}

int contarpalabras(char palabra[])
{
    int cantidad=0;
    int i=0;
    int n = strlen(palabra);

    while(i < n) 
    {
        if(palabra[i] == ' ')
        {
            cantidad++;
        }
        i++;
    }

    return cantidad;
}
