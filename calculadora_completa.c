#include <stdio.h>
#include <math.h>

int main(void) {
    int opcion;
    double a, b, resultado;

    do {
        printf("\n=== CALCULADORA COMPLETA ===\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Potencia\n");
        printf("6. Raiz cuadrada\n");
        printf("7. Salir\n");
        printf("Seleccione una opcion: ");

        if (scanf("%d", &opcion) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }

        switch (opcion) {
            case 1:
                printf("Ingrese dos numeros: ");
                if (scanf("%lf %lf", &a, &b) != 2) {
                    printf("Entrada invalida.\n");
                    return 1;
                }
                resultado = a + b;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 2:
                printf("Ingrese dos numeros: ");
                if (scanf("%lf %lf", &a, &b) != 2) {
                    printf("Entrada invalida.\n");
                    return 1;
                }
                resultado = a - b;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 3:
                printf("Ingrese dos numeros: ");
                if (scanf("%lf %lf", &a, &b) != 2) {
                    printf("Entrada invalida.\n");
                    return 1;
                }
                resultado = a * b;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 4:
                printf("Ingrese dos numeros: ");
                if (scanf("%lf %lf", &a, &b) != 2) {
                    printf("Entrada invalida.\n");
                    return 1;
                }

                if (b == 0) {
                    printf("Error: no se puede dividir entre cero.\n");
                } else {
                    resultado = a / b;
                    printf("Resultado: %.2f\n", resultado);
                }
                break;

            case 5:
                printf("Ingrese base y exponente: ");
                if (scanf("%lf %lf", &a, &b) != 2) {
                    printf("Entrada invalida.\n");
                    return 1;
                }
                resultado = pow(a, b);
                printf("Resultado: %.2f\n", resultado);
                break;

            case 6:
                printf("Ingrese un numero: ");
                if (scanf("%lf", &a) != 1) {
                    printf("Entrada invalida.\n");
                    return 1;
                }

                if (a < 0) {
                    printf("Error: no existe raiz cuadrada real para numeros negativos.\n");
                } else {
                    resultado = sqrt(a);
                    printf("Resultado: %.2f\n", resultado);
                }
                break;

            case 7:
                printf("Saliendo de la calculadora...\n");
                break;

            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 7);

    return 0;
}
