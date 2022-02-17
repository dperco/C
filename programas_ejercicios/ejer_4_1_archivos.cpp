#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct MOTOR
{
    int maquina;
    char tipo[30];
    float temperatura;
};

int main()
{
    FILE *fp;
    int N;
    int i;
    struct MOTOR mayor;
    struct MOTOR h;
    fp= fopen("MOTORES.bin","wb");/*apertura archivo*/
    printf("Cantidad de registros: ");
    scanf("%d", &N);

    struct MOTOR motores;
    /* carga de datos */
    i=0;
    if(N < 10){
   
        while(i < N)
        {
        printf("Nro Máquina: ");
        scanf("%d", &motores.maquina);
        printf("Tipo: ");
        scanf("%s", motores.tipo);
        printf("Temperartura: ");
        scanf("%f", &motores.temperatura);
        fwrite(&motores,sizeof(motores),1,fp);
        i++;
       }
       fclose(fp);
    }
    else
    {

        printf("error  de cantidad \n");
    }
    printf("\n \n");
    h.temperatura = 0;
    /*ver archivo */
     fp= fopen("MOTORES.bin","rb");
      if(fp != NULL)
    {
        printf("lectura de  motores \n");
        fread(&motores,sizeof(motores),1,fp);
        while(!feof(fp))
        {
            printf("n° de maquina  : %d \n",motores.maquina);
            printf("temp : %.2f \n",motores.temperatura);
            printf(" Tipo de maquina : %s \n",motores.tipo);
            printf("\n ");
            if(h.temperatura < motores.temperatura)
            {
                h=motores;
            }
            fread(&motores,sizeof(motores),1,fp);
        }
        printf("\n \n");
        printf("el motor de mayor temperatura es : \n");
        printf("motro numero : %d \n",h.maquina);
        printf("temperatura : %.f \n",h.temperatura);
        printf("motro numero : %s \n",h.tipo);

        
        fclose(fp);
    }
fp = fopen("Reporte.txt", "w"); /* apertura en modo ecritura */
    if(fp != NULL)
    {
        printf("Apertura Reporte ok\n");
    

        /* escribir un sólo caracter por vez con fputc() */
        fprintf(fp,"tipo : %s \n",h.tipo);
        printf("\n");

        /* escribir un número entero con fprintf() */
        fprintf(fp,"Numero: %d\n",h.maquina);
        printf("\n");

        /* escribir un número real con fprintf() */
        fprintf(fp, "Temperatura: %.2f\n",h.temperatura);
        printf("\n");

        fclose(fp); /* cierre del archivo */
        printf("Archivo Datos.txt generado correctamente.\n");
    }
    else{
        printf("Error de apertura\n");
    }

   
    return 0;
}