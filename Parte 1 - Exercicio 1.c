#include <stdio.h>
#include <unistd.h>

int main() {
    float temperatura;

    printf("Sistema de Controle de Temperatura;\n");
    printf("Informe a temperatura em celcius para monitoramento. Digite um valor negativo para encerrar o programa.\n");

    while (1) {

        printf("Digite a temperatura atual: ");
        scanf("%f", &temperatura);

        if (temperatura < 0) {
            printf("Monitoramento encerrado.\n");
            break;
        }

        if (temperatura < 20.0) {
            printf("ALERTA: Temperatura muito baixa (%.2f°C)! Ajustando ventilacao...\n", temperatura);
        } else if (temperatura > 25.0) {
            printf("ALERTA: Temperatura muito alta (%.2f°C)! Ajustando ventilacao...\n", temperatura);
        } else {
            printf("Temperatura dentro da faixa segura (%.2f°C).\n", temperatura);
        }

        sleep(1);
    }

    return 0;
}
