#include <stdio.h>

int main() {
    int i;

    printf("Contagem regressiva:\n");
    
    for (i = 10; i >= 0; i--) {
        printf("%d, ", i);
    }
    printf("\nFim da contagem!\n");

    return 0;
}