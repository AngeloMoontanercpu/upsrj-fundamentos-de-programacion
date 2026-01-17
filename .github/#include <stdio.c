//area_cubo
#include <stdio.h>

float calcularArea(float lado);
float calcularVolumen(float lado);

int main(){

    float lado;
    float area;
    float volumen;

    printf("Colocar valor aquí:");
    scanf("%f", &lado);

    area = lado * lado;
    volumen = lado * lado * lado;

    printf("Area total del cubo: %.2f\n", area);
    printf("Volumen total del cubo: %.2f\n", volumen);

    return 0;
}

float calcularArea(float lado){
    return lado * lado;
}

float calcularVolumen(float lado){
    return lado * lado * lado;
}