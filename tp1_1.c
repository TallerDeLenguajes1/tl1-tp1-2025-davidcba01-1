#include <stdio.h>

int main() {
    printf("hola mundo\n");
    
    int x = 10;
    int *p = &x;

    // 1) Contenido del puntero (valor al que apunta)
    printf("Contenido del puntero (*p): %d\n", *p);

    // 2) Dirección almacenada en el puntero
    printf("Direccion almacenada en p: %p\n", p);

    // 3) Dirección de memoria de la variable
    printf("Direccion de x: %p\n", &x);

    // 4) Dirección de memoria del puntero
    printf("Direccion de p: %p\n", &p);

    // 5) Tamaño de la variable
    printf("Tamanio de x: %lu bytes\n", sizeof(x));

    return 0;
}