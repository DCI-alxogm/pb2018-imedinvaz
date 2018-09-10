#include<stdio.h>

int main()
{
	int a,b=10,c;
	float numeros[b];
	printf("cuantos numeros quieres trabajar?");
	scanf("%i\n",&c);
	for(a=0;a<c;a++)
	{
		scanf("%f",&numeros[a]);
		numeros[a]*=2;
		printf("%f\n", numeros[a]);
	}

return 0;
}
