#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int i;

    struct HORNO 
    {
        char nom[10];
        float temp;
        int   piezas;

    };

    struct HORNO h[5]={{"horno 1",123.5,23},{"horno 2",189.75,58},{"horno3",178.5,58},{"horno4",103.25,38},{"horno 5",155.15,43}};
    
    struct HORNO h1;

    fp =fopen ("horno.bin","wb"); /* apertura en modo lectura */

    if(fp != NULL)
    {
        i=0;
        while( i<5 ) /* ingreso los datos */
        {
            fwrite(&h[i],sizeof(struct HORNO),1,fp);
            i++;
        }
        fclose(fp); /* cierre del archivo */
    }
    else{
        printf("Error de apertura\n");
    }

    fp=fopen("horno.bin","rb");/*lectura*/
    if(fp != NULL)
    {
        printf("lectura de hornos \n");
        fread(&h1,sizeof(h1),1,fp);
        while(!feof(fp))
        {
            printf("horno : %s \n",h1.nom);
            printf("temp : %.2f \n",h1.temp);
            printf(" piezas : %d \n",h1.piezas);
            fread(&h1,sizeof(h1),1,fp);
        }
        fclose(fp);
    }

    return 0;
}