#include<stdio.h>
#include<stdlib.h>

	int main(int argc,char *argv[]){

	printf("el programa que estas ejecutando es: %s\n",argv[0]);
	char *nombre_archivo;
	float Tin,Tfin;
	int num;
	FILE *fp;
	if(argc==5){
		Tin=atof(argv[1]);//convierte la cadena de caracteres a flotante;
		Tfin=atof(argv[2]);
		num=atoi(argv[3]);
		nombre_archivo=argv[4];
		printf("El nombre del archivo a abrir es: %s\n",nombre_archivo);
		fp= fopen(nombre_archivo,"w+");
		//aqui se pondrá todo lo que se quiere hacer...
		fclose(fp);
	}
	else if(argc>5){
		printf("Mas argumentos de los necesarios");
	}
	else{
		printf("Se requieren 4 argumentos: Tin, Tfin, num, nombre_archivo\n");
	}
return 0;
}
