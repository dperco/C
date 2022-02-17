#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct PIEZA 
{
    int numero;
    int tiempo;
    float temperatura;
};

/*funciones*/
void ingreso_datos();
void mostrar_resultado();
void generar_reporte();
void modificar_pieza();
int main()
{
 ingreso_datos();
 modificar_pieza();
 mostrar_resultado();
 generar_reporte();
 

 return 0;
 
}
 
void ingreso_datos()
{
    FILE *fp;
    
    struct PIEZA p;
    
    fp= fopen("PRODUCCION.bin","ab");/*apertura archivo*/
    
 if(fp!=NULL)
   {
    printf("Ingresar datos de para las piezas procesadas  \n \n ");   
    printf("ingrese numero de pieza  TRABAJADOS: \n ");
    scanf("%d",&p.numero);

        while(p.numero != 0)
        {
              do
              {
                printf("ingresar tiempo de horneado de 30 a 120 : \n");
                scanf("%d",&p.tiempo);  /* code */
              } while (p.tiempo < 30 || p.tiempo > 120);
              
              do
              {
                printf("ingrese  temperatura de horneado de 100 a 200 : \n");
                scanf("%f",&p.temperatura);
              }while ( p.temperatura < 100 || p.temperatura > 200);
            fwrite(&p,sizeof(p),1,fp);
            printf("ingrese  numero de pieza : \n");
            scanf("%d",&p.numero);    
        }     
              
       fclose(fp);
       
   }
    else
    {

        printf("error  de cantidad \n");
    }
    
}   
    /*ver archivo */

void mostrar_resultado(){

    FILE *fp;
    struct PIEZA p;

    int tiempototal=0;
    int  piezas=0;
    float temperatura=0;

     fp= fopen("PRODUCCION.bin","rb");
      if(fp != NULL)
    {
      /*  mostrar por pantalla */
        printf("Numero     Tiempo    Temperatura  \n");
        fread(&p,sizeof(p),1,fp);
        
        while(!feof(fp))
        {
            printf("    %d        %d      %f   \n",p.numero,p.tiempo,p.temperatura);
            tiempototal=tiempototal+p.tiempo;
             piezas ++;
             temperatura=temperatura+p.temperatura;

            fread(&p,sizeof(p),1,fp);
        }

           fclose(fp);
           printf("totales      %d      %f   \n",tiempototal,temperatura/piezas);
    }
    else{
         printf("error apertura \n");
    }
    
}  

void generar_reporte()
{
    FILE *fp;
    FILE *ft;
    struct PIEZA p;

    int tiempototal=0;
    int  piezas=0;
    float temperatura=0;

     fp= fopen("PRODUCCION.bin","rb");
     ft= fopen("salida.txt","wt");
      if(fp != NULL && ft != NULL)
    {
      /*  mostrar por pantalla */
        fprintf(ft,"Numero     Tiempo    Temperatura  \n");
        fread(&p,sizeof(p),1,fp);
        
        while(!feof(fp))
        {
            fprintf(ft,"    %d        %d      %f   \n",p.numero,p.tiempo,p.temperatura);
            tiempototal=tiempototal+p.tiempo;
             piezas ++;
             temperatura=temperatura+p.temperatura;

            fread(&p,sizeof(p),1,fp);
        }

           fclose(fp);
           fprintf(ft,"totales      %d      %f   \n",tiempototal,temperatura/piezas);
    }
    else{
         printf("error apertura \n");
    }

     
    

}   
    
void modificar_pieza()
{
 FILE *fp;
    struct PIEZA p;
    int numero;
    
     fp= fopen("PRODUCCION.bin","rb");
      if(fp != NULL)
    {
      
        printf("Modificar pieza \n");
        printf("ingrese numero de pieza a modificar \n");
        scanf("%d",&numero);
        while(numero !=0)
        {
                fread(&p,sizeof(p),1,fp);
                while(!feof(fp))
                {
                 if(numero == p.numero)
                 {
                     do
                     {
                     printf("ingrese tiempo  \n");
                     scanf("%f",&p.tiempo);
                     }while ( p.tiempo < 30 || p.tiempo >120);
                     
                     fseek(fp,-sizeof(p),SEEK_CUR) ;
                     fwrite(&p,sizeof(p),1,fp); 
                     
                     
                 }

                 fread(&p,sizeof(p),1,fp);
                }
            printf("ingrese numero de pieza a modificar \n");
            scanf("%d",&numero);
        }

           fclose(fp);
           printf("fin de cambios  \n");
            
        
    }
    else{
         printf("error apertura \n");
    }


}