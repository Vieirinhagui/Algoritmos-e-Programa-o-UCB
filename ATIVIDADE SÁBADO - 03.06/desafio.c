/*
Nome:Guilherme Vieira Oliveira
Data: 03/06/2023

DESAFIO:

Desenvolver um algoritmo que faça a ordenação utilizando os métodos: 

selection sort;
comb sort.
Apresentar na aula de sábado.

Enviar para o AVA até 12:00 horas do dia 06/06/23.

*/


#include <stdlib.h>
#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, indiceMin;
    
    for (i = 0; i < n-1; i++) {
        indiceMin = i;
        
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[indiceMin])
                indiceMin = j;
        }
        
        trocar(&arr[indiceMin], &arr[i]);
    }
}

void combSort(int arr[], int n) {
    int gap = n; 
    float fatorEncolhimento = 1.3; 
    
    int i, j;
    int trocado = 1; 
    
    while (gap > 1 || trocado) {
        if (gap > 1)
            gap = gap / fatorEncolhimento;
        
        trocado = 0;
        
        for (i = 0; i < n-gap; i++) {
            j = i + gap;
            
            if (arr[i] > arr[j]) {
                trocar(&arr[i], &arr[j]);
                trocado = 1;
            }
        }
    }
}

void imprimirArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array original:\n");
    imprimirArray(arr, n);
    
    selectionSort(arr, n);
    printf("Array ordenado pelo Selection Sort:\n");
    imprimirArray(arr, n);
    
    int arr2[] = {64, 25, 12, 22, 11};
    
    printf("Array original:\n");
    imprimirArray(arr2, n);
    
    combSort(arr2, n);
    printf("Array ordenado pelo Comb Sort:\n");
    imprimirArray(arr2, n);
    
    return 0;
}
