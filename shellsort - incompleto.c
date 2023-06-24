#include <stdio.h>
#include <stdlib.h>

#define tamanho 10

void swap(int * a, int * b);
void mostrarVetor(int array[]);
void inicializaVetor(int array[]);
void shellSort(int array[]);
void swap(int * a, int * b);

int main(void)
{
    int array[tamanho];

    inicializaVetor(array);
    mostrarVetor(array);
    shellSort(array);
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

void shellSort(int array[])
{
    int div = 3;
    int gap = 1;
    int navegador = 0;

    //do
    //{
        //gap = 3*gap+1;
    //} while (gap < tamanho);


    do
    {
        gap = gap / 2;
        for (int i = gap; i < gap; i += gap)
        {
            navegador = i;
            while (array[navegador] < array[navegador - gap] && navegador >= 0)
            {
                swap(&array[navegador], &array[navegador - gap]);
                navegador = navegador - gap;
                mostrarVetor(array);
            }
        }
        
    } while (gap > 1);
    
    
}

void swap(int * a, int * b)
{
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}