#include<stdio.h>
#include<math.h>

int main()
{
float x,y,z,t,u;
float const PI=3.1415926536;
printf("este programa evalua un valor en diferentes funciones\n inserta el valor");
scanf("%f", & x);
y = exp(x);
t= x*(PI/180);
z = cos(t)+2*tan(t/2);
u = log(x)+3*x*x;

printf("%f = exponente(%f)\n",y,x);
printf("%f = %f rad\n",t,x);
printf("%f = cos(%f)+2tan(%f/2)\n",z,t,t);
printf("%f =log(%f)+3(%f)\n",u,x,x);

return(0);
}
