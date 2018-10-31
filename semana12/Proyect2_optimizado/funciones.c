#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "proyect.h"
	void oper(char nombre[255],int la, int lb,int l, int u, int r, int d,int e){//funcion madre
	char j[1];//definir las mismas variables para usarlas de la misma manera que corresponden a como fueron introducidas
	char numc[255],nombre2[255]="";
	int b,c,numi;	
	float A[la][lb],V,con;
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
		numi++; //contador para el nombre del archivo segun la iteracion
		sprintf(numc,"%i",numi ); //convertir contador en string en cada repeticion para su uso en el nombre de cada archivo de iteracion
		V=A[(la-1)/2][(lb-1)/2];//guardar valor de iteracion anterior
		for(b=1;b<(la-1);b++){//asignacion de valores para cada iteracion
			for(c=1;c<(lb-1);c++){
				
	   			//puntos del centro 
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
		con=((A[(la-1)/2][(lb-1)/2]-V)/A[(la-1)/2][(lb-1)/2]);//calcular error en la iteracion para su evaluacion en el ciclo
	
}	
	}
	void operx(){
	FILE *o;
	int la,lb,b,c,numi=1;
	float e,kk;
	char nombre[255],nombre2[255],numc[255];
	printf("\ninserta el nombre del archivo en el que se guardan los datos,no te olvides de la extension:  "); //pedir y escanear debidamente los valores necesarios para el calculo
	scanf("%s",&nombre);
	printf("\ninserta la medida del primer lado  de la superficie:  ");
	scanf("%d",&la);
	printf("\ninserta la medida del segundo lado de la superficie:  ");
	scanf("%d",&lb);
	printf("\nInserta el valor erroneo en el que desees despreciar:  ");
	scanf("%f",&e);	
	float A[la][lb],V,con;
		o=fopen(nombre,"r");
			for(b=0;b<la;b++){
		for(c=0;c<lb;c++){
			fscanf(o,"%f",&A[b][c]);
		}
	}
		fclose(o);
	V=A[(la-1)][(lb-1)]+A[(la-1)][(lb-1)];//calcular un valor real para su uso en el siguiente calculo

	con=((V-A[(la-1)][(lb-1)])/V);//dar un valor para iniciar ciclo

	strcat(nombre2,nombre);//concatenar string para nombrar las diferentes iteraciones con nombre comun

	while(con>e){
		printf("1");
		numi++; //contador para el nombre del archivo segun la iteracion
		sprintf(numc,"%i",numi ); //convertir contador en string en cada repeticion para su uso en el nombre de cada archivo de iteracion
		V=A[(la-1)/2][(lb-1)/2];//guardar valor de iteracion anterior
		for(b=1;b<(la-1);b++){//asignacion de valores para cada iteracion
			for(c=1;c<(lb-1);c++){
				
	   			//puntos del centro 
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
		con=((A[(la-1)/2][(lb-1)/2]-V)/A[(la-1)/2][(lb-1)/2]);//calcular error en la iteracion para su evaluacion en el ciclo
}
		
		
}
