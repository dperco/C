#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char c;

    fp = fopen("Datos.txt", "r"); /* apertura en modo lectura */
    if(fp != NULL)
    {
        printf("Apertura ok\n");
        /* operaciones de lectura */
        c = fgetc(fp); /* leer un caracter por vez */
        while( c != EOF ) /* leer mientras no sea fin de archivo */
        {
            printf("%c", c); /* mostrar por pantalla el caracter leído */
            c = fgetc(fp);   /* leer el siguiente */
        }
        fclose(fp); /* cierre del archivo */
    }
    else{
        printf("Error de apertura\n");
    }

    return 0;
}