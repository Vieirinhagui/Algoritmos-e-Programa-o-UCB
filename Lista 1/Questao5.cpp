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
