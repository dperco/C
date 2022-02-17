#include <stdlib.h>
#include<stdio.h>
#include<time.h>

#define MAXFILA 4;
#define MAXCOLUM 5;

int main()
{
    int mat1[4][5];
    int mat2[4][5];

    int i=0;
    int j=0;
    int n=0;
    int h=0;
    

    srand(time(NULL));
    j=0;
    for (i=0;i<4;i++)  /*cargamoa  la primer columna con elementos aleatorios*/
         {
             
             mat1[i][j]=rand () %10;
                     
         }

    for (i=0;i<4;i++){     /*cargamos el resto de la matriz */
             
             for(j=1;j<5;j++){
                  
                  mat1[i][j]= 2 * mat1[i][j-1];
             }

    }

    for(i=0;i<4;i++){   /*buscamos fila con numero impar*/
     j=0;
     if (mat1[i][j] % 2 != 0) {
         printf("la fila i empieza con impar :%d \n",i);
     }
    }
     
     printf (" LA MATRIZ otiginal  es    = \n");
    for(i=0;i<4;i++)                             /*mostramos  la matriz 1*/
       {
           for(j=0;j<5;j++)
           
           printf("Matriz [%d][%d]: %d ",i,j,mat1[i][j]);
        
           printf("\n"); 
           
           
        
         printf("\n"); 
       }
     
     
      
    return 0;
}