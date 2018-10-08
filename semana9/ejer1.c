#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *dat;
int i,k,sum=0;
float m,n,h=1;

dat=fopen("num_maximo.txt","r");

while(h=1){
fscanf(dat,"%f",&h);
if(h>0){
h=1;
}
else{
h=0;}
sum=sum+h;
printf("h=%i\tsum=%i",h,sum);
}
fclose(dat);



dat=fopen("num_maximo.txt","r");
fscanf(dat,"%f",&m);

for(i=0;i<=95;i++){
fscanf(dat,"%f",&n);
printf("%f\n",n);
if(m>n){
printf("m>n%f\n",m);
m=m;
printf("m=%f",m);
}
else{
printf("m<n%f\n",n);
m=n;
printf("n=%f\n",n);
}
}

fclose(dat);


return 0;
}
