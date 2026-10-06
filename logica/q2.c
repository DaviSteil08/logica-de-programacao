
#include <stdio.h>

int main() {
    int num1, num2, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("\nPrimeiro numero: %d\n", num1);
    printf("Segundo numero: %d\n", num2);
    printf("A soma dos dois numeros e: %d\n", soma);

    return 0;
}