#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];

    printf("Digite a primeira palavra: ");
    gets(str1);

    printf("Digite a segunda palavra: ");
    gets(str2);

    strcat(str1, str2);

    printf("As palavras concatenadas são: %s\n", str1);

    return 0;
}
