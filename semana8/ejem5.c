#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *ptr, i , n1, n2;
	printf("Introduce el numero de elementos n1: ");
	scanf("%d", &n1);
	printf("\nIntroduce el nuevo numero de elementos n2: ");
	scanf("%d", &n2);
	ptr = (int*) malloc(n1 * sizeof(int));
 	printf("Dirección de la memoria reservada para n1\n: ");
	for(i = 0; i < n1; ++i){
 		printf("%x\t",ptr + i);
 	}
 	ptr = realloc(ptr, n2); 
 	printf("\nDirección de la memoria reservada para n2\n: ");
  	for(i = 0; i < n2; ++i){
 		printf("%u\t", ptr + i);
	}
	free(ptr);
 return 0;
}
