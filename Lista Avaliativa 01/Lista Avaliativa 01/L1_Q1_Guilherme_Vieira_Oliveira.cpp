// 1. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes,
// coletando dados sobre o salário e o número de filhos. A prefeitura deseja
// saber:
// a) média salarial da população;
// b) média do número de filhos;
// c) maior salário;
// d) percentual de pessoas com salário até R$ 100,00.
// O final da leitura de dados se dará com a entrada de um salário negativo
//
// Nome: Guilherme Vieira Oliveira

#include <stdio.h>
#include <stdlib.h>

float salario, media_dos_salarios = 0, habitantes = 0, soma_salarios = 0;
float maior_salario = 0, salario_ate_100 = 0, percentual = 0;
int numero_de_filhos, total_de_filhos = 0, media_de_filhos = 0;

int main()

{

    do

    {
        printf("Informe o salario: R$ ");
        scanf("%f", &salario);

        habitantes += 1;

        soma_salarios = salario + soma_salarios;
        media_dos_salarios = soma_salarios / habitantes;

        if (maior_salario < salario)

        {

            maior_salario = salario;
        }

        if (salario <= 100)

        {

            salario_ate_100 = salario;

            percentual = (salario_ate_100 * 100) / habitantes;
        }

        printf("Informe a quantidade de filhos: ");

        scanf("%d", &numero_de_filhos);

        total_de_filhos = numero_de_filhos + total_de_filhos;

        media_de_filhos = total_de_filhos / habitantes;

    }

    while (salario > -1);

    printf("\n\nA media dos salarios e de : R$ %.2f\n", media_dos_salarios);

    printf("\nMedia do numero de filhos: %d\n", media_de_filhos);

    printf("\nO maior salario e': R$ %.2f \n", maior_salario);

    printf("\nPercentual de pessoas com salarios ate R$100.00: %.0f %%\n", percentual);

    return 0;
}