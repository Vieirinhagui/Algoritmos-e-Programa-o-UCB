/*
Nome: Guilherme Vieira Oliveira
Turma: GPE02M0392
Data: 24/05/2023
Tema: ?

1) Faça um programa que leia o nome, sexo e o valor da mensalidade de 3 alunos.
Após a leitura dos dados informe:
a) O valor da menor mensalidade;
b) A quantidade de alunos do sexo masculino ('M');
c) A média das mensalidades;
d) O nome e a idade do aluno mais velho
*/

#include <stdio.h>
#include <stdlib.h>W
#include <string.h>

struct Aluno
{
    char nome[50];
    char sexo;
    float mensalidade;
};

int main()
{
    struct Aluno alunos[3];
    float menorMensalidade;
    int quantidadeMasculino = 0;
    float somaMensalidades = 0.0;
    int idadeMaisVelho = 0;
    char nomeMaisVelho[50];

    for (int i = 0; i < 3; i++)
    {
        printf("Aluno %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", alunos[i].nome);

        printf("Sexo (M/F): ");
        scanf(" %c", &alunos[i].sexo);

        printf("Mensalidade: ");
        scanf("%f", &alunos[i].mensalidade);

        printf("\n");

        if (i == 0 || alunos[i].mensalidade < menorMensalidade)
        {
            menorMensalidade = alunos[i].mensalidade;
        }

        if (alunos[i].sexo == 'M')
        {
            quantidadeMasculino++;
        }

        somaMensalidades += alunos[i].mensalidade;
    }

    float mediaMensalidades = somaMensalidades / 3;

    for (int i = 0; i < 3; i++)
    {
        printf("Idade do aluno %s: ", alunos[i].nome);
        int idade;
        scanf("%d", &idade);
        if (idade > idadeMaisVelho)
        {
            idadeMaisVelho = idade;
            strcpy(nomeMaisVelho, alunos[i].nome);
        }
    }

    printf("Valor da menor mensalidade: R$%.2f\n", menorMensalidade);
    printf("Quantidade de alunos do sexo masculino: %d\n", quantidadeMasculino);
    printf("Média das mensalidades: R$%.2f\n", mediaMensalidades);
    printf("Aluno mais velho: %s\n", nomeMaisVelho);
    printf("Idade do aluno mais velho: %d\n", idadeMaisVelho);

    return 0;
}