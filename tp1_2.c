#include <stdio.h>

// a) Función que devuelve el cuadrado de un número
int cuadrado(int x) {
    return x * x;
}

// b) Función que calcula el cuadrado pero no retorna (usa puntero)
void cuadrado_void(int x, int *resultado) {
    *resultado = x * x;
}

// c) Muestra dirección y contenido de una variable
void mostrar(int *x) {
    printf("Direccion: %p\n", x);
    printf("Contenido: %d\n", *x);
}

// d) Invierte los valores de dos variables
void invertir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// e) Ordena dos valores (menor en a, mayor en b)
void ordenar(int *a, int *b) {
    if (*a > *b) {
        invertir(a, b);
    }
}

int main() {
    int a, b;
    int resultado;

    // Entrada de datos
    printf("\nIngrese el primer valor: ");
    scanf("%d", &a);

    printf("Ingrese el segundo valor: ");
    scanf("%d", &b);

    // a)
    printf("\nCuadrado de a: %d\n", cuadrado(a));

    // b)
    cuadrado_void(a, &resultado);
    printf("Cuadrado de a (void): %d\n", resultado);

    // c)
    printf("\nMostrando datos de a:\n");
    mostrar(&a);

    // d)
    printf("\nIntercambiando valores...\n");
    invertir(&a, &b);
    printf("a: %d, b: %d\n", a, b);

    // e)
    printf("\nOrdenando valores...\n");
    ordenar(&a, &b);
    printf("a (menor): %d, b (mayor): %d\n\n", a, b);

    return 0;
}