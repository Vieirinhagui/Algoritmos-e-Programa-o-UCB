// Guilherme Vieira Oliveira,
// Questão 3
// Data: 20/03/2023.
// Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua
// esta operação à variável PROD. A seguir mostre a variável PROD com mensagem
// correspondente.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b,prod;
    printf("Insira o valor A! \t");
    scanf("%d", &a);
    printf("Insira o valor B! \t");
    scanf("%d", &b);

    prod=a*b;

    printf("SOMA = %d",prod);
}