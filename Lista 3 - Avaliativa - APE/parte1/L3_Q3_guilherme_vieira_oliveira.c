/*

Nome: Guilherme Vieira Oliveira
Turma: GPE02M0392
Data: 24/05/2023
Tema: ?

3) Crie um programa em C que cadastre os dados de 5 alunos. Os dados a serem
cadastrados são: nome, matrícula, endereço, sexo, os nomes das 3 disciplinas e as 3
notas de cada disciplina que ele está cursando.

 Os dados devem ser cadastrados em um vetor e/ou matriz.
 Após o cadastro informe:

 a)Os dados dos alunos cadastrados e a sua situação ("aprovado" ou
"reprovado") em cada disciplina.
 b)Os dados do aluno com maior média em "LPI".
 c)A média geral dos alunos na disciplina "Algoritmo".
 d)A quantidade de alunos(as) reprovados em qualquer disciplina.

OBS.:
    1) Usar uma estrutura switch para mostrar os resultados calculados.
    2) Para o aluno ser aprovado a média das notas deve ser >= 6

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_ALUNOS 5
#define NUM_DISCIPLINAS 3

typedef struct
{
    char nome[100];
    int matricula;
    char endereco[100];
    char sexo[20];
    char disciplinas[NUM_DISCIPLINAS][100];
    float notas[NUM_DISCIPLINAS][3];
} Aluno;

void limparBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

void cadastrarAlunos(Aluno alunos[])
{
    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        printf("Aluno %d\n", i + 1);

        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        limparBuffer();

        printf("Endereço: ");
        fgets(alunos[i].endereco, sizeof(alunos[i].endereco), stdin);
        alunos[i].endereco[strcspn(alunos[i].endereco, "\n")] = '\0';

        printf("Sexo: ");
        scanf(" %c", &alunos[i].sexo);
        limparBuffer();

        for (int j = 0; j < NUM_DISCIPLINAS; j++)
        {
            printf("Nome da disciplina %d: ", j + 1);
            fgets(alunos[i].disciplinas[j], sizeof(alunos[i].disciplinas[j]), stdin);
            alunos[i].disciplinas[j][strcspn(alunos[i].disciplinas[j], "\n")] = '\0';

            for (int k = 0; k < 3; k++)
            {
                printf("Nota %d da disciplina %d: ", k + 1, j + 1);
                scanf("%f", &alunos[i].notas[j][k]);
                limparBuffer();
            }
        }

        printf("\n");
    }
}

void exibirAlunos(Aluno alunos[])
{
    printf("Dados dos alunos cadastrados:\n");

    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        printf("Aluno %d\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Endereço: %s\n", alunos[i].endereco);
        printf("Sexo: %c\n", alunos[i].sexo);

        for (int j = 0; j < NUM_DISCIPLINAS; j++)
        {
            printf("Disciplina: %s\n", alunos[i].disciplinas[j]);

            float media = (alunos[i].notas[j][0] + alunos[i].notas[j][1] +
                           alunos[i].notas[j][2]) /
                          3;

            printf("Notas: %.2f, %.2f, %.2f\n", alunos[i].notas[j][0],
                   alunos[i].notas[j][1], alunos[i].notas[j][2]);

            if (media >= 6)
            {
                printf("Situação: Aprovado\n");
            }
            else
            {
                printf("Situação: Reprovado\n");
            }
        }

        printf("\n");
    }
}

void exibirAlunoMaiorMedia(Aluno alunos[])
{
    int indiceMaiorMedia = 0;
    float maiorMedia = 0;

    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        float mediaLPI = (alunos[i].notas[0][0] + alunos[i].notas[0][1] +
                          alunos[i].notas[0][2]) /
                         3;

        if (mediaLPI > maiorMedia)
        {
            maiorMedia = mediaLPI;
            indiceMaiorMedia = i;
        }
    }

    printf("Aluno com maior média em 'LPI':\n");
    printf("Nome: %s\n", alunos[indiceMaiorMedia].nome);
    printf("Matrícula: %d\n", alunos[indiceMaiorMedia].matricula);
    printf("Endereço: %s\n", alunos[indiceMaiorMedia].endereco);
    printf("Sexo: %c\n", alunos[indiceMaiorMedia].sexo);

    float mediaLPI = (alunos[indiceMaiorMedia].notas[0][0] +
                      alunos[indiceMaiorMedia].notas[0][1] +
                      alunos[indiceMaiorMedia].notas[0][2]) /
                     3;
    printf("Média em 'LPI': %.2f\n", mediaLPI);

    printf("\n");
}

void calcularMediaGeralAlgoritmo(Aluno alunos[])
{
    float somaNotas = 0;
    int numAlunos = 0;

    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        float mediaAlgoritmo = (alunos[i].notas[1][0] + alunos[i].notas[1][1] +
                                alunos[i].notas[1][2]) /
                               3;
        somaNotas += mediaAlgoritmo;
        numAlunos++;
    }

    float mediaGeral = somaNotas / numAlunos;

    printf("Média geral dos alunos na disciplina 'Algoritmo': %.2f\n",
           mediaGeral);
    printf("\n");
}

void contarAlunosReprovados(Aluno alunos[])
{
    int numReprovados = 0;

    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        for (int j = 0; j < NUM_DISCIPLINAS; j++)
        {
            float media = (alunos[i].notas[j][0] + alunos[i].notas[j][1] +
                           alunos[i].notas[j][2]) /
                          3;

            if (media < 6)
            {
                numReprovados++;
                break;
            }
        }
    }

    printf("Quantidade de alunos(as) reprovados em qualquer disciplina: %d\n",
           numReprovados);
    printf("\n");
}

int main()
{
    Aluno alunos[NUM_ALUNOS];

    cadastrarAlunos(alunos);

    int opcao;

    do
    {
        printf("Menu de opções:\n");
        printf("1. Exibir dados dos alunos cadastrados e situação em cada "
               "disciplina\n");
        printf("2. Exibir aluno com maior média em 'LPI'\n");
        printf("3. Calcular média geral dos alunos na disciplina 'Algoritmo'\n");
        printf("4. Contar alunos reprovados em qualquer disciplina\n");
        printf("0. Sair\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            exibirAlunos(alunos);
            break;
        case 2:
            exibirAlunoMaiorMedia(alunos);
            break;
        case 3:
            calcularMediaGeralAlgoritmo(alunos);
            break;
        case 4:
            contarAlunosReprovados(alunos);
            break;
        case 0:
            printf("Encerrando o programa.\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}