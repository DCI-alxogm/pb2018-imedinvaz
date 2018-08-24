#include <stdio.h>

int main()
{
	
 int a;
 printf("El programa reconoce un numero par de un impar, y si es par le suma uno\nintroduce un numero\n");
 scanf("%i",&a);
 if(a%2==0) {
 a=a+1;
printf("%i\n",a);
printf("tu numero era impar");
}
else{
	printf("%i es imapar",a);
} 

	
return 0;
}
