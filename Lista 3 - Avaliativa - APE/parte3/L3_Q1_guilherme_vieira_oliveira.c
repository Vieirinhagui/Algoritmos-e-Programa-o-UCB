/*
Nome: Guilherme Vieira Oliveira
Turma: GPE02M0392
Data: 24/05/2023
Tema: ?

1. Faça um programa em C que armazene em um vetor 3 valores, e imprima os valores utilizando
notação de ponteiro.
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[3] = {10, 20, 30};
    int *ponteiro;

    ponteiro = vetor; // Atribui o endereço do primeiro elemento do vetor ao ponteiro

    // Imprime os valores utilizando notação de ponteiro
    for (int i = 0; i < 3; i++) {
        printf("Valor %d: %d\n", i + 1, *(ponteiro + i));
    }

    return 0;
}