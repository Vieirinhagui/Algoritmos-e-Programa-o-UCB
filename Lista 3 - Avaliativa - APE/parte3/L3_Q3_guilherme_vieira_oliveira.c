/*
Nome: Guilherme Vieira Oliveira
Turma: GPE02M0392
Data: 24/05/2023
Tema: ?

3. Desenvolva um programa em C que contenha um vetor contendo 5 elementos inteiros. Utilizando
apenas notação de ponteiros, leia esse vetor do teclado e imprima o endereço das posições
contendo valores pares.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5];

    printf("Digite 5 números inteiros:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", vetor + i);
    }

    printf("Endereço das posições com valores pares:\n");

    for (int i = 0; i < 5; i++)
    {
        if (*(vetor + i) % 2 == 0)
        {
            printf("%p\n", (vetor + i));
        }
    }

    return 0;
}
