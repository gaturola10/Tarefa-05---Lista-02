#include <stdio.h>
#include <string.h>

void controleMovimento();
void leituraSensores();
void controleAtuacao();
void monitoramentoBateria();
void navegacaoAutonoma();

int main() {
    int opcao;

    do {
        printf("\nMenu Principal;\n");
        printf("1 - Controle de Movimento\n");
        printf("2 - Leitura de Sensores de Distancia\n");
        printf("3 - Controle de Atuacao\n");
        printf("4 - Monitoramento de Bateria\n");
        printf("5 - Navegacao Autonoma\n");
        printf("0 - Sair do Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                controleMovimento();
                break;
            case 2:
                leituraSensores();
                break;
            case 3:
                controleAtuacao();
                break;
            case 4:
                monitoramentoBateria();
                break;
            case 5:
                navegacaoAutonoma();
                break;
            case 0:
                printf("Encerrando o programa. Ate mais!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

void controleMovimento() {
    int x = 5, y = 5;
    char comando[10];

    printf("\nControle de Movimento;\n");
    printf("Movimente o robo em um espaco de 10x10 (0 a 9 em X e Y)\n");
    printf("Posicao inicial: (5, 5)\n");

    while (1) {
        printf("\nDigite o comando (cima, baixo, esquerda, direita, parar): ");
        scanf("%s", comando);

        if (strcmp(comando, "parar") == 0) {
            printf("Encerrando controle de movimento.\n");
            break;
        }

        if (strcmp(comando, "cima") == 0) {
            if (y < 9) y++;
            else printf("Limite superior alcancado.\n");
        } else if (strcmp(comando, "baixo") == 0) {
            if (y > 0) y--;
            else printf("Limite inferior alcancado.\n");
        } else if (strcmp(comando, "esquerda") == 0) {
            if (x > 0) x--;
            else printf("Limite esquerdo alcancado.\n");
        } else if (strcmp(comando, "direita") == 0) {
            if (x < 9) x++;
            else printf("Limite direito alcancado.\n");
        } else {
            printf("Comando invalido.\n");
        }

        printf("Posicao atual: (%d, %d)\n", x, y);
    }
}

void leituraSensores() {
    float distancia;
    char continuar;

    printf("\nLeitura de Sensores de Distancia;\n");

    do {
        printf("Digite a distancia medida (em cm): ");
        scanf("%f", &distancia);

        printf("Distancia registrada: %.2f cm\n", distancia);

        printf("Deseja continuar a leitura? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');
}

void controleAtuacao() {
    int opcao;

    printf("\nControle de Atuacao;\n");
    printf("1 - Ligar lampada\n");
    printf("2 - Tocar som\n");
    printf("3 - Mover braco\n");
    printf("0 - Encerrar atuacao\n");

    do {
        printf("Digite sua escolha: ");
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
                printf("Encerrando atuacao.\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 0);
}

void monitoramentoBateria() {
    float nivel_bateria;

    printf("\nMonitoramento de Bateria;\n");

    do {
        printf("Digite o nivel da bateria (em %%): ");
        scanf("%f", &nivel_bateria);

        if (nivel_bateria < 20) {
            printf("Aviso: Bateria baixa! Recarregue o robo.\n");
        } else {
            printf("Nivel de bateria suficiente.\n");
        }
    } while (nivel_bateria < 20);

    printf("Monitoramento encerrado. Bateria acima de 20%%.\n");
}

void navegacaoAutonoma() {
    int x = 2, y = 2;
    char comando[10];

    printf("\nNavegacao Autonoma;\n");
    printf("Grid: 5x5 (posicoes de 0 a 4)\n");
    printf("Posicao inicial: (2, 2)\n");

    while (1) {
        printf("\nDigite o comando (cima, baixo, esquerda, direita, parar): ");
        scanf("%s", comando);

        if (strcmp(comando, "parar") == 0) {
            printf("Encerrando navegacao autonoma.\n");
            break;
        }

        if (strcmp(comando, "cima") == 0) {
            if (y < 4) y++;
            else printf("Limite superior do grid alcancado.\n");
        } else if (strcmp(comando, "baixo") == 0) {
            if (y > 0) y--;
            else printf("Limite inferior do grid alcancado.\n");
        } else if (strcmp(comando, "esquerda") == 0) {
            if (x > 0) x--;
            else printf("Limite esquerdo do grid alcancado.\n");
        } else if (strcmp(comando, "direita") == 0) {
            if (x < 4) x++;
            else printf("Limite direito do grid alcancado.\n");
        } else {
            printf("Comando invalido.\n");
        }

        printf("Posicao atual: (%d, %d)\n", x, y);
    }
}
