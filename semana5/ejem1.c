#include<stdio.h>

int main()
{

	float Temp_C,final,delta,temp_K;
	int n,i;
	char cd[2];

	
	cd[0]='s';
	while(cd[0]=='s')
	{
		
		
		
		printf("inserta la temperatura inicial\n");
		scanf("%f",&Temp_C);
		printf("inserta la temperatura final\n");
		scanf("%f",&final);
		printf("inserta el número de pasosque deseas hacer para llegar a la temperatura final\n");
		scanf("%i",&n);
		delta=(final-Temp_C)/n;
		for(i=0;i<=n;i++)
		{
			temp_K=Temp_C+273.15;
			printf("%f %f\n",Temp_C,temp_K);
			Temp_C=Temp_C+delta;
		}
		printf("deseas hacer otra conversion? (si/no)\n");
		scanf("%s",&cd);
	}
	return 0;
}
	
