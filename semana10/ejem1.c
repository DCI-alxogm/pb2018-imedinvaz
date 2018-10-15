#include<stdio.h>

	int main(int argc,char *argv[]){

	if(argc==2){
		printf("El argumento que se dio es: %s\n",argv[0]);
	}
	else if(argc>2){
		printf("Mas argumentos de los necesarios");
	}
	else{
		printf("Se requiere al menos un argumento\n");
	}
return 0;
}
