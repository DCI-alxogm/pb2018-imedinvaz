
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	double xo,yo,zo,vxo,vyo,vzo,xi,yi,zi,vxi,vyi,vzi,h;
	float tt,r,to;
	FILE *entrada;
	char lin[255];
	const float G=39.478417; 
	int i,d=0;
	entrada=fopen("datt.txt","r");
	fgets(lin,255,entrada);
	fscanf(entrada,"%lf %lf %lf %lf %lf %lf %f ",&xo,&yo,&zo,&vxo,&vyo,&vzo,&tt);
	fclose(entrada);
	h=0.001; //h es el aumento de tiempo, siempre es el mismo, en este caso es 1/365 para ver lo que le corresponde  a cada dia
	printf(" h =%lf\n",h);
	printf("%s",lin);
	printf("%lf %lf %lf %lf %lf %lf %f \n",xo,yo,zo,vxo,vyo,vzo,tt);
	for(i=0;i<1000;i++){ //365 pra que h de en teoría la vuelta por los dias del año
		d=d+1;
		printf("dia %d\n",d);
		r=sqrt(pow(xo,2)+pow(yo,2)+pow(zo,2));
		printf("  d=%f\n",r);
		xi=(xo+vxo*h);
		printf("  x=%lf",xi);
		yi=(yo+vyo*h);
		printf("  y=%lf",yi);
		zi=(zo+vzo*h);
		printf("  z=%lf\n",zi);
		vxi=(vxo-(h*G*xo)/(pow(r,3)));
		printf("  vx=%lf",vxi);
		vyi=(vyo-(h*G*yo)/(pow(r,3)));
		printf("  vy=%lf",vyi);
		vzi=(vzo-(h*G*xo)/(pow(r,3)));
		printf("  vz=%lf\n",vzi);

		xo=xi;
		yo=yi;
		zo=zi;
		vxo=vxi;
		vyo=vyi;
		vzo=vzi;
	}
	return 0;
}

