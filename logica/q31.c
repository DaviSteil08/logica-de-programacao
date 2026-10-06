#include <stdio.h>

int main() {
    float litros, preco_litro, valor_bruto, desconto, valor_final;
    float taxa_desconto = 0.0;

    printf("Quantidade de litros abastecidos: ");
    scanf("%f", &litros);
    printf("Preco do litro: R$ ");
    scanf("%f", &preco_litro);

    valor_bruto = litros * preco_litro;

    if (litros < 20.0) {
        taxa_desconto = 0.0;
    } else if (litros >= 20.0 && litros <= 40.0) {
        taxa_desconto = 3.0;
    } else {
        taxa_desconto = 5.0;
    }

    desconto = valor_bruto * (taxa_desconto / 100.0);
    valor_final = valor_bruto - desconto;

    printf("\nValor bruto: R$ %.2f\n", valor_bruto);
    printf("Desconto aplicado: R$ %.2f\n", desconto);
    printf("Valor final a pagar: R$ %.2f\n", valor_final);

    return 0;
}