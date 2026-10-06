#include <stdio.h>

int main() {
    int hora_entrada, hora_saida, tempo_horas;
    float valor_total = 0.0;

    printf("Digite a hora de entrada (ex: 10): ");
    scanf("%d", &hora_entrada);
    printf("Digite a hora de saida (ex: 13): ");
    scanf("%d", &hora_saida);

    tempo_horas = hora_saida - hora_entrada;

    if (tempo_horas <= 0) {
        printf("Tempo invalido.\n");
    } else {
        if (tempo_horas == 1) {
            valor_total = 10.0; 
        } else {
            valor_total = 10.0 + ((tempo_horas - 1) * 5.0);
        }

        printf("Tempo de permanencia: %d hora(s)\n", tempo_horas);
        printf("Valor total a pagar: R$ %.2f\n", valor_total);
    }

    return 0;
}