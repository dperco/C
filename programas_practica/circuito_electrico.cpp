#include<stdio.h>

#include<unistd.h>
#include<math.h>

int resist_serie(int R1,int R2);
float resist_paral(int R1,int R2);
float corriente(int V , int RS,float RP);

int main(){
	 int V;
	 float I;
	int RA;
	int RB;
	int RS;
	float RP;
	int Serie;
	float paralel;
	RA=10;
	RB=10;
	V= 5;
	Serie= resist_serie(RA,RB);
	
	printf("La  resist total serie es= %d  ohms \n\n",Serie);
	
	paralel= resist_paral(RA,RB);
	
	printf("La resist tot paralelo es= %.2f   ohms  \n\n",paralel);
	
	I= corriente (V,RS,RP);
	
	printf("la corriente del circuito I es: %.2f  Amp", I);
	
	
	
	return 0;
}

int resist_serie(int R1,int R2){
	
int  RS;

RS=R1+R2;



return RS;
	
		
}

float resist_paral(int R1,int R2){

float RP;

RP= 1.0/( (1.0/R1)+(1.0/R2) );

return RP;



}

float corriente (int V,int RS,float RP){
	
	float inten;
	
	inten= V/(RS+RP);
	
	return inten;
}


