#include<stdio.h>
float cuadrado();

int main(){
float x2;
x2=cuadrado();
printf("el cuadrado es %f",x2);
return 0;
}
float cuadrado(){
float x;
printf("introduce un numero\n");
scanf("%f",&x);
return x*x;

}
