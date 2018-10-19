#include<stdio.h>

#include<stdlib.h>

float Determinante(float a1x,float a2y,float a3z,float b1x,float b2y,float b3z,float c1x,float c2y,float c3z);
float Valor(float d, float dn);
int main(){

int a[3],b[3],c[3],i;
char w[2];
float Det,Dx,Dy,Dz,x,y,z;
w[0]='s';
while(w[0]=='s'){

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
Dx=Determinante(a[3],a[1],a[2],b[3],b[1],b[2],c[3],c[1],c[2]);
Dy=Determinante(a[0],a[3],a[2],b[0],b[3],b[2],c[0],c[3],c[2]);
Dz=Determinante(a[0],a[1],a[3],b[0],b[1],b[3],c[0],c[1],c[3]);
x=Valor(Dx,Det);
y=Valor(Dy,Det);
z=Valor(Dz,Det);
printf("%f\t%f\t%f\t%f\n",Det,Dx,Dy,Dz);
printf("x=%f\ty=%f\tz=%f\n",x,y,z);
printf("deseas volver a usar el programa \n(inserta si/no):");
scanf("%s",w);
}
return 0;

}
float Valor(float d, float dn){
float R;
R=d/dn;
return R;
}


float Determinante(float a1,float a2,float a3,float b1,float b2,float b3,float c1,float c2,float c3){ 

float D;

D=(a1*b2*c3+b1*c2*a3+c1*a2*b3)-(a3*b2*c1+b3*c2*a1+c3*a2*b1);
return D;

}
