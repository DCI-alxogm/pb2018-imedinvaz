#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() {
	FILE *dat;
	float p,*ptr,suma=0,h,prom,d;
	char A[255];	
	int sum=0,i;
	dat=fopen("promedio.txt","r");
	while(fgets(A,255,(FILE*)dat)!=NULL){
		sum++;
	}
	fclose(dat);

	ptr=(float*)calloc(sum,sizeof(float));
		dat=fopen("promedio.txt","r");
	for(i=0;i<sum;i++){
		fscanf(dat,"%f",&ptr[i]);
		suma+=ptr[i];

	}
	fclose(dat);
	prom=suma/sum;
	for(i=0;i<sum;i++){
		h+=pow((ptr[i]-prom),2);
	}
	d=sqrt(h/sum);
	printf("EL promedio es igual a: %f\n",prom);	
	printf("La desviación estándar es: %f",d);
	
	
		return 0;
}
