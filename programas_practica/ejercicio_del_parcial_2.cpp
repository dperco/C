#include<stdio.h>
#include<math.h>
void menu();
int calcular_corte(int rpm);
int calcular_mecanizado(int espesor,int rosca);

int main()
{
    
    menu();
    
    return 0;
}

void menu (){
    int profun;
    int numero;
    int metrica;
    int rpm;
    int espesor;
    int rosca;
    
    
    printf("Mecanizado de Piezas- Options   \n");
    printf("1- Calculo profundidad de corte  \n");
    printf("2- Calculo tiempo mecanizado de roscas \n");
    printf("3- Salir del Programa  \n");
    
    printf("> Ingrese una opcion  \n");
    scanf("%d",&numero);
    
    
    while (numero != 0){
        
    
	switch(numero){
	    
         case 1
            { 
			
			printf("ingresar rpm :\n");
            scanf("%d",&rpm);      
            profun=calcular_corte(rpm);
            
            if (profun == 0) printf("hubo error %d \n",profun);
            else
              printf("la profundidad del corte es %d mm  \n",profun);
              
              printf("Mecanizado de Piezas- Options   \n");
               printf("1- Calculo profundidad de corte  \n");
              printf("2- Calculo tiempo mecanizado de roscas \n");
              printf("3- Salir del Programa  \n");
    
              printf("> Ingrese una opcion  \n");
              scanf("%d",&numero);
              break;
          }
                             
         case 2:{
             
             
	         printf("ingresar espesor :\n");
             scanf("%d",&espesor);
             printf("ingresar rosca :\n");
             scanf("%d",&rosca);
            
             metrica= calcular_mecanizado(espesor,rosca);
              
             if(metrica == 0)
                 printf("error de dator , el mecanizado es %d \n ",metrica);
                 else
                  printf("el tiempo de  mecanizado es %d segundos \n",metrica );
                  
             printf("Mecanizado de Piezas- Options   \n");
             printf("1- Calculo profundidad de corte  \n");
             printf("2  calculo tiempo mecanizado de roscas \n");
             printf("3- Salir del Programa  \n");
    
             printf("> Ingrese una opcion  \n");
             scanf("%d",&numero);
                 
                 
            break;
               }
              
        case 3:{
                printf(" FIN PROGRAMA \n");
                numero=0;
               }
                
             
	}
    
    }   

                    
    

}

int calcular_corte(int rpm){
    
    int  profun;
    
    float  aux;
    float  dato;
         printf("ingresar las  revol x min :\n");
         scanf("%d",rpm);
         
         if ( rpm > 1000 & rpm < 10000)
            {
              aux= 3.14*rpm;
              dato= sqrt(aux);
              
              profun= trunc (dato/60);
            }else profun=0;
            
          return profun;
} 
  
int  calcular_mecanizado(int espesor,int rosca)  
{
	
	
	int metrica;
	
         
 switch(rosca){
        case 1 :
         if((espesor >=1 ) & (espesor <= 10)){
                   if (espesor < 5)  
                             metrica=(15 * espesor);
                       else  metrica=(25 * espesor);
                printf("metrica es %d \n",metrica);
         }
        else{ metrica=0;
             
                 	
         }
         break;
        case 2 :
            if (( espesor >= 1) & (espesor <= 10))
			 
                 if (espesor < 5)  
                       metrica= (12 * espesor);
                 else  metrica= (20 * espesor);
            else{
                metrica=0;
                
                
            }
            break;
        default : metrica=0;
         }  
         
         return metrica;

}

