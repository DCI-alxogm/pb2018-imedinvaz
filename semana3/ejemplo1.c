#include <stdio.h>

int main()
{
	int a;
	printf("El programa evalua un numero y te muestra si es par o no\nintroduce un numero");
	scanf("%i",&a);
	if(a%2==0){
		printf("%i es par\n",a);
		}else{
		printf("%i es impar",a);
	}
	
	return 0;
}
