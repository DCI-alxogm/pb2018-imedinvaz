#include<stdio.h>
#include<stdlib.h>
float cubo(float h);
	int main(int argc,char *argv[]){

	printf("el programa que estas ejecutando es: %s\n",argv[0]);
	char *nombre_archivo;
	float Xin,Yin,Zin;
	int num,a,b;
	FILE *fp;
	if(argc==6){
	a=atoi(argv[1]);
	Xin=atof(argv[2]);//convierte la cadena de caracteres a flotante;
	Yin=atof(argv[3]);
	Zin=atof(argv[4]);
	nombre_archivo=argv[5];
	float xfin[a],yfin[a],zfin[a],cx=Xin/a,cy=Yin/a,cz=Zin/a;
	printf("El nombre del archivo a abrir es: %s\n",nombre_archivo);
	fp= fopen(nombre_archivo,"w+");
	
	for(b=0;b<a;b++){
	xfin[b]=Xin+cx;
	yfin[b]=Yin+cy;
	zfin[b]=Zin+cz;	

	fprintf(fp,"%f %f %f\n",xfin[b],yfin[b],zfin[b]);

	
	}

	fclose(fp);
	}
	else if(argc>6){
		printf("Mas argumentos de los necesarios");
	}
	else{
		printf("Se requieren 4 argumentos: num_final, Xin, Yin, Zin, nombre_archivo\n");
	}
return 0;
}

