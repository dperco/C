#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CNC
{
    int hstrabajo;
    int piezaOK;
    int piezanoOK;
};

struct PRODUCCION
{
    int dia;
    struct CNC trabajo;
};

struct PRODUCCION vec[5];
float  vec2[5];

int main()
{
    int N;
    int i;
    int total;
    int ok;
    int error;
    float rendim;
    float aux;

    printf("Carga  de la Produccion\n");
    
    /* carga de datos en el vector */
    i=0;
    while(i < 5)
    {
        printf("Ingrese el dia: \n ");
        scanf("%d",&vec[i].dia);
        printf("Ingrese cantidad horas trabajadas: \n ");
        scanf("%d", &vec[i].trabajo.hstrabajo);
        printf("Ingrese cantidad piezas ok: \n");
        scanf("%d", &vec[i].trabajo.piezaOK);
         printf("Ingrese cantidad piezas con error: \n");
        scanf("%d", &vec[i].trabajo.piezanoOK);
        i++;
    }
    /* mostrar  el vector PRODUCCION  */
    
    i=0;
    printf("los datos cargados son : \n ");
    printf(" DIA    HS_TRABAJADAS   PIEZASOK   PIEZASERROR :\n ");
    while(i < 5)
    {
    
    printf("  %d ,        %d ,         %d ,         %d \n", vec[i].dia ,vec[i].trabajo.hstrabajo,vec[i].trabajo.piezaOK,vec[i].trabajo.piezanoOK);
    i++;
    } 

    /*Mostramos los totales producidos*/
    i=0;
    N=0;
    total=0;
    ok=0;
    error=0;
    rendim=0;
    aux=0;
    while(i<5)
    {
        rendim=vec[i].trabajo.piezaOK / vec[i].trabajo.hstrabajo ; 
        if ( rendim > aux)
                       {
                           aux=rendim;
                           N=i+1;
                      }
        total=total+vec[i].trabajo.piezaOK+vec[i].trabajo.piezanoOK;
        ok=ok+vec[i].trabajo.piezaOK;
        error=error+vec[i].trabajo.piezanoOK;
        i++;
    }

     printf(" \n");
     printf(" \n");
     printf(" la  cantidad total producida es : %d \n",total);
     printf(" \n");
     printf(" la  cantidad de piezas ok es : %d \n",ok);
     printf(" \n");
     printf(" la  cantidad de piezas con error es : %d \n",error);

     /*el mayor dia de rendimiento 
       
      i=0;
      for(i=0;i<5;i++)
              {
              vec2[i]= vec[i].trabajo.piezaOK / vec[i].trabajo.hstrabajo ;
              }
      i=0;
      N=0;
      rendim=0;
      for(i=0;i<5;i++){

                       if ( vec2[i] > rendim)
                       {
                           rendim=vec2[i];
                           N=i+1;
                      }
      }*/

      printf("el  mayor rendimiento fue el dia  : %d \n ",N);

    


      

    return 0;
}