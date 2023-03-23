// Guilherme Vieira Oliveira,
// Questão 3
// Data: 20/03/2023.
// Faça um programa que recebe a idade de uma pessoa e se idade menor que 30 aparece a
// mensagem Você é muito jovem. Caso idade maior que 30 anos, o programa não fará nada. 

#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    printf("Qual a sua idade?");
    scanf("%d", &idade);

    if (idade<30){
        printf("Voce e muito jovem!");
    }
    

}
