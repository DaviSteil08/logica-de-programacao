#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000.0;
    float valor;

    do {
        printf("\n--- CAIXA ELETRONICO ---\n");
        printf("1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Seu saldo e: R$ %.2f\n", saldo);
        } else if (opcao == 2) {
            printf("Digite o valor para deposito: R$ ");
            scanf("%f", &valor);
            saldo = saldo + valor;
            printf("Deposito efetuado!\n");
        } else if (opcao == 3) {
            printf("Digite o valor para saque: R$ ");
            scanf("%f", &valor);
            if (valor > saldo) {
                printf("Falha: Saldo insuficiente!\n");
            } else {
                saldo = saldo - valor;
                printf("Saque efetuado! Retire seu dinheiro.\n");
            }
        } else if (opcao == 4) {
            printf("Operacao finalizada.\n");
        } else {
            printf("Opcao invalida!\n");
        }
    } while (opcao != 4);

    return 0;
}