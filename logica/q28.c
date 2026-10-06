#include <stdio.h>

int main() {
    int i;
    float numero, maior;

    printf("Digite o 1o numero: ");
    scanf("%f", &numero);
    maior = numero; 

    for (i = 2; i <= 10; i++) {
        printf("Digite o %do numero: ", i);
        scanf("%f", &numero);

        if (numero > maior) {
            maior = numero;
        }
    }

    printf("O maior numero informado foi: %.2f\n", maior);

    return 0;
}