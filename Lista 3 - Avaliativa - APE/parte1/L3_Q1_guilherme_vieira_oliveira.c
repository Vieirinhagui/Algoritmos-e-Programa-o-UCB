/*
Nome: Guilherme Vieira Oliveira
Turma: GPE02M0392
Data: 24/05/2023
Tema: ?

1) Crie um programa que carregue (armazene) números numa matriz 3 x 3.
Após a leitura dos números, você deverá criar um MENU que ofereça as seguintes
opções:
1 – Mostra a quantidade de números pares armazenados;
2 – Mostra a soma dos números ímpares armazenados;
3 – Mostra o maior e o menor número armazenado;
4 – Mostra a média dos números armazenados;
5 – Mostra a quantidade de números armazenados que são iguais a 10;
6 – Mostra a multiplicação dos números armazenados na diagonal principal
(índice da linha igual ao índice da coluna);
7 – Mostra a soma dos números armazenados que são divisíveis por 5.
8 – Armazena num vetor todos os números menores que 8. Mostrar o vetor
resultante.
9 – Consulta um número na matriz. O usuário deverá informar qual o número
deseja procurar na matriz, caso encontre, informar o número e qual a posição(índices)
na matriz.
10 – SAIR
*/

#include <stdio.h>
#include <stdlib.h>

int matriz[3][3];

main()
{
    registraNumero();
    printf("\n\n\n");
    menu();
}
registraNumero()
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("Digite um número!");
            scanf("%d", &matriz[i][j]);
        }
    return matriz;
}

menu()
{
    int escolha;
    printf("\n");
    printf("Escolha uma opção: \n");
    printf("1- Quantidade de números pares armazenados \n");
    printf("2- Soma dos números ímpares armazenados \n");
    printf("3- Maior e o menor número armazenado \n");
    printf("4- Média dos números armazenados \n");
    printf("5- Quantidade de números armazenados que são iguais a 10 \n");
    printf("6- Multiplicação dos números armazenados na diagonal principal \n");
    printf("7- Soma dos números armazenados que são divisíveis por 5 \n");
    printf("8- Todos os números menores que 8 \n");
    printf("9- Consulta um número na matriz \n");
    printf("10- Nova matriz \n");
    printf("11- SAIR \n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        numeroPar();
        break;
    case 2:
        somaImpar();
        break;
    case 3:
        numeroMaiorMenor();
        break;
    case 4:
        mediaNumeros();
        break;
    case 5:
        numeroDez();
        break;
    case 6:
        multiplicacaoDiagonal();
        break;
    case 7:
        numeroCinco();
        break;
    case 8:
        menorOito();
        break;
    case 9:
        consultaNumero();
        break;
    case 10:
        main();
        break;
    case 11:
        printf("Ate mais");
        break;
    default:
        menu();
        break;
    }
}
numeroPar()
{
    int i, j;
    int qnt_par = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (((matriz[i][j]) % 2) == 0)
            {
                qnt_par++;
            }
        }
    }
    printf("A quantidade de números pares é: %d \n", qnt_par);
    return menu();
}

somaImpar()
{
    int i, j;
    int soma = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (((matriz[i][j]) % 2) != 0)
            {
                soma = soma + matriz[i][j];
            }
        }
    }
    printf("A soma dos números impares é: %d \n", soma);
    return menu();
}

numeroMaiorMenor()
{
    int i, j;
    int maior = 0, menor = 1;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }
        }
    }
    printf("O maior número é: %d \nO menor número é: %d \n", maior, menor);
    return menu();
}

mediaNumeros()
{
    int i, j;
    float soma = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            soma = soma + matriz[i][j];
        }
    }
    printf("A media dos números é: %.1f \n", soma / 9);
    return menu();
}
numeroDez()
{
    int i, j;
    int qnt_dez = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] == 10)
            {
                qnt_dez++;
            }
        }
    }
    if (qnt_dez == 0)
    {
        printf("Nenhum número é igual a 10! \n");
    }
    else
    {
        printf("A quantidade de números iguais a 10 é: %d \n", qnt_dez);
    }
    return menu();
}

multiplicacaoDiagonal()
{
    int i, j;
    int multiplicacao = 1;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                multiplicacao = multiplicacao * matriz[i][j];
            }
        }
    }
    printf("A multiplicação da diagonal é: %d \n", multiplicacao);
    return menu();
}

numeroCinco()
{
    int i, j;
    int qnt_cinco = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (((matriz[i][j]) % 5) == 0)
            {
                qnt_cinco++;
            }
        }
    }
    if (qnt_cinco == 0)
    {
        printf("Nenhum número é divisível por 5! \n");
    }
    else
    {
        printf("A soma dos números divisíveis por 5 é: %d \n", qnt_cinco);
    }
    return menu();
}

int menorOito()
{
    int i, j, index = 0;
    float vetor[9] = {};
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if ((matriz[i][j]) < 8)
            {
                vetor[index] = matriz[i][j];
                printf("vetor[%d] = %.1f \n", index, vetor[index]);
                index++;
            }
        }
    }
    return menu();
}

consultaNumero()
{
    int n;
    printf("Qual número deseja consultar?");
    scanf("%d", &n);

    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if ((matriz[i][j]) == n)
            {
                return printf("A posição na matriz é: matriz[%d][%d]", i, j);
            }
        }
    }
    printf("Número inexistente na matriz! \n");
    return menu();
}