#include <stdio.h>
	float cuadrado(float h);
	int main(){
|		float x,x2;
		printf("introduce un nuero\n");
		scanf("%f",&x);
		x2=cuadrado(x);
		printf("el cuadrado de %f es %f\n",x,x2);
	return 0;
	}
	float cuadrado(float h){
	return h*h;
	}
