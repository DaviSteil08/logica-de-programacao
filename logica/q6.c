#include <stdio.h>

int main() {
    float raio, area;
    const float PI = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * (raio * raio);

    printf("A area do circulo e: %.5f\n", area);

    return 0;
}