// Guilherme Vieira Oliveira,
// Questão 10
// Data: 20/03/2023.
// Faça um algoritmo que leia um número N e imprima “F1”, “F2” ou “F3”, conforme a
// condição:
//  “F1”, se N <= 10
//  “F2”, se N > 10 e N <= 100
//  “F3”se n > 100

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;

    printf("Qual o numero? ");
    scanf("%d", &n);

    if (n <= 10)
    {

        printf("F1");
    }
    else if (n > 10 && n <= 100)
    {
        printf("F2");
    }
    else if (n > 100)
    {
        printf("F2");
    }
}
