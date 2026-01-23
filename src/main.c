#include <stdio.h> 

int main(){

//Insertar variables.
    float lado;
    float area;
    float volumen;

    printf("Insertar valor:");
    scanf("%f", &lado);

    area = lado * lado;
    volumen = lado * lado * lado;

//Imprimir resultados.
    printf("Resultado de Area: %.2f\n", area);
    printf("Resultado de volumen %.2f\n", volumen);

    return 0;
}