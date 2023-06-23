#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];

    printf("Digite a primeira palavra: ");
    gets(str1);

    printf("Digite a segunda palavra: ");
    gets(str2);

    if (strcmp(str1, str2) == 0)
    {
        printf("As palavra são iguais\n");
    }
    else
    {
        printf("As palavra são diferentes\n");
    }

    return 0;
}
