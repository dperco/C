#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct MOTOR
{
    int maquina;
    char tipo[30];
    float temperatura;
};

int main()
{
    int N;
    int i;
    struct MOTOR mayor;

    
    printf("Cantidad de registros: ");
    scanf("%d", &N);

    struct MOTOR motores;
    /* carga de datos en el vector */
    i=0;
    if(N < 10){
   
        while(i < N)
        {
        printf("Nro Máquina: ");
        scanf("%d", &motores.maquina);
        printf("Tipo: ");
        scanf("%s", motores.tipo);
        printf("Temperartura: ");
        scanf("%f", &motores.temperatura);
        i++;
       }
    }
    else
    {

        printf("error  de cantidad \n");
    }
    /* buscar el motor con mayor temperatura 
    mayor.temperatura = 0;
    i=0;
    while(i < N)
    {
        if( motores[i].temperatura > mayor.temperatura)
        {
             mayor = motores[i];
        }
        i++;
    }

    printf("RESULTADOS:\n");
    printf("Mayor temperatura: %f\n", mayor.temperatura);
    printf("Nro Máquina: %d\n", mayor.maquina);
    printf("Tipo: %s\n\n", mayor.tipo);*/

    return 0;
}