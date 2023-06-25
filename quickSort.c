#include <stdio.h>
#include <stdlib.h>

#define tamanho 8

void inicializaVetor(int vetor[]);
void quicksort();
int particiona();
void mostraVetor(int vetor[]);
void juntaVetor(int vetor[], int inicio, int meio, int fim);
void swap(int * x, int * y);

int main(void)
{
    int array[tamanho];

    inicializaVetor(array);
    mostraVetor(array);
    quicksort(array, 0, tamanho-1);
    mostraVetor(array);

    return 0;
}

void inicializaVetor(int vetor[])
{
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % 50;
    }
}

void mostraVetor(int vetor[])
{   
    for (int i = 0; i < tamanho; i++)
    {
        printf("[%d] = %d, ", i,vetor[i]);
    }
    printf("\n\n");
}

void quicksort(int vetor[], int inicio, int fim)
{
    if (fim < inicio)
    {
        return;
    }

    int pivo = particiona(vetor, inicio, fim);
    quicksort(vetor, inicio, pivo - 1); // ordena os menores
    quicksort(vetor, pivo + 1, fim); // ordena os maiores
}

int particiona(int vetor[], int inicio, int fim)
{
    int pivo = vetor[fim];
    int barraAmarela = inicio;
    for (int barraRoxa = inicio; barraRoxa < fim; barraRoxa++)
    {
        if (vetor[barraRoxa] <= pivo)
        {
            swap(&vetor[barraAmarela], &vetor[barraRoxa]);
            barraAmarela++;
            mostraVetor(vetor);
        }
    }

    swap(&vetor[barraAmarela], &vetor[fim]); // passando o pivô pra posição dele
    mostraVetor(vetor);

    return barraAmarela;
}

void swap(int * x, int * y)
{
    int swap = *x;
    *x = *y;
    *y = swap;
}