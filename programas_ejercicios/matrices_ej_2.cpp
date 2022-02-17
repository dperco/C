#include <stdlib.h>
#include<stdio.h>
#include<time.h>

#define MAXFILA 5;
#define MAXCOLUM 5;

int main()
{
    int mat1[5][5];
    int mat2[5][5];

    int i=0;
    int j=0;
    int n=0;
    int h=0;
    

    srand(time(NULL));

    for (i=0;i<5;i++)
         {
             for (j=0;j<5;j++)
             {
                 mat1[i][j]=rand () %10;
                 mat2[i][j]=0;
                 
                 
             }
             
         }
     printf (" LA MATRIZ otiginal  es    = \n");
    for(i=0;i<5;i++)                             /*mostramos  la matriz 1*/
       {
           for(j=0;j<5;j++)
           {
           
           printf("Matriz [%d][%d]: %d ",i,j,mat1[i][j]);
        
           
           }
        
         printf("\n"); 
       }
      printf (" LA MATRIZ 2  es    = \n");
    for(i=0;i<5;i++)                             /*mostramos  la matriz 2*/
       {
           for(j=0;j<5;j++)
           {
           
           printf("Matriz [%d][%d]: %d ",i,j,mat2[i][j]);
        
           
           }
        
         printf("\n"); 
       }
    
     for(i=0;i<5;i++)                             /*carcamos en la matriz 2 la inversa de matriz 1*/
       {
           h=4;
           for(j=0;j<5;j++)
           {
           
           
             
                  mat2[i][j]=mat1[i][h];
                  h--;
                  
             }

        }   
           
           
           
       

     printf (" LA MATRIZ 2 queda    = \n");
    for(i=0;i<5;i++)                             /*mostramos  la matriz 2 */
       {
           for(j=0;j<5;j++)
           {
           
           printf("Matriz [%d][%d]: %d ",i,j,mat2[i][j]);
           
           }  
         printf("\n");
       }
     
         
       

      
    return 0;
}