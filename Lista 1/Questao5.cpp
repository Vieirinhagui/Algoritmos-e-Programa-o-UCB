// Guilherme Vieira Oliveira,
// Questão 5
// Data: 20/03/2023.
// Faça um programa em C que leia a nota final, o total de presenças e o número total de
// aulas ministradas e imprima a nota final, o total de presenças e uma mensagem dizendo se
// este aluno foi aprovado ou reprovado. Sabe-se que a freqüência necessária é de no mínimo
// 75% das aulas ministradas e que a nota mínima deve ser maior ou igual a 6.0.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int presenca, aula;
    float nota, frequencia;
    printf("Qual a sua nota final?");
    scanf("%f", &nota);
    printf("Qual a seu total de presença?");
    scanf("%d", &presenca);
    printf("Quantas aulas foram ministradas?");
    scanf("%d", &aula);

    frequencia = aula * 0.75;
    printf("%f \n", frequencia);
    if (presenca < frequencia || nota < 6)
    {
        printf("Voce esta reprovado!");
    }
    else
    {
        printf("Voce passou");
    }
}
