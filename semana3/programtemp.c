#include<stdio.h>

main() 

{

float t,h,y;
int a,u;

printf("\neste programa convierte unidades de temperatura en°C\n inserte la cifra que desea convertir:");
scanf( "%f", & t);

h= (1.8*t)+ 32;
y = (t + 273);
printf("%f °F\n %f K\n",h,y);



return(0);
}
