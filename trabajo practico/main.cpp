/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stdio.h>

int Lavado(int tiem_lav,int tiem_seca)
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
                       printf("           \n");
                       }
                 else{
                      printf("error  en el ingreso de los tiempos \n");
                      printf("           \n");
     
                     }
                 }
     





int main()
{
    int numero;
    int tiem_lav;
    int tiem_seca;
    
    do{
        
    
    printf("Auto Plus - Options   \n");
    printf("1- Calculo Lavado de Piezas  \n");
    printf("2- Calculo de Pintura de Piezas  \n");
    printf("3- Salir del Programa  \n");
    printf("> Ingrese una opcion  \n");
    scanf("%d",&numero);
    
    
    
         if(numero == 1)
                   {
                       
                    Lavado(tiem_lav, tiem_seca);
                            
                         
                   }
                   
         
                   
    }while(numero < 3);
    
    printf(" FIN PROGRAMA \n");
    
    
    return 0;
}


