#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp; /* variable puntero FILE para manejar el archivo */
    int c;
    int n;

    /* abrir el archivo en modo escritura */
    fp = fopen("ASCII.txt", "wt");
    if(fp != NULL) /* se controla si la apertura es correcta */
    {
        printf("Apertura ok\n");
        /* operaciones de escritura */
        c = 0;
        n = 0;
        /* imprimir los valores ASCII entre 0 y 255, una columna con el valor numérico y otra con el caracter */
        while(c <= 255)
        {
            if(c<32)
                fprintf(fp, "%03d   ", c); /* para los primeros 32 valores no se muestra el carater ya que son códigos de control */
            else
                fprintf(fp, "%03d %c ", c, c); /* del 32 al 255 se muestra el número y el caracter */
            c++;
            n++;
            if(n==16)
            {
                fputc('\n', fp); /* cada 16 valores se agrega un '\n' para dar formato a la salida */
                n=0;
            }
        }
        fclose(fp); /* cierre del archivo */
        printf("Archivo ASCII.txt generado correctamente\n");
    }
    else{
        printf("Error de apertura\n");
    }
    return 0;
}