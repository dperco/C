#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char cambio(char palabra[30]);
int main() {

    char nombre1[30];
    char nombre2[30];
    char nombre3[30];
    char mayuscula[30];
    int i;
    int j;
    float n=0;
    float b=0;
    printf("ingresar nombre1 \n");
    gets(nombre1);
    j=0;
    strcpy(mayuscula,"    ");
    for(i=0;i<30;i++)
    {
         if(nombre1[i] == ' ' )
         {
           mayuscula[j]=' ';
         }
         else
         
          if((nombre1[i] >='a') && (nombre1[i]<='z'))
          {
           mayuscula[i]=nombre1[i]-32;
          }
         
         
         j++;
    }
strcpy(nombre1,mayuscula);


    printf("ingresar nombre2 \n");
    gets(nombre2);
    j=0;
    strcpy(mayuscula,"    ");
    for(i=0;i<30;i++)
    {
         if(nombre2[i] == ' ' )
         {
           mayuscula[j]=' ';
         }
         else
         if((nombre2[i] >='a') &&(nombre2[i]<='z'))
         {
           mayuscula[j]=nombre2[i]- 32;
         }
         j++;
    }
strcpy(nombre2,mayuscula);

   

    printf("ingresar nombre3 \n");
    gets(nombre3);
    j=0;
    strcpy(mayuscula,"     ");
    for(i=0;i<30;i++)
    {
         if(nombre3[i] == ' ' )
         {
           mayuscula[j]=' ';
         }
         else
         {
         if((nombre3[i] >='a') &&(nombre3[i]<='z'))
          mayuscula[j]=nombre3[i]-32;
           
         }
         j++;
    }
strcpy(nombre3,mayuscula);

n= strcmp(nombre1,nombre2);
b= strcmp(nombre2,nombre3);

if(n < b){
    printf("el nombre1 es : \n");
    printf("%s",nombre1);
    printf("\n");
    printf("el nombre2 es : \n");
    printf("%s",nombre2);
    printf("\n");
    printf("el nombre3 es : \n");
    printf("%s",nombre3);
    printf("\n");
}
else{
      if ((n < 0 ) & (b > 0)){
            printf("el nombre1 es : \n");
            printf("%s",nombre1);
            printf("\n");
            printf("el nombre2 es : \n");
            printf("%s",nombre3);
            printf("\n");
            printf("el nombre3 es : \n");
            printf("%s",nombre2);
            printf("\n");
              
            }
      else {
            if ((n >0) && ( b < 0)){

                  printf("el nombre1 es : \n");
                  printf("%s",nombre1);
                  printf("\n");
                  printf("el nombre2 es : \n");
                  printf("%s",nombre2);
                  printf("\n");
                  printf("el nombre3 es : \n");
                  printf("%s",nombre3);
                  printf("\n");
                     }
      }
}


    
return 0;

}




