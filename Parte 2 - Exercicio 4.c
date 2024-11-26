#include <stdio.h>

int main() {
    float nivel_bateria;

    printf("Monitoramento de Bateria do Robo;\n");

    do {
        printf("\nDigite o nivel da bateria (em porcentagem): ");
        scanf("%f", &nivel_bateria);

        if (nivel_bateria < 20) {
            printf("Aviso: Bateria baixa! Recarregue o robo.\n");
        } else {
            printf("Nivel de bateria suficiente.\n");
        }
    } while (nivel_bateria < 20);

    printf("Monitoramento encerrado. Bateria acima de 20%%.\n");
    return 0;
}
