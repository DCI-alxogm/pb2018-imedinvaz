#include<stdio.h>

	int main(int argc,char *argv[]){

	printf("el programa que estas ejecutando es: %s\n",argv[0]);
	char *nombre_archivo;
	FILE *fp;

	if(argc==2){
	nombre_archivo=argv[1];
		printf("El nombre del archivo a abrir es: %s\n",nombre_archivo);
		fp= fopen(nombre_archivo,"w+");
	//aqui se pondrá todo lo que se quiere hacer...
	fclose(fp);
	}
	else if(argc>2){
		printf("Mas argumentos de los necesarios");
	}
	else{
		printf("Se requiere al menos un argumento\n");
	}
return 0;
}
