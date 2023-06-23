// Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem
// 1,10 metro e cresce 3 centímetros por ano. Faça um programa em C que
// recebendo a altura e o crescimento anual de duas pessoas calcule e
// imprima quantos anos serão necessários para que a mais baixa seja
// maior que a outra. Caso isto não ocorra em 100 anos informar mensagem
// de impossibilidade.
// Encerre a entrada de dados quando for digitada uma idade negativa.
// (Não use vetores ou matrizes).
//
// Nome: Guilherme Vieira Oliveira

#include <stdio.h>
#include <stdlib.h>

float altura1, altura2, crescimento1, crescimento2;
int ano = 0;

int main()
{

  printf("Qual altura em cm da pessoa 1?");
  scanf("%f", &altura1);
  printf("Qual o crescimento em cm por ano?");
  scanf("%f", &crescimento1);
  printf("Qual altura em cm da pessoa 2?");
  scanf("%f", &altura2);
  printf("Qual o crescimento em cm por ano?");
  scanf("%f", &crescimento2);

  do
  {

    ano = ano + 1;
    altura1 = altura1 + crescimento1;
    altura2 = altura2 + crescimento2;

    printf("%f \n", altura1);
    printf("%f \n", altura2);
    printf("%d \n", ano);
    if (altura1 > altura2)
    {
      printf("A primeira pessoa será maior em %d anos", ano);
      break;
    }
  } while (ano <= 100);
  printf("A segunda pessoa chegara na altura da primeira pessoa em mais de 100 anos");
}