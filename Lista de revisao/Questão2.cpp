// Guilherme Vieira Oliveira,
// Questão 2
// Data: 20/03/2023.
// Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre
// elas e atribua à variável SOMA. A seguir escrever o valor desta variável.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b,soma;
    printf("Insira o valor A! \t");
    scanf("%d", &a);
    printf("Insira o valor B! \t");
    scanf("%d", &b);

    soma=a+b;

    printf("SOMA = %d",soma);
}