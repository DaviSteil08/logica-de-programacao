#include <stdio.h>

int main() {
    int i, aprovados = 0, reprovados = 0;
    float nota, percentual_aprovacao;

    for (i = 1; i <= 10; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        if (nota >= 7.0) {
            aprovados++;
        } else {
            reprovados++;
        }
    }

    percentual_aprovacao = (aprovados / 10.0) * 100.0;

    printf("\nQuantidade de aprovados: %d\n", aprovados);
    printf("Quantidade de reprovados: %d\n", reprovados);
    printf("Percentual de aprovacao: %.2f%%\n", percentual_aprovacao);

    return 0;
}