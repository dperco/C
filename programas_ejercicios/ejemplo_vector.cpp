#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct TANQUE{
	int litros;
	int temp;
};

int main()
{
	
	 struct TANQUE vec[5];
	int pos = 0;
	int nro;
	int t;
	while(pos < 5) /* repetimos 10 veces */
	{
		printf("Ingrese LITROS: \n");
		scanf("%d", &nro);  /* guardamos el valor de ‘nro’ en el vector */
		vec[pos].litros = nro;
		printf("Ingrese TEMP: \n");
		scanf("%d", &t);
		vec[pos].temp=t;
		pos ++; /* incrementamos la posición */
	}
	printf("Valores ingresados:\n");
	for(pos=0; pos < 5; pos++)
	{
		printf("litros : %d \n ", vec[pos].litros);
		printf("temp : %d \n", vec[pos].temp);
	}
}
