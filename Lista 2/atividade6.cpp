#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];
    int n;

    printf("Digite a primeira palavra: ");
    gets(str1);

    printf("Digite a segunda palavra: ");
    gets(str2);

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    strncat(str1, str2, n);

    printf("A palavra resultante é: %s\n", str1);

    return 0;
}
