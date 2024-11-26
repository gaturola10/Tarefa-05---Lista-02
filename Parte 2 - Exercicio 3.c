#include <stdio.h>

int main() {
    int opcao;

    printf("Selecione uma acao para o robo:\n");
    printf("1 - Ligar lampada\n");
    printf("2 - Tocar som\n");
    printf("3 - Mover braco\n");
    printf("0 - Encerrar programa\n");

    do {
        printf("\nDigite sua escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Lampada ligada.\n");
                break;
            case 2:
                printf("Som tocando.\n");
                break;
            case 3:
                printf("Braco movido.\n");
                break;
            case 0:
                printf("Encerrando programa. Ate mais!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
