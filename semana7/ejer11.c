#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float P=0,a=0,b=0,N=0,x,I=0,sum=0,f=0,c,e,d,h,i;
	int j,k=0;
	char linea[255];
	FILE *entrada;
	FILE *salida;
	entrada= fopen("inte.txt","r");
	fgets(linea,255,(FILE*)entrada);
	fscanf(entrada,"%f%f%f%f%f",&P,&a,&b,&N,&k);
	f=(b-a)/N; //f es el valor en aumento que tiene que tomar para llegar al limite deseado
	e=a; // no modificar a
	for(c=0;c<N;c++)
	{
	printf("%f",e);
	e=e+f;
	}
	
	
	fclose(entrada);



return 0;
}

