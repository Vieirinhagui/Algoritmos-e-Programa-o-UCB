// Guilherme Vieira Oliveira,
// Questão 8
// Data: 20/03/2023.
// Escreva um programa que leia três valores reais: A, B e C. Em seguida, calcule e
// mostre:
// a) a área do triângulo retângulo que tem A por base e C por altura.
// b) a área do círculo de raio C. (pi = 3.14159)
// c) a área do trapézio que tem A e B por bases e C por altura.
// d) a área do quadrado que tem lado B.
// e) a área do retângulo que tem lados A e B.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;
    float pi = 3.14159;
    printf("Qual valor de A? ");
    scanf("%f", &a);
    printf("Qual valor de B? ");
    scanf("%f", &b);
    printf("Qual valor de C? ");
    scanf("%f", &c);
    triangulo = ((a * c) / 2);
    circulo = pi * (c * c);
    trapezio = (((a + b) * c) / 2);
    quadrado = (b * b);
    retangulo = (a * b);
    printf("Triangulo: %.3f \n", triangulo);
    printf("Circulo: %.3f \n", circulo);
    printf("Trapezio: %.3f \n", trapezio);
    printf("Quadrado: %.3f \n", quadrado);
    printf("Retangulo: %.3f \n", retangulo);
}
