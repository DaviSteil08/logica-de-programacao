#include <stdio.h>

int main() {
    int hora_entrada, hora_saida, tempo;
    float valor;

    printf("Digite a hora de entrada (0 a 23): ");
    scanf("%d", &hora_entrada);
    
    printf("Digite a hora de saida (0 a 23): ");
    scanf("%d", &hora_saida);

    if (hora_saida >= hora_entrada) {
        tempo = hora_saida - hora_entrada;
    } else {
        tempo = (24 - hora_entrada) + hora_saida;
    }

    if (tempo == 1) {
        valor = 10.00;
    } else if (tempo == 0) {
        valor = 0.00;
    } else {
        valor = 10.00 + ((tempo - 1) * 5.00);
    }

    // 4. Saidas
    printf("\n--- RECIBO ---\n");
    printf("Tempo de permanencia: %d hora(s)\n", tempo);
    printf("Valor a pagar: R$ %.2f\n", valor);

    return 0;
}