#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 12) {
        printf("Classificacao: Crianca\n");
    } else if (idade >= 13 && idade <= 17) {
        printf("Classificacao: Adolescente\n");
    } else if (idade >= 18 && idade <= 59) {
        printf("Classificacao: Adulto\n");
    } else if (idade >= 60) {
        printf("Classificacao: Idoso\n");
    } else {
        printf("Idade invalida.\n");
    }

    return 0;
}