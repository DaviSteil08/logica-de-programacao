#include <stdio.h>

int main() {
    int voto, cand1 = 0, cand2 = 0, cand3 = 0, total = 0;

    printf("Candidatos:\n1-Cand1\n2-Cand2\n3-Cand3\n0-Encerrar\n");

    while (1) {
        printf("Digite o voto: ");
        scanf("%d", &voto);

        if (voto == 0) {
            break; 
        } else if (voto == 1) {
            cand1++;
            total++;
        } else if (voto == 2) {
            cand2++;
            total++;
        } else if (voto == 3) {
            cand3++;
            total++;
        } else {
            printf("Voto invalido!\n");
        }
    }

    printf("\n--- Resultado ---\n");
    printf("Candidato 1: %d votos\n", cand1);
    printf("Candidato 2: %d votos\n", cand2);
    printf("Candidato 3: %d votos\n", cand3);
    printf("Total de votos: %d\n", total);

    if (cand1 > cand2 && cand1 > cand3) {
        printf("Vencedor: Candidato 1\n");
    } else if (cand2 > cand1 && cand2 > cand3) {
        printf("Vencedor: Candidato 2\n");
    } else if (cand3 > cand1 && cand3 > cand2) {
        printf("Vencedor: Candidato 3\n");
    } else if (total > 0) {
        printf("Empate!\n");
    }

    return 0;
}