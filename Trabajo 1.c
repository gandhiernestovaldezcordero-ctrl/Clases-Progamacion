#include <stdio.h>

int main(void) {
    int sonidos;
    double temperatura;

    printf("Ingrese el numero de sonidos emitidos por minuto: ");
    if (scanf("%d", &sonidos) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    temperatura = sonidos / 4.0 + 40.0;

    printf("La temperatura estimada es: %.2f F\n", temperatura);

    return 0;
}
