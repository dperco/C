#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PRIMO 100

int main(){
    int pos;
    int vector[PRIMO];
    int n;
    int i;
    int contador;
     n=0;
     pos=0;
    
    
    while (pos <= PRIMO)
    {
            n=2n+1; /*vemos el resto de la div de un numero  para saber si es primo o no*/
            vector[pos]=n;
              
           n=n+1;
           pos ++;
           
           
    }

    for ( pos=PRIMO;pos >= 0;pos --)   /*IMPRIMIMOS LOS NUMEROS PRIMOS DEL VECTOR DESDE LA POSICION 100 A LA 0*/
       {
           printf(" los numeros primos son pos :%d \n",pos);
           printf("numero : %d n\",vector[pos]);
       }


    return 0;
}
