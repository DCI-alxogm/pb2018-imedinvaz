#include <stdio.h>
#include<math.h>


int main() 
{

	float x,espaciado,n,i,t,b,a,h=0,l=0,s=0,m=0,j=0;
	FILE *res;
	printf("inserta el valor minimo entre el que quieres evaluar el valor");
	scanf("%f",&a);
	printf("inserta el valor maximo entre el que quieres evaluar el valor");
	scanf("%f",&b);
	t=b-a;
	printf("inserta el valor del espaciado que quieres tener entre cada evaluación");
	scanf("%f",&espaciado);
		n= t/espaciado;
	
	res=fopen("resultadosfunciones.txt","w");
	fprintf(res,"a         exponente  logaritmo     seno     coseno     raiz\n");
	for(i=0;i<n;i++)
	{
	
		h=exp(a);
		l=log(a);
		s=sin(a);
		m=cos(a);
		j=sqrt(a);	
		fprintf(res,"%f %f %f %f %f %f\n",a,h,l,s,m,j);
		a=a+espaciado;
	}
	fclose(res);


	return 0;
}
