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