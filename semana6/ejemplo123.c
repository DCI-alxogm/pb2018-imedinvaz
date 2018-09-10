#include<stdio.h>

int main()

{
	int a,b,c,d=10;
	float numeros[d];
	for(a=0;a<d;a++)
	{
		numeros[a]=0;
	}

	for(b=0;b<d;b++)
	{
		scanf("%f",&numeros[b]);
	}
	for(c=0;c<d;c++)
	{
		printf("%f\n",numeros[c]);
	}
return 0;
}
