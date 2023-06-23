// Guilherme Vieira Oliveira,
// Questão 6
// Data: 20/03/2023.
// Faça um algoritmo recebe um valor inteiro e se o número for maior que 10, será impressa a
// frase: "O número e maior que 10". Se o número for menor que 10, será impressa a frase:
// “O número é menor que 10”. Se o número for igual a 10 aparecerá a frase: “Você acertou”.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    printf("Escreva um valor INTEIRO!");
    scanf("%d", &valor);
    if (valor == 10)
    {
        printf("Voce acertou!");
    }
    else if (valor > 10)
    {
        printf("O numero e maior que 10!");
    }
    else if (valor < 10)
    {
        printf("O numero e menor que 10!");
    }
}
