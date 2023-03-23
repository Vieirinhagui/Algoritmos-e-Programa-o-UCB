#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1,nota2,nota3,nota4,nota5,media;
    printf("Qual a nota do primeiro aluno?");
    scanf("%f", &nota1);
    printf("Qual a nota do segundo aluno?");
    scanf("%f", &nota2);
    printf("Qual a nota do terceiro aluno?");
    scanf("%f", &nota3);
    printf("Qual a nota do quarto aluno?");
    scanf("%f", &nota4);
    printf("Qual a nota do quinto aluno?");
    scanf("%f", &nota5);

    media=((nota1+nota2+nota3+nota4+nota5)/5);

    printf("A media de notas e: %.2f ",media);

}