#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CNC 
{
    int HORAS;
    int piezas_ok;
    int piezas_err;
};

int main()
{
    FILE *fp;
    int N;
    int i;
    int total;
    int totalok;
    int totalerror;

    struct CNC mayor;
    struct CNC h;
    fp= fopen("PRODUCCION2.bin","wb");/*apertura archivo*/
    printf("Cantidad de DIAS  TRABAJADOS: ");
    scanf("%d", &N);

    struct CNC motores;
    /* carga de datos */
    i=0;
    
   if(fp!=NULL)
   {
        while(i < N)
        {
        printf("CANTIDAD DE HORAS: \n");
        scanf("%d",&h.HORAS);
        printf("piezas ok : \n");
        scanf("%d",&h.piezas_ok);
        printf("piezas error: \n ");
        scanf("%d",&h.piezas_err);
        fwrite(&h,sizeof(h),1,fp);
        i++;
       }
       fclose(fp);
   }
    else
    {

        printf("error  de cantidad \n");
    }
    printf("\n \n");
    
    /*ver archivo */
    total=0;
    totalok=0;
    totalerror=0;

     fp= fopen("PRODUCCION2.bin","rb");
      if(fp != NULL)
    {
        printf("lectura de  motores \n");
        fread(&h,sizeof(h),1,fp);
        i=1;
        while(!feof(fp))
        {
            printf("dia : %d \n",i);
            printf("horas trabajadas : %d \n",h.HORAS);
            printf("piezas ok : %d \n",h.piezas_ok);
            printf(" piezas con error : %d \n",h.piezas_err);
            printf("\n ");
             total=total+h.piezas_ok+h.piezas_err;
             totalok=totalok+h.piezas_ok;
             totalerror=totalerror+h.piezas_err;
            i++;
             fread(&h,sizeof(h),1,fp);
        }
           fclose(fp);
    }
    else{
         printf("error apertura \n");
    }
    
    
     fp = fopen("Reporte2.txt", "w"); /* apertura en modo ecritura */
    if(fp != NULL)
    {
        printf("Apertura Reporte ok\n");
    

        /* escribir un sólo caracter por vez con fputc() */
        fprintf(fp,"total piezas fabricadas  : %d \n",total);
        printf("\n");

        /* escribir un número entero con fprintf() */
        fprintf(fp,"total piezas ok: %d \n",totalok);
        printf("\n");

        /* escribir un número real con fprintf() */
        fprintf(fp, "toatal piezas erroneas : %d \n",totalerror);
        printf("\n");

        fclose(fp); /* cierre del archivo */
        printf("Archivo Datos.txt generado correctamente.\n");
    }
    
    else{
        printf("Error de apertura\n");
    }

   
    return 0;
}