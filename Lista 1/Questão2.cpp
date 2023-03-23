// Guilherme Vieira Oliveira,
// Questão 2
// Data: 20/03/2023.
// Um programa que calcule a área do triângulo


#include <stdio.h>
#include <stdlib.h>

int main(){
    float base,altura,area;
    printf("Qual a base do triangulo?");
    scanf("%f", &base);
    printf("Qual a altura?");
    scanf("%f", &altura);
    area=((base*altura)/2);
    printf("A media de notas e: %.2f ",area);

}