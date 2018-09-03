#include<stdio.h>

int main()
{
	float temp_c, temp_k;
	float Temp_c, final,delta;
	int n,i;
	char cd[2]

	cd[0]='s';
	printf("inserta el número de pasos\n");
	scanf("%i",&n);
	printf("inserta la temperatura inicial\n");
	scanf("%f",&Temp_c);
	printf("inserta la temperatura final\n");
	scanf("%f",&final);

	delta=(final-Temp_c)/n;
	for(i=0;i<n;i++)
	{
		temp_k=temp_c+273.15;
		printf("%f %f\n",temp_c,temp_k);
		temp_c=temp_c+delta;
	}
return 0;
}
