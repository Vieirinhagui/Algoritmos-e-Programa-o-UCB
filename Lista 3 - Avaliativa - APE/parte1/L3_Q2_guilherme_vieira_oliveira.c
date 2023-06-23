/*

Nome: Guilherme Vieira Oliveira
Turma: GPE02M0392
Data: 24/05/2023
Tema: ?

2) Crie um programa que armazene 3 nomes numa matriz de strings. Após o
cadastro, você deverá criar um MENU que informe:
    1 – Mostra os nomes cadastrados em maiúsculo e na ordem inversa, ou seja,
    mostra do último ao primeiro nome cadastrado;
    2 – Mostra quantas pessoas com o nome “PAULO” foram cadastradas;
    3 - Mostra quantas letras ‘A’ foram cadastradas na matriz de strings;
    4 – Mostra quantas letras ‘C’ o segundo nome cadastrado possui.
    5 – SAIR

Obs.:
    (1) O programa só poderá ser finalizado quando a opção SAIR for
    escolhida pelo usuário!
    (2) Aproveite a estrutura de repetição da leitura dos dados, para
    calcular as informações a serem apresentadas na estrutura
    switch (Menu).

*/
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_MAX 40
#define NUM_NOMES 3

char nomes[NUM_NOMES][TAMANHO_MAX];
int escolha=0;
int main() {
  cadastroNomes();
}
menu(){
  printf("--------------------------------- \n");
  printf("Escolha uma opção: \n");
  printf("1- Mostra os nomes cadastrados em maiúsculo e na ordem inversa \n");
  printf("2- Mostra quantas pessoas com o nome “PAULO” foram cadastradas \n");
  printf("3- Mostra quantas letras ‘A’ foram cadastradas na matriz de strings \n");
  printf("4- Mostra quantas letras ‘C’ o segundo nome cadastrado possui. \n");
  printf("5- SAIR \n");
  printf("6- CONTINUAR \n");
  scanf("%d", &escolha);
  switch(escolha){
    case 1:
      ordemInversa();
      break;
    case 2:
      consultaNomes();
      break;
    case 3:
      consultaLetraA();
      break;
    case 4:
      consultaLetraC();
      break;
    case 5:
      break;
    case 6:
      cadastroNomes();
      break;
    default:
      break;
  }
    
}
cadastroNomes() {
  for (int i = 0; i < NUM_NOMES; i++) {
    printf("Digite um nome:");
    scanf("%s", nomes[i]);
  }
  for (int i = 0; i < NUM_NOMES; i++) {

    for (int j = 0; nomes[i][j] != '\0'; j++) {
      nomes[i][j] = putchar(toupper(nomes[i][j]));
    }
    printf("\n");
  }
  system("clear");
  menu();
}
ordemInversa() {
  for (int i = NUM_NOMES; i != -1; i--) {
    printf("%s \n", nomes[i]);
  }
  return menu();
}

consultaNomes() {
  int qnt_nome = 0;
  for (int i = 0; i < NUM_NOMES; i++) {
    if (strcmp(nomes[i], "PAULO") == 0) {
      qnt_nome++;
    }
  }
  if (qnt_nome == 0) {
    printf("Não existem pessoas cadastradas com nome paulo \n");
  } else {
    printf("Existem %d pessoa(s) com nome paulo cadastradas \n", qnt_nome);
  }
  return menu();
}

consultaLetraA() {
    int qnt_letra_a = 0;
    for (int i = 0; i < NUM_NOMES; i++) {
        for (int j = 0; nomes[i][j] != '\0'; j++) {
            if (nomes[i][j] == 'A' || nomes[i][j] == 'a') {
                qnt_letra_a++;
            }
        }
    }
    if (qnt_letra_a == 0) {
        printf("Não existem letras 'A' nos nomes cadastrados. \n");
    } else {
        printf("Existem %d letra(s) 'A' nos nomes cadastrados. \n", qnt_letra_a);
    }
  return menu();
}
consultaLetraC() {
    int qnt_letra_c = 0;
    if (NUM_NOMES >= 2) {
        for (int j = 0; nomes[1][j] != '\0'; j++) {
            if (nomes[1][j] == 'C' || nomes[1][j] == 'c') {
                qnt_letra_c++;
            }
        }

        if (qnt_letra_c == 0) {
            printf("Não existem letras 'C' na segunda string cadastrada. \n");
        } else {
            printf("Existem %d letra(s) 'C' na segunda string cadastrada. \n", qnt_letra_c);
        }
    }
  return menu();
}
