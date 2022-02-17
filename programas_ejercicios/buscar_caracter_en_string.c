#include <stdio.h>
#include <stdlib.h>

/* prototipo */
int contarCaracteres(char cadena[], char letra);

int main()
{
    char palabra[50]="";
    char letra;
    int n=0;

    printf("Ingrese una palabra\n");
    gets(palabra); 
    printf("Ingrese la letra a contar: ");
    scanf("%c", &letra);

    /* llamar a la función para obtener la cantidad de caracteres */
    n = contarCaracteres(palabra, letra);

    printf("En la palabra %s hay %d letras %c\n", palabra, n, letra);
    return 0;
}

int contarCaracteres(char cadena[], char letra)
{
    int cantidad=0;
    int i=0;
    int n = strlen(cadena);

    while(i < n) /* la condición también podría ser: cadena[i] != '\0' */
    {
        if(cadena[i] == letra)
        {
            cantidad++;
        }
        i++;
    }

    return cantidad;
}

