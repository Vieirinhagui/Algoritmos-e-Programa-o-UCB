/*
Nome: Guilherme Vieira Oliveira
Turma: GPE02M0392
Data: 24/05/2023
Tema: ?

5) Qual o valor impresso para a e b ?
#include <stdio.h>
int main () {
int a = 5, b = 15;
int *pA, *pB;
pA = &a;
pB = &b;
*pA = 10;
*pB = *pA;
pA = pB;
*pA = 20;
printf (“a=%d“, a);
printf(“ b=%d“, b);
getch();
}

*/

#include <stdio.h>

int main()
{
    int a = 5, b = 15;
    int *pA, *pB;
    pA = &a;
    pB = &b;
    *pA = 10;
    *pB = *pA;
    pA = pB;
    *pA = 20;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}

/*
RESULTADO:
a=10
b=20
*/