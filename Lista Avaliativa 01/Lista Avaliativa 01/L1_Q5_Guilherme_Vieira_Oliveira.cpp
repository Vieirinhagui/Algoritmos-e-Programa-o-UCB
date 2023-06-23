// 5. Desenvolva um programa que calcula a metragem quadrada de um
// terreno, usando o teste no final para criar a opção de digitar novos
// valores sem sair do programa.
// O programa deverá pedir ao usuário para digitar a metragem1 do terreno,
// a metragem 2 e em seguida mostrar o tamanho total do terreno em
// metros quadrados. O programa deverá perguntar ao usuário se ele quer
// continuar para digitar outras metragens ou encerrar o programa.
//
// Nome: Guilherme Vieira Oliveira

#include <stdio.h>
#include <stdlib.h>

float metragem1, metragem2, metragem_quadrada;
int escolha;

int main()
{
  do
  {
    printf("Qual o primeiro valor?");
    scanf("%f", &metragem1);
    printf("Qual o segundo valor?");
    scanf("%f", &metragem2);
    metragem_quadrada = metragem1 * metragem2;
    printf("\n");
    printf("A metragem quadrada e: %.2f metros quadrados\n", metragem_quadrada);
    printf("\n");
    printf("Quer continuar?\n");
    printf("1- sim \n");
    printf("2- nao \n");
    scanf("%d", &escolha);
  } while (escolha == 1);
}