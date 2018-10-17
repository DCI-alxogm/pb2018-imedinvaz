
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
void velocidad(float Pin,float Pfin,float T);
	printf("el programa que estas ejecutando es: %s\n",argv[0]);
	float Pin,Pfin,T;
	int num;
	if(argc==4){
		Pin=atof(argv[1]);//convierte la cadena de caracteres a flotante;
		Pfin=atof(argv[2]);
		T=atof(argv[3]);
		velocidad(Pin,Pfin,T);
	}
	else if(argc>4){
		printf("Mas argumentos de los necesarios");
	}
	else{
		printf("El programa calcula la velocidad de un objeto, se requieren 3 argumentos: posicion inicial, posicion final, tiempo\n");
	}
return 0;
}
