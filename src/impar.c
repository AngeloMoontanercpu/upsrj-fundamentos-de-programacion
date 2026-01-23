#include <stdio.h>

int is_even(int numero) {
    if (numero % 2 == 0 ) {
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int numero; 

    

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (is_even(numero) == 1) {
        printf("El numero es par\n");
    } else {
        printf("El numero es impar\n");
    }
    return 0; //Termino exitosamente.
}



//Ayuda!