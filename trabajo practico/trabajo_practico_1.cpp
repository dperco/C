/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stdio.h>
void Lavado(int tiem_lav,int tiem_seca)
     {
         int Pot_tot;
         int Tiem_total;
         int numero;
         printf("ingresar tiempo de lavado :\n");
         scanf("%d",&tiem_lav);
         printf("ingresar tiempo de secado :\n");
         scanf("%d",&tiem_seca);
         
         if (tiem_lav >= 20 && tiem_lav <= 300) 
                  if (tiem_seca >= 20 && tiem_seca <= 300)
                    {
                      Pot_tot=(tiem_lav*5)+(tiem_seca*12);
                      Tiem_total=tiem_lav+tiem_seca;
                     }
                    else Pot_tot=0;
            else Pot_tot=0;
        if(Pot_tot != 0)
                       {
                       printf("la Potencia total de Lavado es = %d \n",Pot_tot);
                       printf("el tiempo total de lavado es = %d \n",Tiem_total);
                       }
                 else printf("error  en el ingreso de los tiempos \n");
         printf(" Auto Plus - Options   \n");
         printf(" 1- Calculo Lavado de Piezas  \n");
         printf(" 2- Calculo de Pintura de Piezas  \n");
         printf(" 3- Salir del Programa  \n");
         printf(" > Ingrese una opcion  \n");
         scanf("%d",&numero);
     }



int main(void)
{
    int numero;
    int tiem_lav;
    int tiem_seca;
    
    printf(" Auto Plus - Options   \n");
    printf(" 1- Calculo Lavado de Piezas  \n");
    printf(" 2- Calculo de Pintura de Piezas  \n");
    printf(" 3- Salir del Programa  \n");
    printf(" > Ingrese una opcion  \n");
    scanf("%d",&numero);
    
    while(numero < 3)
    {
    switch(numero){
                   case 1: {
                       
                            Lavado(tiem_lav, tiem_seca);
                            
                         
                           }
                   
                   case 2: break;
                   
                   case 3: break;
                   
                   default: break;
    }
    
    }
    return 0;
}

