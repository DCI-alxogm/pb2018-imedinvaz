#include<stdio.h>

#include<stdlib.h>

float cubo(float h);

	int main(int argc,char *argv[]){



	printf("el programa que estas ejecutando es: %s\n",argv[0]);

	char *nombre_archivo;



	int a,b;

	FILE *fp;

	if(argc==7){

	a=atoi(argv[1]);
	float Xin[a],Yin[a],Zin[a],aum;

	Xin[0]=atof(argv[2]);//convierte la cadena de caracteres a flotante;

	Yin[0]=atof(argv[3]);

	Zin[0]=atof(argv[4]);
	aum=atof(argv[5]);

	nombre_archivo=argv[6];

	printf("El nombre del archivo a abrir es: %s\n",nombre_archivo);

	fp= fopen(nombre_archivo,"w+");

	

	for(b=1;b<=a;b++){

    Xin[b]= Xin[b-1]+aum;

	Yin[b]=Yin[b-1]+aum;

	Zin[b]=Zin[b-1]+aum;	



	



	

	}
	for(b=0;b<=a;b++){
	fprintf(fp,"%f %f %f\n",Xin[b],Yin[b],Zin[b]);

	}
	fclose(fp);

	}

	else if(argc>7){

		printf("Mas argumentos de los necesarios");

	}

	else{

		printf("Se requieren 5 argumentos: num_puntos, Xin, Yin, Zin, aumento_de_puntos, nombre_archivo\n");

	}

return 0;

}
