#include <stdio.h>

int main() {
    int i, qtd_alunos;
    int aprovados = 0, recuperacao = 0, reprovados = 0;
    float n1, n2, media, soma_medias = 0.0;
    float maior_media = 0.0, menor_media = 10.0;
    char nome[50];

    printf("Quantidade de alunos: ");
    scanf("%d", &qtd_alunos);

    if (qtd_alunos <= 0) return 0;

    for (i = 1; i <= qtd_alunos; i++) {
        printf("\nNome do %do aluno: ", i);
        scanf("%s", nome);
        printf("Nota 1: ");
        scanf("%f", &n1);
        printf("Nota 2: ");
        scanf("%f", &n2);

        media = (n1 + n2) / 2.0;
        soma_medias = soma_medias + media;

        if (i == 1) { 
            maior_media = media;
            menor_media = media;
        } else {
            if (media > maior_media) maior_media = media;
            if (media < menor_media) menor_media = media;
        }

        if (media >= 7.0) {
            aprovados++;
        } else if (media >= 5.0) {
            recuperacao++;
        } else {
            reprovados++;
        }
    }

    printf("\n--- Resultado Turma ---\n");
    printf("Alunos totais: %d\n", qtd_alunos);
    printf("Aprovados: %d\n", aprovados);
    printf("Em recuperacao: %d\n", recuperacao);
    printf("Reprovados: %d\n", reprovados);
    printf("Media geral: %.2f\n", soma_medias / qtd_alunos);
    printf("Maior media da turma: %.2f\n", maior_media);
    printf("Menor media da turma: %.2f\n", menor_media);

    return 0;
}