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
     
int Pintura(int decap,int secad,int pintado)
  {
     float pot_decap;
     int   pot_secad;
     int   pot_pintado;
     float Pot_tot;
     int   temp;
     int   tiempo;
     printf("ingresar tiempo de decapado :\n");
     scanf("%d",&decap);
     printf("ingresar tiempo de secado :\n");
     scanf("%d",&secad);
     printf("ingresar tiempo de pintado :\n");
     scanf("%d",&pintado);
     
     if(secad >= 45  && secad <= 300) 
                               pot_secad= secad * 20 ;
                          else 
                               pot_secad=0;
                               
     if (pintado >= 60 && pintado <=120)
                               pot_pintado= pintado * 40;
                               else
                               pot_pintado=0;
     if (decap >= 30 && decap <= 100)
                                 {
                                  
                                  if (pot_secad != 0 && pot_pintado != 0)  
                                  
                                               {
                                                   for(temp=40; temp <= 60; temp=temp+2)
                                                      {
                                                          pot_decap= (50*temp / 3.5* decap);
                                                          Pot_tot= pot_decap+pot_pintado +pot_secad ;
                                                          tiempo= secad+decap+pintado;
                                                          
                                                          printf("Para los ??C : %d  ",temp);
                                                          printf("la Potencia total es :%.2f \n",Pot_tot,"wats \n");
                                                          
                                                      }
                                                    printf("El tiempo total es:%d ",tiempo,"segundos \n");
                                                   
                                               }
                                               else pot_decap=0;
                                 }
                               else pot_decap=0;
        if (pot_decap ==0 || pot_secad == 0 || pot_pintado == 0)
        
                    printf(" Error en  los valores ingresados  \n");
         
  }




int main()
{
    int numero;
    int tiem_lav;
    int tiem_seca;
    int decap;
    int secad;
    int pintado;
    
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
                   
         if(numero == 2)
                   {
                     Pintura(decap,secad,pintado);
                   }
         
                   
    }while(numero < 3);
    
    printf(" FIN PROGRAMA \n");
    
    
    return 0;
}


