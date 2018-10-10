#include <stdio.h>

	void cuadrado();
	int main(){
		cuadrado();
		return 0;
	}
	void cuadrado(){
	float x,x2;
	printf("introduce un numero\n");
	scanf("%f",&x);	
	x2=x*x;
	printf("el cuadrado de %f es: %f",x,x2);

	}
