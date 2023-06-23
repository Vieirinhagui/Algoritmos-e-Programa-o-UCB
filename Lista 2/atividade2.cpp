#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];

    printf("Digite uma palavra: ");
    gets(str);

    printf("O tamanho da string digitada é: %d\n", strlen(str));

    return 0;
}