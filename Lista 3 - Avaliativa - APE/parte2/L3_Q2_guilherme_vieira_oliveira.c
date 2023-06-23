/*
Nome: Guilherme Vieira Oliveira
Turma: GPE02M0392
Data: 24/05/2023
Tema: ?

2) Quais os valores impressos ?
main( ) {
int *pontA, *pontB, v1, v2;
v1 = 3;
v2 = 12;
pontA = &v1;
pontB = pontA;
*pontB = 44;
printf("Valores das variáveis");
printf("v1 (conteudo) = %d",v1);
printf("v1 (endereco) = %d",&v1);
printf("v2 (conteudo) = %d",v2);
printf("v2 (endereco) = %d",&v2);
printf("Valores dos ponteiros");
printf("pontA (conteudo) = %d",pontA);
printf("pontA (endereco) = %d",&pontA);
printf("pontA (valor do ponteiro) = %d",*pontA);
printf("pontB (conteudo) = %d",pontB);
printf("pontB (endereco) = %d",&pontB);
printf("pontB (valor do ponteiro) = %d",*pontB);
getch(); }
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pontA, *pontB, v1, v2;
    v1 = 3;
    v2 = 12;
    pontA = &v1;
    pontB = pontA;
    *pontB = 44;

    printf("Valores das variáveis:\n");
    printf("v1 (conteudo) = %d\n", v1);
    printf("v1 (endereco) = %p\n", (void *)&v1);
    printf("v2 (conteudo) = %d\n", v2);
    printf("v2 (endereco) = %p\n", (void *)&v2);

    printf("Valores dos ponteiros:\n");
    printf("pontA (conteudo) = %p\n", (void *)pontA);
    printf("pontA (endereco) = %p\n", (void *)&pontA);
    printf("pontA (valor do ponteiro) = %d\n", *pontA);
    printf("pontB (conteudo) = %p\n", (void *)pontB);
    printf("pontB (endereco) = %p\n", (void *)&pontB);
    printf("pontB (valor do ponteiro) = %d\n", *pontB);

    return 0;
}

/*
RESULTADO:

Valores das variáveis:
v1 (conteudo) = 44
v1 (endereco) = 0x7ffc1fcf61a4
v2 (conteudo) = 12
v2 (endereco) = 0x7ffc1fcf61a0
Valores dos ponteiros:
pontA (conteudo) = 0x7ffc1fcf61a4
pontA (endereco) = 0x7ffc1fcf61b0
pontA (valor do ponteiro) = 44
pontB (conteudo) = 0x7ffc1fcf61a4
pontB (endereco) = 0x7ffc1fcf61a8
pontB (valor do ponteiro) = 44

*/