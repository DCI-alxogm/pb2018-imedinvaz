#include <stdio.h>
#include<math.h>


int main() 
{

	int a,h=0,j,i,k;
	char s[1];
	s[0]='s';
	while(s[0]=='s')
	{
	printf("inserta el valor del cual quieres calcular su factorial");
	scanf("%i",&a);
	j=a/2;
	for(i=0;i<j;i++)
	{
		h=a*(a-1);
		a=a-2;
	 k=k*h;
	}
	printf("factorial= %i\n si quieres volver a usar el programa inserta si, en caso contrario inserta no",k);
	scanf("%s",s);
	}
	return 0;
}
