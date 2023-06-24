#include <stdio.h>
#include <stdlib.h>

#define tamanho 10

void inicializaVetor(int vetor[]);
void mostraVetor(int vetor[]);
void mergeSort(int vetor[], int inicio, int fim);
void juntaVetor(int vetor[], int inicio, int meio, int fim);

int main(void)
{
    int array[tamanho];

    inicializaVetor(array);
    mostraVetor(array);
    mergeSort(array, 0, tamanho-1);

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
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
}

void mergeSort(int vetor[], int inicio, int fim)
{
    if (inicio < fim)
    {
        int meio = (inicio + fim) / 2;
        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio+1, fim);
        juntaVetor(vetor, inicio, meio, fim);
    }
}

void juntaVetor(int vetor[], int inicio, int meio, int fim)
{    
    int fimEsquerdo = meio - inicio + 1; 
    int vetorEsquerdo[fimEsquerdo];
                                    // determina o tamanho dos vetores
    int fimDireito = fim - meio;
    int vetorDireito[fimDireito];

    for (int i = 0; i < fimEsquerdo; i++)
    {
        vetorEsquerdo[i] = vetor[inicio + i]; 
    }
    
    // passando os elementos para os vetores de comparação

    int indice = meio + 1;
    for (int i = 0; i < fimDireito; i++)
    {
        vetorDireito[i] = vetor[indice]; 
        indice++;
    }
    
    int parada = fim + 1; 
    int indiceVetor = inicio; 
    int indiceEsquerdo = 0; 
    int indiceDireito = 0;
    
    for (indiceVetor; indiceVetor < parada; indiceVetor++)
    {   
        if (indiceEsquerdo >= fimEsquerdo) // verifica se todos os valores da esquerda foram colocados
        {
            vetor[indiceVetor] = vetorDireito[indiceDireito]; // adiciona os valores restantes da ordenação
            indiceDireito++;
        }
        else if (indiceDireito >= fimDireito)
        {
            vetor[indiceVetor] = vetorEsquerdo[indiceEsquerdo];
            indiceEsquerdo++;
        }
        else if (vetorEsquerdo[indiceEsquerdo] < vetorDireito[indiceDireito])
        {
            vetor[indiceVetor] = vetorEsquerdo[indiceEsquerdo];
            indiceEsquerdo++;
        }
        else
        {
            vetor[indiceVetor] = vetorDireito[indiceDireito];
            indiceDireito++;
        }
    }

    printf("Vetor Esquerdo: [ ");
    for (int i = 0; i < fimEsquerdo; i++)
    {
        printf("%d ", vetorEsquerdo[i]);
    }
    printf("]");
    printf("\n\n");
    
    printf("Vetor Direito: [ ");
    for (int i = 0; i < fimDireito; i++)
    {
        printf("%d ", vetorDireito[i]);
    }
    printf("]");
    printf("\n\n");

    printf("Vetor Principal: [ ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("]");
    printf("\n\n");
}