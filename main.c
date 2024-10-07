#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {
    int op1=0, op2=0;
    float x1=0, x2=0, result=0;
    do{
    x1=leerDato(1);
    x2=leerDato(2);
    printf("Ingrese la operacion que desea realizar:\n");
    printf("1. Suma, 2. Resta, 3. Multiplicacion, 4. Division\n");
    scanf("%d", &op1);
    opcion(op1, x1 , x2);
    printf("Desea realizar otra operacion? 1. Si, 2. No\n");
    scanf("%d", &op2);
    }while(op2==1);
    return 0;
}

