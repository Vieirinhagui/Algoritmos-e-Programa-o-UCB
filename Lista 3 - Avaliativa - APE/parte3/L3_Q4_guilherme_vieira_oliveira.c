/*
Nome: Guilherme Vieira Oliveira
Turma: GPE02M0392
Data: 24/05/2023
Tema: ?

4. Crie uma função que aceite como parâmetro um vetor de inteiros com N valores, e determina o
maior elemento do vetor e o número de vezes que este elemento ocorreu no vetor. Por exemplo,
para um vetor com os seguintes elementos: 3, 5, 12, 6, 7, 27, 9, 16, 27, a função deve retorna para
o programa que a chamou o valor 27 e o número 2 (indicando que o número 27 ocorreu 2 vezes).
A função deve ser do tipo void.

*/

#include <stdio.h>
#include <stdlib.h>

void encontrarMaiorElemento(int vetor[], int tamanho)
{
    int maior = vetor[0];
    int contador = 1;

    for (int i = 1; i < tamanho; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            contador = 1;
        }
        else if (vetor[i] == maior)
        {
            contador++;
        }
    }

    printf("Maior elemento: %d\n", maior);
    printf("Número de ocorrências: %d\n", contador);
}

int main()
{
    int vetor[] = {3, 5, 12, 6, 7, 27, 9, 16, 27};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    encontrarMaiorElemento(vetor, tamanho);

    return 0;
}
