#include<stdio.h>
#include<stdlib.h>

	int main(int argc,char *argv[]){

	printf("el programa que estas ejecutando es: %s\n",argv[0]);
	char j[1];
	float Tbl,Tbd,Tbr,Tbu,E,l;
	if(argc==7){
		Tbl=atof(argv[1]);//convierte la cadena de caracteres a flotante;
		Tbd=atof(argv[2]);
		Tbr=atof(argv[3]);
		Tbu=atof(argv[4]);
		E=atof(argv[5]);
		l=atof(argv[6]);
printf("el programa tomó los valores adecuados");
	}
	else if(argc>7){
		printf("Mas argumentos de los necesarios, Se requieren 4 argumentos: Tin, Tfin, num, nombre_archivo");
	}
	else{
		printf("el programa tiene la opcion de iniciarse de varias, maneras inserta:\nA para cerrarlo y que lo vuelvas a ejecutar dando los argumentos ******\nB si quieres ejecutarlo con valores predefinidos en el archivo *****\n C si quieres continuar con el programa insertando los datos a continuación.\n");
scanf("%s",&j);
printf("%s",j);
		if(j='A'){
		printf("el programa se cierra");
		return 0;
			}
		else if(j[0]='B'){
		printf("el programa lee desde un archivo");
			}
		else if(j[0]='C'){
		printf("el programa pide los valoes");
			}
	}
return 0;
}
