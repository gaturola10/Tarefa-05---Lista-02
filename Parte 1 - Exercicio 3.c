#include <stdio.h>

int main() {
    int passos_dados, passos_totais = 0;
    const int META_DIARIA = 10000;

    printf("Monitor de Passos\n");
    printf("Meta diaria: %d passos.\n", META_DIARIA);

    while (1) {
        printf("Informe a quantidade de passos dados: ");
        scanf("%d", &passos_dados);

        if (passos_dados < 0) {
            printf("Entrada invalida! Passos nao podem ser negativos.\n");
            continue;
        }

        passos_totais += passos_dados;

        printf("Total de passos ate o momento: %d\n", passos_totais);

        if (passos_totais >= META_DIARIA) {
            printf("Parabens! Voce alcancou a meta diaria de %d passos!\n", META_DIARIA);
            break;
        } else {
            printf("Faltam %d passos para alcancar a meta.\n", META_DIARIA - passos_totais);
        }
    }

    return 0;
}
