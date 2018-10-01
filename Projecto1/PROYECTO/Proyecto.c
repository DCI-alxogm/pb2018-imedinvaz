#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main() {
	
	double Xo,Yo,Zo,VXo,VYo,VZo,d;//declaración de variables tipo double float
	float TT,h,j,i;//declaración de variables tipo float
	const double G=(4)*pow(3.14159265359,2);//declaración y calculo de la constante de la gravitación  
	char lin[255],s[2];//declaración de variables tipo char
	FILE *en;//declaración de variable para el archivo
	int p;//declaración de variable entera(ciclo switch)
	
	s[0]='s';//para iniciar el while
	while(s[0]=='s'){//while para preguntar al usuario si desea repetir el programa
		printf("Este programa calcula la trayectoria que sigue cada planeta al dar una vuelta al sol (ademas de pluton) representado en un eje coordenado y lo guarda en la carpeta de origen, en el documento se mostraran 7 columnas que corresponden respectivamente a:\nposicion en: x y z, velocidad en x y z, distancia al sol.\nPara elegir el planeta inserta:\n1 para Mercurio.\n2 para Venus\n3 para La Tierra.\n4 para Marte.\n5 para Jupiter.\n6 para Saturno.\n7 para Urano.\n8 para Neptuno.\n9 para Pluton\n ");//mensaje al usuario	
		scanf("%i",&p);//escanéo de la variable para definir el planeta a revisar con el ciclo switch
		switch(p){
			case 2:	
				en=fopen("datvenus.txt","r");//abrir archivo correspondiente al planeta
					fgets(lin,255,en);//leer la primera linea de descripción en el archivo
					fscanf(en,"%lf %lf %lf %lf %lf %lf %f %f",&Xo,&Yo,&Zo,&VXo,&VYo,&VZo,&TT,&h);//escanear las variables del planeta elegido
				fclose(en);//cerrar archivo
				printf("Elegiste Venus\n");//mensaje al usuario, comodidad de que eligio el planeta adecuado
				VXo=(VXo*365.25);//conversión de unidades
				VZo=(VZo*365.25);
				VYo=(VYo*365.25);
				j=TT/h;//calculo del valor del total de repeticiones que se harán en el ciclo for
				en=fopen("venus.txt","w");//abrir un nuevo archivo para la escritura de los datos
   					for(i=0;i<=j;i++){
						Xo=(Xo+VXo*h);//reasignacion de la variable y calculo de las posicionesy  
						Yo=(Yo+VYo*h);
						Zo=(Zo+VZo*h);
						d=sqrt(pow(Xo,2)+pow(Yo,2)+pow(Zo,2));//calculo de la nueva distancia
						VXo=VXo-h*(G*Xo/(pow(d,3)));//calculo y reasignacion de la variable para las velocidades
						VYo=VYo-h*(G*Yo/(pow(d,3)));
						VZo=VZo-h*(G*Zo/(pow(d,3)));
						fprintf(en,"%lf %lf %lf %lf %lf %lf %f\n",Xo,Yo,Zo,VXo,VYo,VZo,d);//imprimir en el archivo cada repetición el valor obtenido posicion, velocidad  y distancia	 
					}
				fclose(en);//cerrar el archivo
			break;

			case 1:	
				en=fopen("datmercurio.txt","r");
					fgets(lin,255,en);
					fscanf(en,"%lf %lf %lf %lf %lf %lf %f %f",&Xo,&Yo,&Zo,&VXo,&VYo,&VZo,&TT,&h);
				fclose(en);
				printf("Elegiste mercurio\n");
				VXo=(VXo*365.25);
				VZo=(VZo*365.25);
				VYo=(VYo*365.25);
				j=TT/h;
				en=fopen("mercurio.txt","w");
   					for(i=0;i<=j;i++){
						Xo=(Xo+VXo*h);
						Yo=(Yo+VYo*h);
						Zo=(Zo+VZo*h);
						d=sqrt(pow(Xo,2)+pow(Yo,2)+pow(Zo,2));
						VXo=VXo-h*(G*Xo/(pow(d,3)));
						VYo=VYo-h*(G*Yo/(pow(d,3)));
						VZo=VZo-h*(G*Zo/(pow(d,3)));
					}
				fclose(en);			
			break;		
			case 3:	
				en=fopen("dattierra.txt","r");
					fgets(lin,255,en);
					fscanf(en,"%lf %lf %lf %lf %lf %lf %f %f",&Xo,&Yo,&Zo,&VXo,&VYo,&VZo,&TT,&h);
				fclose(en);
				printf("Elegiste La Tierra\n");
				VXo=(VXo*365.25);
				VZo=(VZo*365.25);
				VYo=(VYo*365.25);
				j=TT/h;
				en=fopen("tierra.txt","w");
   					for(i=0;i<=j;i++){
						Xo=(Xo+VXo*h);
						Yo=(Yo+VYo*h);
						Zo=(Zo+VZo*h);
						d=sqrt(pow(Xo,2)+pow(Yo,2)+pow(Zo,2));
						VXo=VXo-h*(G*Xo/(pow(d,3)));
						VYo=VYo-h*(G*Yo/(pow(d,3)));
						VZo=VZo-h*(G*Zo/(pow(d,3)));
						fprintf(en,"%lf %lf %lf %lf %lf %lf %f\n",Xo,Yo,Zo,VXo,VYo,VZo,d);	 
					}
				fclose(en);			
			break;
		
			case 4:	
				en=fopen("datmarte.txt","r");
					fgets(lin,255,en);
					fscanf(en,"%lf %lf %lf %lf %lf %lf %f %f",&Xo,&Yo,&Zo,&VXo,&VYo,&VZo,&TT,&h);
				fclose(en);
				printf("Elegiste Marte\n");
				VXo=(VXo*365.25);
				VZo=(VZo*365.25);
				VYo=(VYo*365.25);
				j=TT/h;
				en=fopen("marte.txt","w");
   					for(i=0;i<=j;i++){
						Xo=(Xo+VXo*h);
						Yo=(Yo+VYo*h);
						Zo=(Zo+VZo*h);
						d=sqrt(pow(Xo,2)+pow(Yo,2)+pow(Zo,2));
						VXo=VXo-h*(G*Xo/(pow(d,3)));
						VYo=VYo-h*(G*Yo/(pow(d,3)));
						VZo=VZo-h*(G*Zo/(pow(d,3)));
						fprintf(en,"%lf %lf %lf %lf %lf %lf %f\n",Xo,Yo,Zo,VXo,VYo,VZo,d);	 
					}
				fclose(en);			
			break;
		
			case 5:	
				en=fopen("datjupiter.txt","r");
					fgets(lin,255,en);
					fscanf(en,"%lf %lf %lf %lf %lf %lf %f %f",&Xo,&Yo,&Zo,&VXo,&VYo,&VZo,&TT,&h);
				fclose(en);
				printf("Elegiste Jupiter\n");
				VXo=(VXo*365.25);
				VZo=(VZo*365.25);
				VYo=(VYo*365.25);
				j=TT/h;
				en=fopen("jupiter.txt","w");
   					for(i=0;i<=j;i++){
						Xo=(Xo+VXo*h);
						Yo=(Yo+VYo*h);
						Zo=(Zo+VZo*h);
						d=sqrt(pow(Xo,2)+pow(Yo,2)+pow(Zo,2));
						VXo=VXo-h*(G*Xo/(pow(d,3)));
						VYo=VYo-h*(G*Yo/(pow(d,3)));
						VZo=VZo-h*(G*Zo/(pow(d,3)));
						fprintf(en,"%lf %lf %lf %lf %lf %lf %f\n",Xo,Yo,Zo,VXo,VYo,VZo,d);	 
					}
				fclose(en);			
			break;
		
			case 6:	
				en=fopen("datsaturno.txt","r");
					fgets(lin,255,en);
					fscanf(en,"%lf %lf %lf %lf %lf %lf %f %f",&Xo,&Yo,&Zo,&VXo,&VYo,&VZo,&TT,&h);
				fclose(en);
				VXo=(VXo*365.25);
				VZo=(VZo*365.25);
				VYo=(VYo*365.25);
				printf("Elegiste Saturno\n");
				j=TT/h;
				en=fopen("saturno.txt","w");
   					for(i=0;i<=j;i++){
						Xo=(Xo+VXo*h);
						Yo=(Yo+VYo*h);
						Zo=(Zo+VZo*h);
						d=sqrt(pow(Xo,2)+pow(Yo,2)+pow(Zo,2));
						VXo=VXo-h*(G*Xo/(pow(d,3)));
						VYo=VYo-h*(G*Yo/(pow(d,3)));
						VZo=VZo-h*(G*Zo/(pow(d,3)));
						fprintf(en,"%lf %lf %lf %lf %lf %lf %f\n",Xo,Yo,Zo,VXo,VYo,VZo,d);	 
					}
				fclose(en);			
			break;
		
			case 7:	
				en=fopen("daturano.txt","r");
					fgets(lin,255,en);
					fscanf(en,"%lf %lf %lf %lf %lf %lf %f %f",&Xo,&Yo,&Zo,&VXo,&VYo,&VZo,&TT,&h);
				fclose(en);
				VXo=(VXo*365.25);
				VZo=(VZo*365.25);
				VYo=(VYo*365.25);
				printf("Elegiste Urano\n");
				j=TT/h;
				en=fopen("urano.txt","w");
   					for(i=0;i<=j;i++){
						Xo=(Xo+VXo*h);
						Yo=(Yo+VYo*h);
						Zo=(Zo+VZo*h);
						d=sqrt(pow(Xo,2)+pow(Yo,2)+pow(Zo,2));
						VXo=VXo-h*(G*Xo/(pow(d,3)));
						VYo=VYo-h*(G*Yo/(pow(d,3)));
						VZo=VZo-h*(G*Zo/(pow(d,3)));
						fprintf(en,"%lf %lf %lf %lf %lf %lf %f\n",Xo,Yo,Zo,VXo,VYo,VZo,d);	 
					}
				fclose(en);			
			break;
		
			case 8:	
				en=fopen("datneptuno.txt","r");
					fgets(lin,255,en);
					fscanf(en,"%lf %lf %lf %lf %lf %lf %f %f",&Xo,&Yo,&Zo,&VXo,&VYo,&VZo,&TT,&h);
				fclose(en);
				VXo=(VXo*365.25);
				VZo=(VZo*365.25);
				VYo=(VYo*365.25);
				printf("Elegiste Neptuno\n");
				j=TT/h;
				en=fopen("neptuno.txt","w");
   					for(i=0;i<=j;i++){
						Xo=(Xo+VXo*h);
						Yo=(Yo+VYo*h);
						Zo=(Zo+VZo*h);
						d=sqrt(pow(Xo,2)+pow(Yo,2)+pow(Zo,2));
						VXo=VXo-h*(G*Xo/(pow(d,3)));
						VYo=VYo-h*(G*Yo/(pow(d,3)));
						VZo=VZo-h*(G*Zo/(pow(d,3)));
					fprintf(en,"%lf %lf %lf %lf %lf %lf %f\n",Xo,Yo,Zo,VXo,VYo,VZo,d);	 
					}
				fclose(en);			
			break;
			case 9:	
				en=fopen("datpluton.txt","r");
					fgets(lin,255,en);
					fscanf(en,"%lf %lf %lf %lf %lf %lf %f %f",&Xo,&Yo,&Zo,&VXo,&VYo,&VZo,&TT,&h);
				fclose(en);
				VXo=(VXo*365.25);
				VZo=(VZo*365.25);
				VYo=(VYo*365.25);
				printf("Elegiste Pluton\n");
				j=TT/h;
				en=fopen("pluton.txt","w");
   					for(i=0;i<=j;i++){
						Xo=(Xo+VXo*h);
						Yo=(Yo+VYo*h);
						Zo=(Zo+VZo*h);
						d=sqrt(pow(Xo,2)+pow(Yo,2)+pow(Zo,2));
						VXo=VXo-h*(G*Xo/(pow(d,3)));
						VYo=VYo-h*(G*Yo/(pow(d,3)));
						VZo=VZo-h*(G*Zo/(pow(d,3)));
						fprintf(en,"%lf %lf %lf %lf %lf %lf %f\n",Xo,Yo,Zo,VXo,VYo,VZo,d);	 
					}
				fclose(en);			
			break;				
			default:
				printf("opcion invalida\n");//mostrarle al usuario cuando se equivocó al introducir el numero para un planeta 
			break;
}
		printf("¿Quieres volver a usar el programa?\n Inserta si o no\n");//preguntar al usuario si quiere volver a usar el programa
		scanf("%s",&s[0]);// leer la respuesta a la pregunta anterior para evaluar en el while

}
	return 0;
}
	



