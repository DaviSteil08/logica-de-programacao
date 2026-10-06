# Desafio Final: Controle de Estacionamento

## 1. Descrição do Problema
Um estacionamento cobra R$ 10,00 pela primeira hora e R$ 5,00 por hora adicional. O sistema precisa calcular o valor a pagar com base na hora de entrada e saída, lidando inclusive com veículos que entram em um dia e saem na madrugada do dia seguinte (formato 24h).

## 2. Entradas Necessárias
- `hora_entrada` (Número Inteiro)
- `hora_saida` (Número Inteiro)

## 3. Processamento
- Se `hora_saida >= hora_entrada`: `tempo = hora_saida - hora_entrada`
- Se `hora_saida < hora_entrada` (virou a noite): `tempo = (24 - hora_entrada) + hora_saida`
- Se `tempo == 1`: o `valor` devido é R$ 10,00.
- Se `tempo > 1`: o `valor` devido é R$ 10,00 + `(tempo - 1) * 5,00`.

## 4. Saídas Esperadas
- Tempo total de permanência (em horas).
- Valor total a pagar.

## 5. Pseudocódigo Completo
```text
INICIO
   LEIA hora_entrada
   LEIA hora_saida

   SE hora_saida >= hora_entrada ENTAO
      tempo <- hora_saida - hora_entrada
   SENAO
      tempo <- (24 - hora_entrada) + hora_saida
   FIM_SE

   SE tempo == 1 ENTAO
      valor <- 10.00
   SENAO
      valor <- 10.00 + ((tempo - 1) * 5.00)
   FIM_SE

   ESCREVA "Tempo de permanência: ", tempo, "h"
   ESCREVA "Valor a pagar: R$ ", valor
FIM
