#include <stdio.h>
#include <stdlib.h>

int main(){
 	int i, sum = 0;
 	int *ptr,num;
 	printf("Introduce 6 números enteros:\n");
 	ptr=(int*) malloc(num*sizeof(int)); 
	for(i = 0; i < 6; ++i){
 		scanf("%d",&ptr[i]);// (ptr + i) es equivalente a &ptr[i]
 		sum +=ptr[i]; // *(ptr + i) es equivalente a ptr[i]
 	}
 	printf("Suma = %d", sum);
 return 0;
}
