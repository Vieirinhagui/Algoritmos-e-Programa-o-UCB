// Guilherme Vieira Oliveira,
// Questão 7
// Data: 20/03/2023.
// Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o
// valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R3
// . Considere(atribua) para pi o valor 3.14159.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float raio, pi = 3.14159;
    double potencia, volume;
    printf("Qual o raio da esfera?");
    scanf("%f", &raio);
    potencia = pow(raio, 3);
    volume = ((1.33333) * pi * (potencia));

    printf("Volume = %.3f", volume);
}
