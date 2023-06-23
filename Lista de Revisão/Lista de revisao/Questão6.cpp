// Guilherme Vieira Oliveira,
// Questão 6
// Data: 20/03/2023.
// Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor
// unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário
// de cada peça 2. Após, calcule e mostre o valor a ser pago.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int codigopeca1, codigopeca2;
    int qntpeca1, qntpeca2;
    float precopeca1, precopeca2, precofinal;

    printf("Qual o codigo da peca 1? \n");
    scanf("%d", &codigopeca1);
    printf("Quantas pecas?  \n");
    scanf("%d", &qntpeca1);
    printf("Qual o valor da peca 1? \n");
    scanf("%f", &precopeca1);
    printf("Qual o codigo da peca 2? \n");
    scanf("%d", &codigopeca2);
    printf("Quantas pecas? \n");
    scanf("%d", &qntpeca2);
    printf("Qual o valor da peca 2? \n");
    scanf("%f", &precopeca2);

    precofinal = (qntpeca1 * precopeca1) + (qntpeca2 * precopeca2);

    printf("Valor a pagar: R$%.2f", precofinal);
}