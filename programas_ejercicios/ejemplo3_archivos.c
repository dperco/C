#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int n;
    float f;

    /* NOTA: el archivo 'Numeros.txt'  tiene este formato: (un entero y un float en cada línea del archivo)
       100 12.55
       200 25.70
       300 33.15
       400 18.92
       */
    fp = fopen("Numeros.txt", "r"); /* apertura en modo lectura */
    if(fp != NULL)
    {
        printf("Apertura ok\n");
        /* operaciones de lectura con fscanf() */
        fscanf(fp, "%d %f", &n, &f); /* lee un entero y un float */
        while( !feof(fp) ) /* mientras no sea fin de archivo */
        {
            printf("%d %.2f\n", n, f);   /* muestra los valores */
            fscanf(fp, "%d %f", &n, &f); /* lee los próximos valores */
        }
        fclose(fp); /* cierre del archivo */
    }
    else{
        printf("Error de apertura\n");
    }
    return 0;
}