#include<stdio.h>
#include<stdlib.h>

int main(){

	int num,i,*ptr=NULL,sum=0;
	ptr = (int*)malloc(num*sizeof(int)); //memoria reservada usando malloc
	printf("introduce el numero de elementos");
	scanf("%d",&num);
	if(ptr==NULL){
		printf("ERROR!!!!!!! MEMORIA NO RESERVADA.");
		exit(0);
	}
	printf("introduce los elementos de el arreglo:");
	for(i=0;i<num;i++){
		scanf("%d",ptr+1);
		sum += *(ptr+1);			
	}
	printf("Sum = %d",sum);
	free(ptr);

return 0;
}
