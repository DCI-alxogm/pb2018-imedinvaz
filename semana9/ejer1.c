#include <stdio.h>
#include <stdlib.h>

      
int main() {
	FILE *dat;
	int sum=0,i;
	char A[255];
	float *ptr,m;

	dat=fopen("num_maximo.txt","r");
	while(fgets(A,255,(FILE*)dat)!=NULL){
		sum++;
	}
	fclose(dat);
	dat=fopen("num_maximo.txt","r");
	ptr=(float*)calloc(sum,sizeof(float));
	fscanf(dat,"%f",ptr);
	m=*ptr;
	for(i=0;i<sum-1;i++){
		fscanf(dat,"%f",ptr);
		if(m>*ptr){
			m=m;
		}
		else{
			m=*ptr;
		}	
		ptr++;
	}
printf("El numero mayor de la lista es: %f\n",m);
	fclose(dat);

    
	
	
	
	
	
	
	return 0;
}
