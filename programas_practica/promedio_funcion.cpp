#include <stdio.h>
#include <stdlib.h>

float promedio(float a,float b);

void  mostrar (float prom);
float a;
float b;

int main (void)
{
	
	
	printf("Ingrese numero a :%f \n");
	scanf("%f",&a);
	printf("Ingrese numero b :%f \n");
	scanf("%f",&b);
	
	float resultado;
	
	resultado=promedio(a,b);
	
	mostrar(resultado);
	
	return(0);
		
}


float promedio(float a , float b)
{
	float  total;
	
	total = (a+b)/2;
	
	return(total);
}

void mostrar (float total )
{
	printf("El promedio entre a y b es : %.2f \n",total);
}
