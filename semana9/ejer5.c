#include<stdio.h>
void cuadrado(float x);

int main(){
	float x;
	printf("introduce un numero\n");
	scanf("%f",&x);
	cuadrado(x);
return 0;
}
void cuadrado(float i){
	float x2;
	x2=i*i;
	printf("el cuadrado de %f es %f\n",i,x2);
}
