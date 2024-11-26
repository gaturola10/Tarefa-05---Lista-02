#include <stdio.h>

int main() {
    float deposito_minimo = 500.00, deposito_usuario;

    printf("Para abrir uma conta, eh necessario um deposito inicial minimo de R$ %.2f.\n", deposito_minimo);

    while (1) {
        printf("Informe o valor do deposito inicial: R$ ");
        scanf("%f", &deposito_usuario);

        if (deposito_usuario >= deposito_minimo) {
            printf("Deposito de R$ %.2f realizado com sucesso! Conta aberta.\n", deposito_usuario);
            break;
        } else {
            printf("Erro: O valor minimo para abrir uma conta eh de R$ %.2f.\n", deposito_minimo);
            printf("Por favor, insira um valor valido.\n");
        }
    }

    return 0;
}
