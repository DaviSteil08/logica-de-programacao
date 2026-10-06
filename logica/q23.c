#include <stdio.h>

int main() {
    int i;

    printf("Numeros pares entre 1 e 100:\n");
    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}