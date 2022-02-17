#include <stdio.h>
#include <stdlib.h>

void main ()
{
    FILE *fp;

    if( (fp = fopen("prueba.txt", "w")) == NULL )
    {
        printf("Error al abrir el archivo");
        exit(1);
    }
    printf("archivo abierto correctamente\n");
    fclose(fp);

}