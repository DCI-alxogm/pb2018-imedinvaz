#include<stdio.h>

int main()
{
	int a,b=10,c,e=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,r=0,p=0,q=0;
	float edad[b],sexo[b],semestre[b],promedio[b],d=0,f=0,t=0,s=0;
	char o[1];
	for(a=0;a<b;a++)
	{
		printf("inserta edad del estudiante\n");
		scanf("%f",&edad[a]);
		d=edad[a]+d;
		printf("inserta semestre del estudiante\n");
		scanf("%f",&semestre[a]);
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
		printf("inserta promedio del estudiante\n");
		scanf("%f",&promedio[a]);
		f=promedio[a]+f;
		printf("inserta sexo del estudiante, masculino(m) o femenino(f)\n");
		scanf("%sn",&o);
		if(o[0]=='m')
		{
			p=1+p;
		}
		else if(o[0]=='f')
		{
			q=1+q;
		}
	}
	s=d/10;
	printf("promedio de edades de los estudiantes= %f\n",s);
	printf("estudiantes en primer semestre= %i\n",e);
	printf("estudiantes en segundo semestre= %i\n",g);
	printf("estudiantes en tercer semestre= %i\n",h);
	printf("estudiantes en cuarto semestre= %i\n",i);
	printf("estudiantes en quinto semestre= %i\n",j);
	printf("estudiantes en sexto semestre= %i\n",k);
	printf("estudiantes en septimo semestre= %i\n",l);
	printf("estudiantes en octavo semestre= %i\n",m);
	printf("estudiantes en noveno semestre= %i\n",n);
	printf("estudiantes en otro semestre= %i\n",r);
	t=f/10;
	printf("promedio de calificaciones de los estudiantes= %f\n",t);
	printf("estudiantes hombres= %i\n",p);
	printf("estudiantes mujeres= %i\n",q);

return 0;
}
