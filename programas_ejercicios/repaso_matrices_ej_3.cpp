#include <stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>

#define MAXFILA 2;
#define MAXCOLUM 3;

int main()
{
    float mat1[2][3];
    int mat2[2][3];

    int i=0;
    int j=0;
    int n=0;
    int h=0;
    float sum1;
    float sum2;
    float turn1;
    float turn2;
    float turn3;
    

            for(i=0;i<2;i++){
                 for(j=0;j<3;j++){
                  mat1[i][j]=0;
                  }
            }
             for(i=0;i<2;i++){
                 for(j=0;j<3;j++){
                  printf("ingresar numero : \n ");
                  scanf("%f",&mat1[i][j]);
                  
                 }

             }
               
          

     printf("la matriz es  \n ");  /*mostramos la amtriz*/
    for (i=0;i<2;i++){     
             
             for(j=0;j<3;j++){
                  
                         printf("Matriz  [%d] [%d] : %f ",i,j,mat1[i][j]);
                 
                            }
                printf("\n");
             }
    i=0;

    for(j=0;j<3;j++){
                sum1=sum1+mat1[i][j];
                    }
                 
    i=1;
                 
    for(j=0;j<3;j++){

                    sum2=sum2+mat1[i][j];
                    } 
        
              
                    
    

    printf("la maq1 produce : %f \n",sum1);
    printf("la maq2 produce : %f \n",sum2);
    return 0;
    }