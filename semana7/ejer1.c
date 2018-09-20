#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
float a,b,f,c,e,d,I,h,g,sum=0,func;
	int P,N,k,i;
	FILE *entrada;
	FILE *salida;
	entrada= fopen("dats.txt","r");
	fscanf(entrada,"%i %f %f %i %i",&P,&a,&b,&N,&k);
	fclose(entrada);
    salida= fopen("res.txt","w");
	f=(b-a)/N; //f es el valor en aumento que tiene que tomar para llegar al limite deseado
	e=a; // no modificar a
	fprintf(salida,"min            f(x)                h               sum            func           integral\n");
	for(c=0;c<=f;c++)
	{
	
	d=pow(e,P);	
	fprintf(salida,"%f\t",e);
	fprintf(salida,"%f\t",d);
	e=e+N;
	
	h=((d-a)/k);
	for(i=0;i<=k-1;i++){
		g=a+i*h;
	sum=sum+g;
	}
	func=(d+a)/2;
	fprintf(salida,"%f\t",h);
	fprintf(salida,"%f\t",sum);
	fprintf(salida,"%f\t",func);
	I= h*(sum+func);
	fprintf(salida,"%f\n",I);
	
	
	
	}
	fclose(salida);
	return 0;
}
