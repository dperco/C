#include <stdio.h>
void saludo();
int  sumar (int n1,int n2);

int main()
{
    int a;
    int b;
    int c;
    int resultado;

    printf("ingrese numero 1 = \n");
    scanf("%d",&a);
    printf("ingrese numero 2 = \n");
    scanf("%d",&b);
    printf("ingrese numero 3 = \n");
    scanf("%d",&c);

    saludo();
    
    resultado= sumar (sumar(a,b),c);

    printf ("la suma es = %d\n",resultado);
    
}
void saludo()
{

    printf("hola");
}

int sumar(int n1 ,int n2)
{
    int s;
    s=n1+n2;
    return s;
}
