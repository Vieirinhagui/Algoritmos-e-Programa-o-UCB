// Guilherme Vieira Oliveira,
// Questão 4
// Data: 20/03/2023.
// Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto
// de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c, d, diferenca;
    printf("Insira o valor A! \t");
    scanf("%d", &a);
    printf("Insira o valor B! \t");
    scanf("%d", &b);
    printf("Insira o valor C! \t");
    scanf("%d", &c);
    printf("Insira o valor D! \t");
    scanf("%d", &d);
    diferenca = (a * b - c * d);
    printf("Diferenca = %d", diferenca);
}