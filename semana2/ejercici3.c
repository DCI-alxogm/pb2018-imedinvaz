#include<stdio.h>
int main()



{

float a;
float b;
float c;
float d;
float e;
float f;
float g;
float h;



printf("este programa muestra una serie de operaciones con 4 numeros reales\n introduce el primer numero: ");
scanf("%f",&a);
printf("\nintroduce el segundo numero");
scanf("%f",&b);
printf("\nintroduce el tercer numero");
scanf("%f",&c);
printf("\nintroduce el cuarto numero");
scanf("%f",&d);

e = (a+b)*c/d;
f = ((a+b*c))/d;
g= (a+b)*c/d;
h = a+(b*c)/d;

printf ("%f = (%f + %f)*%f/%f \n",e,a,b,c,d);
printf ("%f = ((%f + %f)*%f)/%f \n",f,a,b,c,d);
printf ("%f = (%f + %f)*%f/%f \n",g,a,b,c,d);
printf ("%f = %f + (%f*%f)/%f \n",h,a,b,c,d);
return(0);
}
