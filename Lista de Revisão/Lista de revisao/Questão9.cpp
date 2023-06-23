// Guilherme Vieira Oliveira,
// Questão 9
// Data: 20/03/2023.
// Faça um algoritmo que leia dois números A e B e imprima o maior deles.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   float a,b;
   printf("Qual o valor de A? ");
   scanf("%f", &a);
   printf("Qual o valor de B? ");
   scanf("%f", &b);

   if(a>b){
    printf("%.2f e maior que %.2f",a,b);
   }else{
    printf("%.2f e maior que %.2f",b,a);
   }

}
