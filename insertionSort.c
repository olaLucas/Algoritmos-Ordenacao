#include <stdio.h>
#include <stdlib.h>

#define tamanho 10

void swap(int * a, int * b);
void bubbleSort(int array[]);
void mostrarVetor(int array[]);
void inicializaVetor(int array[]);

int main(void)
{
    int array[tamanho];

    inicializaVetor(array);
    mostrarVetor(array);
    bubbleSort(array);
    mostrarVetor(array);

    return 0;
}

void inicializaVetor(int array[])
{
    for (int i = 0; i < tamanho; i++)
    {
        array[i] = rand() % 50;
    }
}

void mostrarVetor(int array[])
{
    printf("\n\n");
    printf("Array: [ ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]");
    printf("\n");
}

void bubbleSort(int array[])
{
    int navegador = 0;
    for (int i = 1; i < tamanho; i++)
    {
        navegador = i;
        while (array[navegador] < array[navegador-1] != 0)
        {
            swap(&array[navegador], &array[navegador-1]);
            navegador--;
            mostrarVetor(array);
        }
    }
}

void swap(int * a, int * b)
{
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}