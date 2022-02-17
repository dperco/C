#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int vectorA[20];
int vectorB[5];
int i;
int j;

for(i=0;i<20;i++)
{
    vectorA[i]= 0;
    
}


srand(time(NULL));
for(i=0;i<10;i++)
 {
     vectorA[i]= rand()%100;
     
 }
 for(i=0;i<20;i++)
{
   printf("\n");
   printf("%d", vectorA[i]);

}
j=0;
for(i=10;i<20;i++)
{
   vectorA[i]= 2 * vectorA[j];
   j++;
}
 for(i=0;i<20;i++)
{
   printf("\n");
   printf("%d", vectorA[i]);

}

return 0;
}