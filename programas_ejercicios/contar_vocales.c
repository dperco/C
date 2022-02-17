
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int contarVOCALES(char cadena[]);

int main()
{
    char palabra[80]="";
    
    int n=0;

    printf("Ingrese una palabra\n");
    gets(palabra); 
    

    n = contarVOCALES(palabra);

    printf("En la palabra %s hay %d vocales %c\n", palabra, n, "vocales");
    return 0;
}

int contarVOCALES(char cadena[])
{
    char p;
    int cantidad=0;
    int i=0;
    int n = strlen(cadena);

    for(i=0;i < n ; i++) 
    {
        p=cadena[i];
        
        switch (p){
                case 'a': cantidad ++;
                           break;
                case 'e': cantidad ++;
                           break;
                case 'i': cantidad ++;
                           break;
                case 'o': cantidad ++;
                           break;
                case 'u': cantidad ++;
                           break;
                case 'A': cantidad ++;
                           break;
                case 'E': cantidad ++;
                           break;
                case 'I': cantidad ++;
                           break;
                case 'O': cantidad ++;
                           break;
                case 'U': cantidad ++;
                           break;
        }
        
    }

    return cantidad;
}

