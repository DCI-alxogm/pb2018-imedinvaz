#include<stdio.h>

int main()
{
 	char c;
 	int a,b;
 	printf("El programa distingue entre una vocal o una consonante\nIntroduce una letra: ");
 	scanf("%c",&c);

 	a= (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
 	b= (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
 	if (a||b){
 		printf("%c es una vocal\n", c);
	} 
	else{
 		printf("%c es consonante\n", c);
	}
 return 0;
}
