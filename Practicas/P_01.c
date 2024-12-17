#include <stdio.h>

int main() {
    int a, b, resultado;

    printf("Ingresa el primer número: ");
    scanf("%d", &a);
    
    printf("Ingresa el segundo número: ");
    scanf("%d", &b);

    resultado = sumar(a, b);

    printf("La suma de %d y %d es: %d\n", a, b, resultado);

    return 0;
}

int sumar(int num1, int num2) {
    return num1 + num2;
}