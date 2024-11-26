#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcularMedia(float *valores, int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += valores[i];
    }
    return soma / n;
}

float calcularDesvioPadrao(float *valores, int n, float media) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += pow(valores[i] - media, 2);
    }
    return sqrt(soma / n);
}

int main() {
    int dias;
    float *precos = NULL;
    char opcao;

    printf("Analise de Desempenho de Acoes;\n");

    do {
        printf("Quantos dias voce deseja analisar? ");
        scanf("%d", &dias);

        precos = (float *)malloc(dias * sizeof(float));
        if (precos == NULL) {
            printf("Erro de alocacao de memoria.\n");
            return 1;
        }

        printf("Insira os precos das acoes para os %d dias:\n", dias);
        for (int i = 0; i < dias; i++) {
            printf("Dia %d: ", i + 1);
            scanf("%f", &precos[i]);
        }

        float media = calcularMedia(precos, dias);
        float desvio_padrao = calcularDesvioPadrao(precos, dias, media);

        printf("\nResultados da Analise:\n");
        printf("Media dos precos: %.2f\n", media);
        printf("Desvio padrao: %.2f\n", desvio_padrao);

        if (desvio_padrao < (media * 0.05)) {
            printf("O desempenho das acoes eh considerado estavel.\n");
        } else {
            printf("O desempenho das acoes eh considerado volatil.\n");
        }

        free(precos);

        printf("\nDeseja realizar outra analise? (S/N): ");
        scanf(" %c", &opcao);

    } while (opcao == 'S' || opcao == 's');

    printf("Programa encerrado. Obrigado!\n");
    return 0;
}
