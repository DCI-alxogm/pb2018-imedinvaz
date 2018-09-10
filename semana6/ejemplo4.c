#include<stdio.h>

int main()
{
	int a,b=10;
	float numeros[b];
	for(a=0;a<b;a++)
	{
		scanf("%f",&numeros[a]);
		numeros[a]*=2;
		printf("%f\n", numeros[a]);
	}

return 0;
}
