#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    
    int n;
    char car;

    fp = fopen("Cajas.txt", "r"); /* apertura en modo lectura */
    if(fp != NULL)
    {
        printf("Apertura ok\n");
        
        do{
	     car = fgetc(fp);
	     fprintf(fp,“%c”, car);
         }while(car != EOF);

        
        

        

        fclose(fp); /* cierre del archivo */
        printf("Archivo Cajas.txt leido correctamente.\n");
    }
    else{
        printf("Error de apertura\n");
    }

    return 0;
}