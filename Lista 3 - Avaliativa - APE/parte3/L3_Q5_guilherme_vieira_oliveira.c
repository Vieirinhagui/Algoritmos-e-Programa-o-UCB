/*
Nome: Guilherme Vieira Oliveira
Turma: GPE02M0392
Data: 24/05/2023
Tema: ?

5. Desenvolva um programa que declare um vetor de inteiros e um ponteiro para inteiros. Associe
o ponteiro ao vetor. Agora, some mais um (+1) a cada posição do vetor usando o ponteiro (use *).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5] = {10, 20, 30, 40, 50};
    int *ponteiro = vetor;

    printf("Valores antes da soma:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Valores depois da soma:\n");
    for (int i = 0; i < 5; i++)
    {
        (*ponteiro)++;
        printf("%d ", vetor[i]);
        ponteiro++;
    }
    printf("\n");

    return 0;
}