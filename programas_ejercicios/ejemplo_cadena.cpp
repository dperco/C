#include <stdio.h>
#include <string.h>

main()
{
	char destino[50]="Éste no es un curso de C.";
    char texto[50];
	printf( "%s\n", destino );
	strcpy(texto, destino);
	printf( "%s\n", texto );
}
