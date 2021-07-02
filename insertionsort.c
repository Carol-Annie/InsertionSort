#include "insertionsort.h"
#include <stdio.h>


void inserirSertion (int novo, int *vetor, int tamanho) {
    vetor[tamanho+1] = novo;
    tamanho = tamanho + 1;
}

void insertionSort(int *vetor, int n) {
    int i, chave, j;
    for (i = 1; i < n; i++) {
        chave = vetor[i];
        j = i - 1;
 
        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = chave;
    }
}