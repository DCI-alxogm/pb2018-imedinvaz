#include<stdio.h>
#include<math.h>
 int main ()
{
float a,r,b,x,y,z,u,e,d,f;
printf("este programa convierte coordenadas cartesianas a esfericas y despues la vuelve a convertir a cartesianas\n inserta la coordenada x\n");
scanf("%f",& x);
printf("\n inserta la coordenada y\n");
scanf("%f",& y);
printf("\n inserta la coordenada z\n");
scanf("%f", &z);
r = sqrt(x*x+y*y+z*z);
u = sqrt(x*x+y*y);
a = atan(u/z);
b = atan(y/x);
printf("r = %f\na= %f\n b= %f\n",r,a,b);

printf("y al pasarlas a cartesianas de nuevo\n");
d= r*sin(a)*cos(b);
e = r*sin(a)*sin(b);
f = r*cos(a);
printf("x = %f\ny= %f\n z= %f\n",d,e,f);

return(0);
}

