#include<stdio.h>
int main(){
    int var=20; /*declaración de la variable*/
    int *ip; /*declaración de la variable apuntador*/
    ip = &var; /*asigna la dirección de la variable var a la direccion ip*/
    
    printf("la direcci�n de la variable var es: %x\n",(int)&var);
    printf("Direcci�n guardada en el apuntador ip: %x\n", (int)ip);
    printf("El valor de *ip: %d\n", *ip );
    
    
    return 0;
}
