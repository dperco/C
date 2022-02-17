#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PRIMO 100

int main(){
    int pos;
    int vector[PRIMO];
    int n;
    
    int contador;
     n=0;
     pos=0;
    
    
    while (pos <= PRIMO)
    {
            while(contador>=1)   /*vemos el resto de la div de un numero  para saber si es primo o no*/
            {
             if (n % contador == 0) break;
             contador --;
            }

            if (contador == 1)  
           {
              vector[pos]=n;
              pos++;
              
           }  /*determinamos que numero resulto primo y lo cargamos en el vector*/
           n=n+1;
           contador=n-1;
           
    }

    for ( pos=PRIMO;pos >= 0;pos --)   
       {
           printf(" los numeros primos son pos :%d \n",pos);
           printf("numero : %d n\",vector[pos]);
       


    return 0;
    }

