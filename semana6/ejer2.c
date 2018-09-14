#include<stdio.h>

int main()
{
	int a,b=10,c,e=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,r=0,p=0,q=0;
	float edad[b],semestre[b],promedio[b],d=0,f=0,t=0,s=0;
	char o[b],var[255],nombre[b];
	FILE *estadistica;
	FILE *resultad;
	estadistica= fopen("estudiantes.txt","r");
	fgets(var,255,(FILE*)estadistica);
	for(a=0;a<b;a++)
	{
		fscanf(estadistica,"%s %s %f %f %f",&nombre[a],&o[a],&edad[a],&semestre[a],&promedio[a]);
		d=edad[a]+d;
		if(semestre[a]==1)
		{
			e=1+e;		
		}
		else if(semestre[a]==2)
		{
			g=1+g;		
		}
		else if(semestre[a]==3)
		{
			h=1+h;		
		}
		else if(semestre[a]==4)
		{
			i=1+i;		
		}
		else if(semestre[a]==5)
		{
			j=1+j;		
		}
		else if(semestre[a]==6)
		{
			k=1+k;		
		}
		else if(semestre[a]==7)
		{
			l=1+l;		
		}
		else if(semestre[a]==8)
		{
			m=1+m;		
		}
		else if(semestre[a]==9)
		{
			n=1+n;		
		}
		else if(semestre[a]>9)
		{
			r=1+r;
		}
		f=promedio[a]+f;
		if(o[a]=='m')
		{
			p=1+p;
		}
		else if(o[a]=='f')
		{
			q=1+q;
		}
		}
		fclose(estadistica);
	resultad= fopen("resultados.txt","w");	
		s=d/10;
	fprintf(resultad,"promedio de edades de los estudiantes= %f\n",s);
	fprintf(resultad,"estudiantes en primer semestre= %i\n",e);
	fprintf(resultad,"estudiantes en segundo semestre= %i\n",g);
	fprintf(resultad,"estudiantes en tercer semestre= %i\n",h);
	fprintf(resultad,"estudiantes en cuarto semestre= %i\n",i);
	fprintf(resultad,"estudiantes en quinto semestre= %i\n",j);
	fprintf(resultad,"estudiantes en sexto semestre= %i\n",k);
	fprintf(resultad,"estudiantes en septimo semestre= %i\n",l);
	fprintf(resultad,"estudiantes en octavo semestre= %i\n",m);
	fprintf(resultad,"estudiantes en noveno semestre= %i\n",n);
	fprintf(resultad,"estudiantes en otro semestre= %i\n",r);
	t=f/10;
	fprintf(resultad,"promedio de calificaciones de los estudiantes= %f\n",t);
	fprintf(resultad,"estudiantes hombres= %i\n",p);
	fprintf(resultad,"estudiantes mujeres= %i\n",q);
	fclose(resultad);
	
return 0;	}
	


