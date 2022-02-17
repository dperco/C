#include <stdio.h>
#include <string.h>

main()
{
	char nombre_apellido[50];
	char nombre[]="Juan";
	char apellido[]="Perez";

	strcpy( nombre_apellido, nombre );
	strcat( nombre_apellido, " " );
	strcat( nombre_apellido, apellido );
	printf( "El nombre completo es: %s.\n", nombre_apellido);
}
