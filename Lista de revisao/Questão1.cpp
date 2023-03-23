// Guilherme Vieira Oliveira,
// Questão 1
// Data: 20/03/2023.
// Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma
// de A e B atribuindo o seu resultado na variável X. Imprima X conforme exemplo
// apresentado abaixo. Não apresente mensagem alguma além daquilo que está sendo
// especificado.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b,x;
    printf("Insira o valor A! \t");
    scanf("%d", &a);
    printf("Insira o valor B! \t");
    scanf("%d", &b);

    x=a+b;

    printf("X = %d",x);
}