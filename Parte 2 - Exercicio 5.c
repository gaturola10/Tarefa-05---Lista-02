#include <stdio.h>
#include <string.h>

int main() {
    int x = 2, y = 2;
    char comando[10];

    printf("Grid: 5x5 (posicoes de 0 a 4 em X e Y)\n");
    printf("Posicao inicial: (2, 2)\n");
    printf("Comandos disponiveis: cima, baixo, esquerda, direita, parar\n");

    while (1) {
        printf("\nDigite o comando: ");
        scanf("%s", comando);

        if (strcmp(comando, "parar") == 0) {
            printf("Navegacao encerrada. Ate mais!\n");
            break;
        }

        if (strcmp(comando, "cima") == 0) {
            if (y < 4) {
                y++;
            } else {
                printf("Movimento invalido: limite superior do grid alcancado.\n");
            }
        } else if (strcmp(comando, "baixo") == 0) {
            if (y > 0) {
                y--;
            } else {
                printf("Movimento invalido: limite inferior do grid alcancado.\n");
            }
        } else if (strcmp(comando, "esquerda") == 0) {
            if (x > 0) {
                x--;
            } else {
                printf("Movimento invalido: limite esquerdo do grid alcancado.\n");
            }
        } else if (strcmp(comando, "direita") == 0) {
            if (x < 4) {
                x++;
            } else {
                printf("Movimento invalido: limite direito do grid alcancado.\n");
            }
        } else {
            printf("Comando invalido. Tente novamente.\n");
        }

        printf("Posicao atual do robo: (%d, %d)\n", x, y);
    }

    return 0;
}
