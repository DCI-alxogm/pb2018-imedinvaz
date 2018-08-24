#include <stdio.h>
#include<math.h>
 int main()
{
int w,l;
float a,r,b,x,y,z,u,e,d,f,t,h,p;
 printf("ingresa un numero segun lo que quiras hacer\n1 calcular coordenadas esfericas con cartesianas\n2 convertir grados centigrados en kelvin y Farenheit");
scanf("%i",&w);
 switch(w){
	case 1:
		printf("este programa convierte coordenadas cartesianas a polares y despues la vuelve a convertir a cartesianas\n inserta el cuadrante en el que se encuentran las coordenadas\n1\n2\n3\n4\n");
		scanf("%i",&l);
		switch(l){
			case 1: 
				printf("inserte unicamente la coordenada x sin signo");
				scanf("%f",&x);
				printf("inserte unicamente la coordenada y sin signo");
				scanf("%f",&y);
				r = sqrt(x*x+y*y);
				b = atan(y/x);
				printf("r = %f\nángulo= %f\n = %f\n",r,b);
				printf("y al pasarlas a cartesianas de nuevo\n");
				d= r*cos(b);
				e = r*sin(b);
				printf("x = %f\ny= %f\n",d,e);
				break;
				
			case 2:
				printf("inserte unicamente la coordenada x sin signo");
				scanf("%f",&x);
				printf("inserte unicamente la coordenada y sin signo");
				scanf("%f",& y);
				r = sqrt(x*x+y*y);
				b = 180-atan(y/-x);
				printf("r = %f\nángulo= %f\n ",r,b);
				printf("y al pasarlas a cartesianas de nuevo\n");
				d= r*cos(b);
				e = r*sin(b);
				printf("x = %f\ny= %f\n",d,e);
				break;
			case 3:
				printf("inserte unicamente la coordenada x sin signo");
				scanf("%f",& x);
				printf("inserte unicamente la coordenada y sin signo");
				scanf("%f",& y);
				r = sqrt(x*x+y*y);
				b = 180+atan(y/x);
				printf("r = %f\nángulo= %f\n",r,b);
				printf("y al pasarlas a cartesianas de nuevo\n");
				d= r*cos(b);
				e = r*sin(b);
				printf("x = %f\ny= %f\n",d,e);
				break;
			case 4:
				printf("inserte unicamente la coordenada x sin signo");
				scanf("%f",& x);
				printf("inserte unicamente la coordenada y sin signo");
				scanf("%f",& y);
				r = sqrt(x*x+y*y);
				b = 360-atan(-y/x);
				printf("r = %f\nángulo= %f\n",r,b);
				printf("y al pasarlas a cartesianas de nuevo\n");
				d= r*cos(b);
				e = r*sin(b);
				printf("x = %f\ny= %f\n",d,e);
				break;
				
			default:
				printf("opción invalida");
				break;
		}
 	 
	   	 break;
 	case 2:
		printf("\neste programa convierte unidades de temperatura en°C\n inserte la cifra que desea convertir:");
		scanf( "%f", & t);
		h= (1.8*t)+ 32;
		p = (t + 273.15);
		printf("%f °F\n %f K\n",h,p);
 	         break;
 	default:
		printf("opcion invalida, vuelve a intantar");
 		break;
}
return 0;
}
