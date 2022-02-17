#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int N;
    int i;

    struct Maquina 
    {
        char tipo[30];
        float temp;
        int  numero;

    };

    struct Maquina h;
    
    

    /*fp =fopen ("MOTORES.bin","wb");  apertura en modo lectura */
    printf("ingrese cantidd de registros \n");
    scanf("%d",&N);
    if(N <= 10)
    {
        
        for( i=0;i < N ;i++) /* ingreso los datos */
        {
            printf("ingresar tipo de maquina : \n");
            scanf("%s",h.tipo);
            printf("ingrese la temperatura :\n");
            scanf("%.2f",h.temp);
            printf("ingresar num de motor:\n");
            scanf("%d",h.numero);
           
        }
        
     
    }
    else{
        printf("numero equivocado\n");
    }
    /*
    fp=fopen("MOTORES.bin","rb");
    if(fp != NULL)
    {
        i=0;
        printf("lectura de MOTORES \n");
        fread(&h,sizeof(h),1,fp);
        while(i < N)
        {
            printf("TIPO DE MAQUINA : %s \n",h.tipo);
            printf("temp : %.2f \n",h.temp);
            printf(" numero motor : %d \n",h.numero);
            fread(&h,sizeof(h),1,fp);
            i++;
        }
        fclose(fp);*/
    
    
    return 0;
}