// Guilherme Vieira Oliveira,
// Questão 4
// Data: 20/03/2023.
// Faça um programa que entra com a idade de uma pessoa e se idade maior que 70 anos,
// aparece a mensagem Velho. Se idade maior que 21 anos, Adulto. Se idade menor que 21
// anos, Jovem.


#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    printf("Qual a sua idade?");
    scanf("%d", &idade);

    if (idade>=70){
        printf("Velho");
    }else if(idade>=21){
        printf("Adulto");
    }else if (idade<=20){
        printf("Jovem");
    }
    

}
