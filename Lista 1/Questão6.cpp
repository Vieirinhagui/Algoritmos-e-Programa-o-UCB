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
