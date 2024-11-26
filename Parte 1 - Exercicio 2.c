#include <stdio.h>
#include <unistd.h>

int main() {
    float nivel;

    printf("Informe o nivel de combustivel em porcentagem (0 a 100). Digite um valor negativo para encerrar.\n");

    while (1) {

        printf("Informe o nivel de combustivel: ");
        scanf("%f", &nivel);

        if (nivel < 0) {
            printf("Monitoramento encerrado.\n");
            break;
        }

        if (nivel < 15.0) {
            printf("ALERTA: Nivel de combustivel muito baixo (%.2f%%)! Por favor, recarregue o veiculo.\n", nivel);
        } else if (nivel >= 100.0) {
            printf("Combustivel no nivel maximo (%.2f%%). Monitoramento encerrado.\n", nivel);
            break;
        } else {
            printf("Nivel de combustivel estavel (%.2f%%).\n", nivel);
        }

        sleep(1);
    }

    return 0;
}
