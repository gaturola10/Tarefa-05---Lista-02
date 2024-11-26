#include <stdio.h>

int main() {
    float distancia;
    char continuar;

    printf("O programa registra distancias ate que uma menor que 10 cm seja detectada.\n");

    do {
        printf("\nDigite a distancia medida pelo sensor (em cm): ");
        scanf("%f", &distancia);

        printf("Distancia registrada: %.2f cm\n", distancia);

        if (distancia < 10) {
            printf("Distancia menor que 10 cm detectada. Encerrando leitura...\n");
            break;
        }

        printf("Deseja continuar a leitura? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    printf("Programa encerrado. Obrigado!\n");
    return 0;
}
