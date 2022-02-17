#include <stdlib.h>
#include<stdio.h>
#include<time.h>

#define MAXFILA 6;
#define MAXCOLUM 2;

int main()
{
    int mat1[6][2];

    int i=0;
    int j=0;
    int suma;

    srand(time(NULL));

    for (i=0;i<6;i++)
         {
             for (j=0;j<2;j++)
             {
                 mat1[i][j]=rand () %100;
                 
                 
             }
             
         }
     printf (" LA MATRIZ ES  = \n");
    for(i=0;i<6;i++)                             /*mostramos  la matriz*/
       {
           for(j=0;j<2;j++)
           {
           
           printf("Matriz [%d][%d]: %d ",i,j,mat1[i][j]);
           
           }
        
         printf("\n"); 
       }
    
    printf("LA MATRIZ SUMA DE FILAS =  \n");
    for(i=0;i<6;i++)                             /*mostramos  suma de filas*/
       {
           suma=0;
           for(j=0;j<2;j++)
           {
           
           printf("Matriz [%d][%d]: %d ",i,j,mat1[i][j]);
           suma= suma + mat1[i][j];
           }
         printf("suma %d Linea:%d \n",j,suma);
        
         
       }

       printf("LA MATRIZ SUMA DE columnas =  \n");
    for(j=0;j<2;j++)                             /*mostramos  suma de columnas */
       {
           suma=0;
           for(i=0;i<6;i++)
           {
           
           printf("Matriz [%d][%d]: %d ",i,j,mat1[i][j]);
           suma= suma + mat1[i][j];
           }
         printf("suma %d columna:%d \n",i,suma);
        
         
       }

        printf("LA MATRIZ SUMA  =  \n");

    suma=0;
    for(i=0;i<6;i++)                             /*mostramos  suma de todos los elementos*/
       {
           
           for(j=0;j<2;j++)
           {
           
           
           suma= suma + mat1[i][j];
           }
       }
         printf("suma  :%d \n",suma);
        
    return 0;
}