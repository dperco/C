#include <stdio.h>
void saludo();
int sumar(int a,int b);

int main()
{
     int a;
     int b;
     int c;
     int R;
    saludo();

    printf(" ingrsar n1 :");
    scanf("%d",&a);
    printf(" ingrsar n2 :");
    scanf("%d",&b);
    printf(" ingrsar n3 :");
    scanf("%d",&c);

    
    R=sumar(sumar(a,b),c);


    printf("el resultado es = %d\n",R);
    

    
}
void saludo()
{

    printf("hola");
}

int sumar(int a,int b)
{
    int n1;
    int n2;
    
    int s;


    s=a+b;
    return(s);
}
