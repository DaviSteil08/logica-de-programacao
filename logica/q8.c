#include <stdio.h>

int main() {
    float horas_trabalhadas, valor_hora, salario_bruto;

    printf("Quantidade de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    
    printf("Valor recebido por hora: R$ ");
    scanf("%f", &valor_hora);
    
    salario_bruto = horas_trabalhadas * valor_hora;

    printf("O salario bruto do funcionario e: R$ %.2f\n", salario_bruto);

    return 0;
}