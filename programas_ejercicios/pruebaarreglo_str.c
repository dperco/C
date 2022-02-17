#include <stdio.h>

int main()
{
    int n;
    char palabra[20] = "alejandro";
    char otro[30]="perez";

    n=strlen(palabra);

    strcpy(palabra,otro);
    printf("numero de caract=  %d\n", n);
    printf("nombre  %s\n", palabra);
}