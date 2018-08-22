#include<stdio.h>
#include<math.h>

int main()
{
int w;
float a,r,b,x,y,z,u,e,d,f,t,h,p;


printf("ingresa un numero segun lo que quiras hacer\n1 calcular coordenadas esfericas con cartesianas\n2 convertir grados centigrados en kelvin y Farenheit");
scanf("%i",&w);

switch(w){
	case 1:
		printf("este programa convierte coordenadas cartesianas a esfericas y despues la 			vuelve a convertir a cartesianas\n inserta la coordenada x\n");
		scanf("%f",& x);
		printf("\n inserta la coordenada y\n");
		scanf("%f",& y);
		printf("\n inserta la coordenada z\n");
		scanf("%f", &z);
		r = sqrt(x*x+y*y+z*z);
		u = sqrt(x*x+y*y);
		a = atan(u/z);
		b = atan(y/x);
		printf("r = %f\na= %f\n b= %f\n",r,a,b);
		printf("y al pasarlas a cartesianas de nuevo\n");
		d= r*sin(a)*cos(b);
		e = r*sin(a)*sin(b);
		f = r*cos(a);
		printf("x = %f\ny= %f\n z= %f\n",d,e,f);

	 
	   	 break;

	case 2:
		printf("\neste programa convierte unidades de temperatura en°C\n inserte la cifra 			que desea convertir:");
		scanf( "%f", & t);
		h= (1.8*t)+ 32;
		p = (t + 273);
		printf("%f °F\n %f K\n",h,y);

	         break;

	default:
		printf("opcion invalida, vuelve a intantar");

		break;
}
return 0;
}
