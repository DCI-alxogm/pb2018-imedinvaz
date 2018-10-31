#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "proyect.h"
int main(int argc,char *argv[]){
	printf("El programa que estas ejecutando es: %s creado por Irving Medina Vazquez\n\n\n",argv[0]);//darle al usuario nombre del programa, asi como su autor
	char j[1];
	char nombre[255]="",numc[255],nombre2[255];
	int la,lb,b,c;
	float e,l,u,d,r,V,con;
	unsigned int numi=1;
	FILE *o;
	if(argc==9){//leer desde linea de comandos
		strcat(nombre,argv[1]);//leer nombre del archivo
		la=atoi(argv[2]);//convertir a entero la medida de los lados
		lb=atoi(argv[3]);
		l=atof(argv[4]);//convierte la cadena de caracteres a flotante para las temperaturas;
		u=atof(argv[5]);
		r=atof(argv[6]);
		d=atof(argv[6]);
		e=atof(argv[6]);
		oper(nombre,la,lb,l,u,r,d,e);//usar funcion madre
	}
	else if(argc>9){//mostrar al usuario los argumentos correctos 
		printf("Mas argumentos de los necesarios, Se requieren 8 argumentos solamente en el siguiente orden seguidos de un espacio:\n Nombre del archivo a guardar\nMedida de un lado (deberán ser enteros)\nMedida del otro lado\nTemp. lado izquierdo\nTemp. lado superior\nTemp. lado derecho\nTemp. lado inferior");
	}
	else{//darle opciones al usuario para mas comfort si no puede dar argumentos en linea de comando
		printf("El programa tiene la opcion de iniciarse de varias maneras\nInserta:\n\n a Para cerrarlo y que lo vuelvas a ejecutar dando los argumentos: \n 		-Nombre del archivo a guardar\n		-Medida de un lado (deberán ser enteros)\n		-Medida del otro lado\n		-Temp. lado izquierdo\n		-Temp. lado superior\n		-Temp. lado derecho\n		-Temp. lado inferior\n		-Minimo error deseado\n\n b Para ejecutarlo con valores predefinidos en el archivo datos.txt\n\n c Para continuar con el programa insertando los datos a continuación.\n\n x opcion extra que te permite usar una matriz de temperaturas ya definidas en un archivo a saleccionar");
scanf("%s",&j);//escanear variable para iniciar programa de diferente forma
		if(j[0]=='a'){//cerrar el programa con return 0
		printf("el programa se cierra");
		return 0;
			}
		else if(j[0]=='b'){//leer datos desde determinado archivo
		printf("el programa lee desde un archivo\n");
		char t[255];
		o=fopen("datos.txt","r");
		fgets(t,255,o);//leer la linea donde se especifican las variables en el archivo para omitir rn calculo
		fscanf(o,"%s %d %d %f %f %f %f %f",&nombre,&la,&lb,&l,&u,&r,&d,&e);	//leer las variables
		fclose(o);
		oper(nombre,la,lb,l,u,r,d,e);//usar funcion madre

			}

		else if(j[0]=='c'){//ejecutar programa desde dentro interactuando mayormente con el usuario
		printf("El programa pide los valores\n\n");
			printf("\ninserta el nombre del archivo en el que se guardar\'an los datos:  "); //pedir y escanear debidamente los valores necesarios para el calculo
	scanf("%s",&nombre);
	printf("\ninserta la medida del primer lado  de la superficie:  ");
	scanf("%d",&la);
	printf("\ninserta la medida del segundo lado de la superficie:  ");
	scanf("%d",&lb);
	printf("\ninserta el valor de la temperatura para el borde izquierdo:  ");
	scanf("%f",&l);
	printf("\ninserta el valor de la temperatura para el borde superior:  ");
	scanf("%f",&u);
	printf("\ninserta el valor de la temperatura para el borde derecho:  ");
	scanf("%f",&r);
	printf("\ninserta el valor de la temperatura para el borde inferior: ");
	scanf("%f",&d);
	printf("\nInserta el valor erroneo en el que desees despreciar:  ");
	scanf("%f",&e);	
	oper(nombre,la,lb,l,u,r,d,e);//ejecutar funcion madre
			}
		else if(j[0]='x'){
		operx();
		}
	}
return 0;
}
