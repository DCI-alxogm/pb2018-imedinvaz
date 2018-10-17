#include<stdio.h>
#include<stdlib.h>
float Determinante(float a1x,float a2y,float a3z,float b1x,float b2y,float b3z,float c1x,float c2y,float c3z);
int main(){
int a[3],b[3],c[3],i;
float Det;
printf("inserta los coeficientes de la primera ecuacion en el orden x y z a\n");
for(i=0;i<4;i++){

scanf("%d",&a[i]);

}
printf("inserta los coeficientes de la segunda ecuacion en el orden x y z a\n");
for(i=0;i<4;i++){

scanf("%d",&b[i]);

}
printf("inserta los coeficientes de la tercera ecuacion en el orden x y z a\n");
for(i=0;i<4;i++){

scanf("%d",&c[i]);

}
Det=Determinante(a[0],a[1],a[2],b[0],b[1],b[2],c[0],c[1],c[2]);
printf("%f",Det);
return 0;
}

float Determinante(float a1x,float a2y,float a3z,float b1x,float b2y,float b3z,float c1x,float c2y,float c3z){ 
float D;
D=(a1x*b2y*c3z+b1x*c2y*a3z+c1x*a2y*b3z)-(a3z*b2y*c1x+b3z*c2y*a1x+c3z*a2y*b1x);
return D;
}
