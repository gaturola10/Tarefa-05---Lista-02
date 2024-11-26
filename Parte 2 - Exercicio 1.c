#include <stdio.h>
#include <string.h>

int main() {
    int x = 5, y = 5;
    char comando[10];

    printf("=== Controle de Movimento do Robo ===\n");
    printf("Espaco: 10x10 metros (0 a 10 em X e Y)\n");
    printf("Posicao inicial: (5, 5)\n");
    printf("Comandos disponiveis: frente, tras, esquerda, direita, sair\n");

    while (1) {
        printf("\nDigite o comando: ");
        scanf("%s", comando);

        if (strcmp(comando, "sair") == 0) {
            printf("Finalizando o controle do robo. Ate mais!\n");
            break;
        }

        if (strcmp(comando, "frente") == 0) {
            if (y < 10) {
                y++;
            } else {
                printf("Movimento invalido: o robo atingiu o limite superior do espaco.\n");
            }
        } else if (strcmp(comando, "tras") == 0) {
            if (y > 0) {
                y--;
            } else {
                printf("Movimento invalido: o robo atingiu o limite inferior do espaco.\n");
            }
        } else if (strcmp(comando, "esquerda") == 0) {
            if (x > 0) {
                x--;
            } else {
                printf("Movimento invalido: o robo atingiu o limite esquerdo do espaco.\n");
            }
        } else if (strcmp(comando, "direita") == 0) {
            if (x < 10) {
                x++;
            } else {
                printf("Movimento invalido: o robo atingiu o limite direito do espaco.\n");
            }
        } else {
            printf("Comando invalido. Tente novamente.\n");
        }

        printf("Posicao atual do robo: (%d, %d)\n", x, y);
    }

    return 0;
}
