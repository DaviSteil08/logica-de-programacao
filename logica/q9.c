#include <stdio.h>

int main() {
    float distancia, combustivel, consumo_medio;

    printf("Distancia percorrida (em km): ");
    scanf("%f", &distancia);
    
    printf("Combustivel utilizado (em litros): ");
    scanf("%f", &combustivel);

    consumo_medio = distancia / combustivel;

    printf("O consumo medio do veiculo e: %.2f km/L\n", consumo_medio);

    return 0;
}