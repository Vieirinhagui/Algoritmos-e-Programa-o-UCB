// Guilherme Vieira Oliveira,
// Questão 11
// Data: 20/03/2023.
// Construa um algoritmo que receba como entrada três valores e os imprima em ordem
// crescente.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a, b, c, x = 0;
    printf("Qual o primeiro valor? ");
    scanf("%f", &a);
    printf("Qual o segundo valor? ");
    scanf("%f", &b);
    printf("Qual o terceiro valor? ");
    scanf("%f", &c);

    if (a > b)
    {
        x = a;
        a = b;
        b = x;
    }
    if (b <= c)
    {
        printf("A ordem crescente e: %.2f %.2f %.2f\n", a, b, c);
    }
    else
    {
        if (a <= c)
        {
            printf("A ordem crescente e: %.2f %.2f %.2f\n", a, c, b);
        }
        else
        {
            printf("A ordem crescente e: %.2f %.2f %.2f\n", c, a, b);
        }
    }
}
