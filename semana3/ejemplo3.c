#include <stdio.h>
int main()
{
 	int a, b;
 	printf("Introduzca dos numero enteros: ");
	 scanf("%i %i", &a, &b);
 	if(a==b)
 	{
 		printf("Resultado: %i = %i",a,b);
 	}
 	else if (a>b)
 	{
 		printf("Resultado: %i > %i",a,b);
 	}
 	else
 	{
 		printf("Result: %i < %i",a,b);
 	}	
 return 0;
}
