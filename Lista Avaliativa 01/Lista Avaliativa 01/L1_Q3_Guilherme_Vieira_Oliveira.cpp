// 3. Elabore um programa que faça o sorteio de vários números e ao final
// mostra:
// a) A quantidade de números sorteados;
// b) O Maior numero sorteado;
// c) Quantos números pares foram sorteados;
// Observação: O programa deve finalizar quando for sorteado o valor 0
// (zero)e utilizar no máximo 3 variáveis não utilizar vetores ou matrizes.
//
// Nome: Guilherme Vieira Oliveira

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_num, maior_numero = 0, pares = 0, contador = 0;

int main() {

  srand(time(NULL));

  do {
    contador += 1;
    random_num = rand() % 101;
    if (maior_numero < random_num) {
      maior_numero = random_num;
    }
    if ((random_num % 2) == 0) {
      pares += 1;
    }
  } while (random_num != 0);

  printf("A quantidade de numeros sorteados ate o zero foram %d \n", contador);
  printf("O maior numero sorteado foi %d \n", maior_numero);
  printf("A quantidade de numeros pares sorteados foi %d \n", pares);
}


//Professor infelizmente nao consegui fazer somente com 3 variaveis, se puder considerar alguma pontuação
