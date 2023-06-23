// Guilherme Vieira Oliveira,
// Questão 5
// Data: 20/03/2023.
// Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de
// vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15%
// de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nome[255];
    float salario, vendas;

    printf("Qual o nome do vendedor? \n");
    scanf("%s", nome);
    printf("Qual o salario fixo \n");
    scanf("%f", &salario);
    printf("Qual o total de vendas efetuadas por ele no mes (em dinheiro). \n");
    scanf("%f", &vendas);

    salario=(salario+(0.15*vendas));
    printf("Total = R$%.2f",salario);
}