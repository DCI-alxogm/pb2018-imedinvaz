#include <stdio.h>
#include<math.h>
	float cuadrado(float h);
	void multiplica(float s,float k);
	float pendiente(int o,float sumxy,float sumx,float sumy,float sumx2 );	
	float cons(int o,float sumxy,float sumx,float sumy,float sumx2,float sumy2);
	void mensaje();
	int main(){

			int o;	
		mensaje();
		printf("introduce el numero de datos");

		scanf("%d",&o);
		float x[o],y[o],x2[o],y2[o],sumy=0,sumx=0,gg[o],sumx2=0,sumy2=0,sumxy=0,m,b;
		int i,w[o];
		FILE *l;

		for(i=0;i<o;i++){
			w[i]=i+1;
			printf("\nintroduce el valor de %d de x\n",w[i]);
			scanf("%f",&x[i]);
			printf("\nintroduce el valor de %d de y\n",w[i]);
			scanf("%f",&y[i]);			
			x2[i]=cuadrado(x[i]);
			y2[i]=cuadrado(y[i]);
			multiplica(x[i],y[i]);
			sumx+=x[i];
			sumy+=y[i];
			sumx2+=x2[i];
			sumy2+=y2[i];
				}

		
l=fopen("mino.txt","r");
		for(i=0;i<o;i++){
			fscanf(l,"%f",&gg[i]);
			printf("repeticion\t %d\t %f\t %f\t %f\t %f\t %f\n",w[i],x[i],y[i],gg[i],x2[i],y2[i]);
			sumxy+=gg[i];
			}
fclose(l);
m=pendiente(o,sumxy,sumx,sumy,sumx2 );
b=cons(o,sumxy,sumx,sumy,sumx2,sumy2);
printf("sumatorias   %f %f %f %f %f\nm= %f  n= %f\n la ecuación igual y=(%f)x+%f",sumx,sumy,sumxy,sumx2,sumy2,m,b,m,b);
		remove("mino.txt");
	l=fopen("tabla.txt","w");
	fputs("repeticion  x    y   xy    x^2   y^2 \n",l); 
		for(i=0;i<o;i++){

			fprintf(l,"%d            %f   %f   %f   %f   %f\n",w[i],x[i],y[i],gg[i],x2[i],y2[i]);
			}	
		fprintf(l,"sumatorias   %f   %f  %f  %f  %f\nm= %f  n= %f\n la ecuación igual y=(%f)x+%f",sumx,sumy,sumxy,sumx2,sumy2,m,b,m,b);
	fclose(l);	
	return 0;
	}
	
	
	
	float cuadrado(float h){
	return h*h;
	}
	
	
	void multiplica(float s,float k){
		float gg;
		FILE *l;
		gg=s*k;
	l=fopen("mino.txt","a");
		fprintf(l,"%f\n",gg);
		fclose(l);		
		}
	
	void mensaje(){
	printf("hola,este programa calcula minimos cuadrados, sigue paso a paso de forma correcta y hara tu vida más fácil\n");
	}
	
	float pendiente(int o,float sumxy,float sumx,float sumy,float sumx2 ){
		return (o*sumxy-(sumx*sumy))/(o*sumx2-(sumx*sumy));
	}
	
	float cons(int o,float sumxy,float sumx,float sumy,float sumx2,float sumy2){

		return (o*sumxy-(sumx*sumy))/sqrt(o*sumx2-sumx*sumx)*sqrt(o*sumy2-sumy*sumy);
	}
	
	
		

