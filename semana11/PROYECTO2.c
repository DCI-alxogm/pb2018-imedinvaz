#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string.h>
	void oper(char nombre[255],int la, int lb,int l, int u, int r, int d,int e);
	int main(int argc,char *argv[]){
	printf("El programa que estas ejecutando es: %s creado por Irving Medina Vazquez\n\n\n",argv[0]);//darle al usuario nombre del programa, asi como su autor
	char j[1];
	char nombre[255],numc[255],nombre2[255];
	int la,lb,b,c;
	float e,l,u,d,r,V,con;
	unsigned int numi=1;
	FILE *o;
	if(argc==9){//leer desde linea de comandos
		*nombre=argv[1];//leer nombre del archivo
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
		printf("El programa tiene la opcion de iniciarse de varias maneras\nInserta:\n\n a Para cerrarlo y que lo vuelvas a ejecutar dando los argumentos: \n 		-Nombre del archivo a guardar\n		-Medida de un lado (deberán ser enteros)\n		-Medida del otro lado\n		-Temp. lado izquierdo\n		-Temp. lado superior\n		-Temp. lado derecho\n		-Temp. lado inferior\n		-Minimo error deseado\n\n b Para ejecutarlo con valores predefinidos en el archivo datos.txt\n\n c Para continuar con el programa insertando los datos a continuación.\n");
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
	}
return 0;
}
	void oper(char nombre[255],int la, int lb,int l, int u, int r, int d,int e){//funcion madre
	char j[1];//definir las mismas variables para usarlas de la misma manera que corresponden a como fueron introducidas
	char numc[255],nombre2[255]="";
	int b,c,numi;	
	float A[la][lb],V,con,kk;
	FILE *o;
	for(b=0;b<la;b++){// iniciar en 0 los puntos 
		for(c=0;c<lb;c++){
	       A[b][c]=0;	
		}	
	}
	for(b=0;b<la;b++){//dar valores al estado inicial
		for(c=0;c<lb;c++){
			if(b==(la-1)&&c==(lb-1)){//condicional para esquinaderabajo
				A[b][c]=(d+r)/2;
			}
			else if(b==0&&c==0){//condicional para esquinaizqarriba
				A[b][c]=(u+l)/2;
			}
			else if(b==0&&c==(lb-1)){//condicional para esquinaesquinaderarrib
				A[b][c]=(u+r)/2;
			}
			else if(b==(la-1)&&c==0){//condicion esquinaizqabajo
				A[b][c]=(l+d)/2;
			}		
			else if(b==0){//condicion fila arriba
				A[b][c]=u;
			}
			else if(b==(la-1)){//condicion fila abajo
	       		A[b][c]=d;
	   		}
			else if(c==(lb-1)){//condicion columna derecha
				A[b][c]=r;
	   		}
			else if(c==0){//condicion columna izquierda
	       A[b][c]=l;
	   		}
	   		else{//dejar demas valores en 0
	   		A[b][c]=0;
	   		}
		}
	}
	strcat(nombre2, nombre);//concatenar cadenas de caracteres para su uso en el nombre del archivo
	strcat(nombre," en estado inicial.txt");
			o= fopen(nombre,"w+");
	fprintf(o,"Estado inicial\n",nombre);
	for(b=0;b<la;b++){//imprimir valores anteriores en archivo de estado inicial
		for(c=0;c<lb;c++){
			fprintf(o,"%f\t",A[b][c]);			
		}
		fprintf(o,"\n");
	}
	fclose(o);			
	V=A[(la-1)][(lb-1)]+A[(la-1)][(lb-1)];//calcular un valor real para su uso en el siguiente calculo
	con=((V-A[(la-1)][(lb-1)])/V);//dar un valor para iniciar ciclo
	strcat(nombre2,".txt");//concatenar string para nombrar las diferentes iteraciones con nombre comun
	while(con>e){
	printf("1\n");
		sprintf(numc,"%i",numi ); //convertir contador en string en cada repeticion para su uso en el nombre de cada archivo de iteracion
		V=A[(la-1)][(lb-1)];//guardar valor de iteracion anterior
		for(b=1;b<(la-1);b++){//asignacion de valores para cada iteracion
			for(c=1;c<(lb-1);c++){
				
	   			//demas puntos del centro que no necesitan condicion
					A[b][c]=(A[b+1][c]+A[b-1][c]+A[b][c-1]+A[b][c+1])/4;			
				
			}
		}
		strcat(numc,".-");//concatenar string para nombramiento del archivo de cada iteracion para mejor vista y orden	
		strcat(numc,nombre2);//concatenar string para nombramiento final del archivo de la iteracion correspondiente
		
		o= fopen(numc,"w+");//abrir el archivo nombrandolo con la suma de concatenaciones
		fprintf(o,"Iteración %d\n",numi);//escribir dentro del archivo la iteracion en la que se dio esos valores
		for(b=0;b<la;b++){//impresion de datos en las diferentes iteraciones
			for(c=0;c<lb;c++){
				fprintf(o,"%f\t",A[b][c]);			
			}
			fprintf(o,"\n");
		}
		fclose(o);
		kk=((A[(la-1)/2][(lb-1)/2]-V)/A[(la-1)/2][(lb-1)/2]);//calcular error en la iteracion para su evaluacion en el ciclo
		con=abs(kk);
		printf("%f",con);
		numi++; //contador para el nombre del archivo segun la iteracion
}	
	}
	
