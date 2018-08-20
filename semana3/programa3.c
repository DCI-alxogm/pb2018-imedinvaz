#include<stdio.h>
#include<math.h>
 int main ()
{
float a,r,b,x,y,z,u;
printf("este programa convierte coordenadas cartesianas a esfericas y despues la vuelve a convertir a cartesianas\n inserta la coordenada x\n");
scanf("%f",& x);
printf("\n inserta la coordenada y\n");
scanf("%f",& y);
printf("\n inserta la coordenada z\n");
scanf("%f", &z);
r = sqrt(x*x+y*y+z*z);
u = sqrt(x*x+y*y);
a = 1/tan(u/z);
b = 1/tan(y/x);
printf("r = %f\na= %f\n b= %f\n",r,a,b);

return(0);
}

