#include "stdio.h"
#include "funciones.h"


void opcion(int num, float a, float b){
    switch(num){
        case 1:
            printf("El resultado es: %.2f\n", suma(a,b));
            break;
        case 2:
            printf("El resultado es: %.2f\n", resta(a,b));
            break;
        case 3:
            printf("El resultado es: %.2f\n", multi(a,b));
            break;
        case 4:   
            printf("El resultado es: %.2f\n", divi(a,b));
            break;
    }

}

float leerDato(int num){
    float x=0;
    printf("Ingrese el numero %d: ", num);
    scanf("%f", &x);
    return x;
}

float suma(float a, float b){
    float rest=0;
    rest=a+b;
    return rest;
}

float resta(float a, float b){
    float rest=0;
    rest=a-b;
    return rest;
}

float multi(float a, float b){
    float rest=0;
    rest=a*b;
    return rest;
}

float divi(float a, float b){
    float rest=0;
    if (b!=0){
        rest=a/b;
    }
    else{
        printf("No se puede dividir entre 0.\n");
    }
    return rest;
}