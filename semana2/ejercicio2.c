#include<stdio.h>
int main()



{

int a;
int b;
int c;
int d;
float e;
float f;
float g;
float h;



printf("este programa muestra una serie de operaciones con 4 numeros enteros\n introduce el primer numero: ");
scanf("%i",&a);
printf("\nintroduce el segundo numero\n");
scanf("%i",&b);
printf("\nintroduce el tercer numero\n");
scanf("%i",&c);
printf("\nintroduce el cuarto numero\n");
scanf("%i",&d);

e = (a+b)*c/d;
f = ((a+b*c))/d;
g= (a+b)*c/d;
h = a+(b*c)/d;

printf ("%f = (%i + %i)*%i/%i \n",e,a,b,c,d);
printf ("%f = ((%i + %i)*%i)/%i \n",f,a,b,c,d);
printf ("%f = (%i + %i)*%i/%i \n",g,a,b,c,d);
printf ("%f = %i + (%i*%i)/%i \n",h,a,b,c,d);
return(0);
}
