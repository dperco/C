#include <stdio.h>
void saludo();
int sumar(int n1,int n2);
int main()
{
     int n1;
     int n2;
     int R;
    saludo();
    R=sumar(n1,n2);

    printf("el resultado es = %d\n",R);
    

    
}
void saludo()
{

    printf("hola");
}

int sumar(int n1,int n2)
{
    int a;
    int b;
    int s;

    printf(" ingrsar n1 :");
    scanf("%d",&a);
    printf(" ingrsar n2 :");
    scanf("%d",&b);

    s=a+b;
    return(s);
}
