#include<stdio.h>
#include<math.h>
void menu();
float calcular_corte(int rpm);
int calcular_mecanizado(int espesor,int rosca);

int main()
{
    
    menu();
    
    return 0;
}

void menu ()
{
    float profun;
    int numero;
    int rpm;
    printf("Mecanizado de Piezas- Options   \n");
    printf("1- Calculo profundidad de corte  \n");
    printf("2- Calculo tiempo mecanizado de roscas \n");
    printf("3- Salir del Programa  \n");
    
    printf("> Ingrese una opcion  \n");
    scanf("%d",&numero);
    
    while (numero >= 0){
	
     if(numero == 1)
                   
            calcular_corte(rpm);
                            
         else  if (numero == 3)
                    printf(" FIN PROGRAMA \n");
                    
    if (profun == 0) printf("hubo error %d \n",profun);
    else
       printf("la profundidad del corte es %d mm  \n",profun);
}
    
}

float calcular_corte(int rpm){
    
    float  profun;
    
    float  aux;
    float  dato;
         printf("ingresar las  revol x min :\n");
         scanf("%d",rpm);
         
         if ( rpm > 1000 & rpm < 10000)
            {
              aux= 3.14*rpm;
              dato= sqrt(aux);
              
              profun= (dato/60);
            }else profun=0;
            
          return profun;
}   
            
            
