#include <stdio.h>

int main() {
    int opcao = 1, quantidade, vendas_realizadas = 0, total_produtos = 0;
    float preco, total_venda, faturamento = 0.0, maior_venda = 0.0;
    char nome[50];

    while (opcao != 0) {
        printf("\nNome do produto: ");
        scanf("%s", nome);
        printf("Quantidade: ");
        scanf("%d", &quantidade);
        printf("Preco unitario: R$ ");
        scanf("%f", &preco);

        total_venda = quantidade * preco;

        faturamento = faturamento + total_venda;
        vendas_realizadas++;
        total_produtos = total_produtos + quantidade;

        if (total_venda > maior_venda) {
            maior_venda = total_venda;
        }

        printf("Deseja registrar nova venda? (1=Sim / 0=Nao): ");
        scanf("%d", &opcao);
    }

    printf("\n--- Balanco do dia ---\n");
    printf("Vendas realizadas: %d\n", vendas_realizadas);
    printf("Produtos vendidos: %d\n", total_produtos);
    printf("Faturamento total: R$ %.2f\n", faturamento);
    printf("Maior venda: R$ %.2f\n", maior_venda);

    return 0;
}