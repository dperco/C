#include <stdio.h>

int numero;
int i;
int a;
int b;
int no_primo;
int primo;

int main(void)
{
 for (b=1;b<=100;b++){
       
	   printf("ingresar numero\n");
       scanf("%d",&numero);

	do {
	
	
  
    if((numero ==1)|(numero ==2))
     {
       
       numero=0;
       a=1;
     }
    
    else 
    if((numero % 2)== 0)
        {
          a=2;
          numero=0;
        }
    
 //
			
				
               
          
        
       if (a!=1)
	            printf("el numero no es primo: %d \n",primo);
	     else 
		        printf("el numero no es primo: %d \n",no_primo);
	     
	     a=0;
	     i=1;
        
     }while(numero >0);
     
        
		
}
     
    
  return 0;
}



