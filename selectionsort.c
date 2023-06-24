#include <stdio.h>
#include <stdlib.h>

#define tamanho 10

void swap(int * a, int * b);
void mostrarVetor(int array[]);
void inicializaVetor(int array[]);
void selectionSort(int array[]);
void swap(int * a, int * b);

int main(void)
{
    int array[tamanho];

    inicializaVetor(array);
    mostrarVetor(array);
    selectionSort(array);
    mostrarVetor(array);

    return 0;
}

void inicializaVetor(int array[])
{
    for (int i = 0; i < tamanho ; i++)
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

void selectionSort(int array[])
{
    int indiceMin;
    for (int i = 0; i < tamanho - 1; i++)
    {
        indiceMin = i;
        for (int j = i; j < tamanho; j++)
        {
            if (array[j] < array[indiceMin])
            {
                indiceMin = j;
            }            
        }

        if (indiceMin != i)
        {
            swap(&array[i], &array[indiceMin]);
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