#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];
    int n;

    printf("Digite a primeira palavra: ");
    gets(str1);

    printf("Digite um número inteiro para cada caractere que queira salvar: ");
    scanf("%d", &n);

    strncpy(str2, str1, n);

    printf("A palavra resultante é: %s\n", str2);

    return 0;
}
