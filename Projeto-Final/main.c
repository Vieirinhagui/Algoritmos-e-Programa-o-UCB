#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Para usar a função sleep() em sistemas UNIX

#define DELAY 500 // Tempo de atraso em milissegundos (ajuste conforme necessário)

float peso;
float volume;
guindaste(peso)
{
}
calcula_peso(volume)
{
    int r = 25;
    peso = volume * r;
    return peso;
}
calcula_volume(base, altura, comprimento)
{
    float base, altura, comprimento;
    printf("Digite o valor da base!");
    scanf("%f", &base);
    printf("Digite o valor da altura!");
    scanf("%f", &altura);
    printf("Digite o valor da comprimento!");
    scanf("%f", &comprimento);
    volume = base * altura * comprimento;
    return volume
}
menu()
{
    printf("1- Calcular volume da coluna!\n");
    printf("2- Mostrar peso!\n");
    printf("3- Mostrar volume!\n");
    printf("4- Mostrar guindaste a ser usado!\n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        calcula_volue();
        break;

    case 2:
        printf(calcula_peso(volume));
        break;

    case 3:
        printf("O volume é %.2f", volume);
        break;

    case 4:
        printf(guidaste());
        break;

    default:
        break;
    }
}

int main()
{
    char name[10] = "ENGENHARIA";
    int i, j, k;
    int blink = 0;

    while (1)
    {
        // Limpa a tela
        printf("\033[H\033[J");

        // Verifica se o nome deve piscar ou não
        if (blink == 0)
        {
            // Imprime a borda superior
            for (i = 0; i < 12; i++)
            {
                printf("-");
            }
            printf("\n");

            // Imprime o nome com a borda lateral
            for (i = 0; i < 10; i++)
            {
                printf("|");
                for (j = 0; j < 10; j++)
                {
                    printf("%c", name[j]);
                }
                printf("|\n");
            }

            // Imprime a borda inferior
            for (i = 0; i < 12; i++)
            {
                printf("-");
            }
            printf("\n");

            blink = 1;
        }
        else
        {
            // Imprime espaços em branco no lugar do nome
            for (i = 0; i < 12; i++)
            {
                printf(" ");
            }
            printf("\n");

            // Imprime espaços em branco no lugar do nome
            for (i = 0; i < 10; i++)
            {
                printf(" ");
                for (j = 0; j < 10; j++)
                {
                    printf(" ");
                }
                printf(" \n");
            }

            // Imprime espaços em branco no lugar do nome
            for (i = 0; i < 12; i++)
            {
                printf(" ");
            }
            printf("\n");

            blink = 0;
        }

        // Atraso
        usleep(DELAY * 1000); // Para sistemas UNIX
        // Sleep(DELAY); // Para sistemas Windows (descomente a linha e comente a anterior)
    }

    return 0;
}
