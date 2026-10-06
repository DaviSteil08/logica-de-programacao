#include <stdio.h>

int main() {
    char nome_produto[50];
    int quantidade;
    float preco_unitario, valor_total;

    printf("Nome do produto: ");
    scanf("%s", nome_produto); 
    
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    
    printf("Preco unitario: R$ ");
    scanf("%f", &preco_unitario);

    valor_total = quantidade * preco_unitario;

    printf("\nProduto: %s\n", nome_produto);
    printf("Valor total da compra: R$ %.2f\n", valor_total);

    return 0;
}