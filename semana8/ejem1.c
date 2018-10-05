#include<stdio.h>
int main(){
    int var=20; /*declaraciÃ³n de la variable*/
    int *ip; /*declaraciÃ³n de la variable apuntador*/
    ip = &var; /*asigna la direcciÃ³n de la variable var a la direccion ip*/
    
    printf("la dirección de la variable var es: %x\n",(int)&var);
    printf("Dirección guardada en el apuntador ip: %x\n", (int)ip);
    printf("El valor de *ip: %d\n", *ip );
    
    
    return 0;
}
