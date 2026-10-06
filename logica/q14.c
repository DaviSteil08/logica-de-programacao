#include <stdio.h>

int main() {
    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    if (n1 > n2) {
        printf("O maior numero e: %.2f\n", n1);
    } else {
        printf("O maior numero e: %.2f\n", n2);
    }

    return 0;
}