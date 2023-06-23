// 4. Elabore um programa que receba como dados de entrada duas notas de vários alunos e ao final mostra:
// a) A quantidade de alunos com media maior ou igual a 7,0;
// b) A Menor media da Turma;
// c) A Media geral da turma;
// d) Quantas vezes o programa rodou;
// Observação: O programa deve finalizar quando for digitado o valor 0 (zero) e utilizar no máximo 6 variáveis não utilizar vetores ou matrizes.
//
// Nome:Guilherme Vieira Oliveira

#include <stdio.h>
#include <stdlib.h>

float nota1, nota2, menor_nota = 0, soma_media = 0;
float media_geral = 0;
int contador, qnt_media = 0;

int main()
{
  printf("PARA PARAR O PROGRAMA DIGITE AS DUAS NOTAS COM O VALOR 0 \n\n\n\n");
  do
  {
    printf("Qual a primeira nota?");
    scanf("%f", &nota1);
    printf("Qual a segunda nota?");
    scanf("%f", &nota2);

    if (((nota1 + nota2) / 2) >= 7)
    {
      qnt_media += 1;
    }
    if (menor_nota > ((nota1 + nota2) / 2) && ((nota1 + nota2) / 2) != 0)
    {
      menor_nota = ((nota1 + nota2) / 2);
    }
    soma_media += ((nota1 + nota2) / 2);
    media_geral = (soma_media) / contador;
    contador += 1;
  } while (nota1 != 0 && nota2 != 0);

  printf("A quantidade de alunos acima da media foi %d \n", qnt_media);
  printf("A menor nota da turma foi %.2f \n", menor_nota);
  printf("A media geral da turma foi %.2f \n", media_geral);
  printf("O programa rodou %d veze(s) \n", contador - 1);
}