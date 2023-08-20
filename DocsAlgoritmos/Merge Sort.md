# Merge Sort

Este código implementa o algoritmo de ordenação por fundição (merge sort) para ordenar um array de inteiros em ordem crescente. Vou explicar o funcionamento do das principais funções passo a passo:

# mergeSort()

## Código

```c
void mergeSort(int vetor[], int inicio, int fim)
{
    if (inicio < fim)
    {
        // Calcula o índice do meio do intervalo
        int meio = (inicio + fim) / 2;

        // Chama recursivamente o mergeSort para a metade esquerda do intervalo
        mergeSort(vetor, inicio, meio);

        // Chama recursivamente o mergeSort para a metade direita do intervalo
        mergeSort(vetor, meio+1, fim);

        // Realiza a junção (merge) das duas metades ordenadas do vetor
        juntaVetor(vetor, inicio, meio, fim);
    }
}
```

## Explicação

- `void mergeSort(int vetor[], int inicio, int fim)`
    - Define a função `mergeSort` que aceita um vetor de inteiros `vetor[]` e os índices `inicio` e `fim` que representam o intervalo da lista a ser ordenada.
- `if (inicio < fim)`
    - Esta é uma verificação para determinar se o intervalo contém mais de um elemento. Se sim, o intervalo pode ser dividido em subintervalos menores para serem ordenados e, posteriormente, mesclados.
- `int meio = (inicio + fim) / 2;`
    - Calcula o índice do meio do intervalo. Isso é usado para dividir o intervalo em duas partes iguais.
- `mergeSort(vetor, inicio, meio);`
    - Chama recursivamente a função `mergeSort` para a metade esquerda do intervalo. Isso inicia o processo de ordenação para essa metade.
- `mergeSort(vetor, meio+1, fim);`
    - Chama recursivamente a função `mergeSort` para a metade direita do intervalo. Isso inicia o processo de ordenação para essa metade.
- `juntaVetor(vetor, inicio, meio, fim);`
    - Depois que as metades esquerda e direita foram ordenadas, a função `juntaVetor` é chamada para mesclá-las em uma única lista ordenada.

O processo de chamadas recursivas e mesclagem ordenada continua até que cada subintervalo contenha apenas um elemento, e então a mesclagem recursiva ocorre para criar uma lista ordenada final.

# juntaVetor()

## Código

```c
/**
 * Função para combinar dois subvetores ordenados em um único vetor ordenado.
 *
 * @param vetor     O vetor principal que contém os elementos a serem combinados.
 * @param inicio    O índice de início do subvetor a ser combinado.
 * @param meio      O índice que divide o subvetor em duas partes.
 * @param fim       O índice de término do subvetor a ser combinado.
 */
void juntaVetor(int vetor[], int inicio, int meio, int fim)
{    
    // Calcula o tamanho do subvetor esquerdo.
    int fimEsquerdo = meio - inicio + 1; 
    int vetorEsquerdo[fimEsquerdo];
    
    // Calcula o tamanho do subvetor direito.
    int fimDireito = fim - meio;
    int vetorDireito[fimDireito];

    // Copia os elementos do subvetor esquerdo para um vetor temporário.
    for (int i = 0; i < fimEsquerdo; i++)
    {
        vetorEsquerdo[i] = vetor[inicio + i]; 
    }
    
    // Copia os elementos do subvetor direito para um vetor temporário.
    int indice = meio + 1;
    for (int i = 0; i < fimDireito; i++)
    {
        vetorDireito[i] = vetor[indice]; 
        indice++;
    }
    
    // Inicialização de variáveis de controle.
    int parada = fim + 1; 
    int indiceVetor = inicio; 
    int indiceEsquerdo = 0; 
    int indiceDireito = 0;
    
    // Combinação dos elementos dos subvetores em um único vetor ordenado.
    for (indiceVetor; indiceVetor < parada; indiceVetor++)
    {   
        if (indiceEsquerdo >= fimEsquerdo)
        {
            // Todos os valores do subvetor esquerdo foram colocados.
            // Adiciona os valores restantes do subvetor direito ao vetor principal.
            vetor[indiceVetor] = vetorDireito[indiceDireito];
            indiceDireito++;
        }
        else if (indiceDireito >= fimDireito)
        {
            // Todos os valores do subvetor direito foram colocados.
            // Adiciona os valores restantes do subvetor esquerdo ao vetor principal.
            vetor[indiceVetor] = vetorEsquerdo[indiceEsquerdo];
            indiceEsquerdo++;
        }
        else if (vetorEsquerdo[indiceEsquerdo] < vetorDireito[indiceDireito])
        {
            // O elemento do subvetor esquerdo é menor.
            // Adiciona-o ao vetor principal e atualiza o índice do subvetor esquerdo.
            vetor[indiceVetor] = vetorEsquerdo[indiceEsquerdo];
            indiceEsquerdo++;
        }
        else
        {
            // O elemento do subvetor direito é menor ou igual.
            // Adiciona-o ao vetor principal e atualiza o índice do subvetor direito.
            vetor[indiceVetor] = vetorDireito[indiceDireito];
            indiceDireito++;
        }
    }
}
```

## Explicação

1. **Parâmetros de entrada**:
    - `vetor[]`: É o vetor principal que contém os elementos a serem ordenados.
    - `inicio`: É o índice de início do subvetor a ser combinado.
    - `meio`: É o índice que divide o subvetor em duas partes.
    - `fim`: É o índice de finalização do subvetor a ser combinado.
2. **Cálculo de tamanhos**:
    - `fimEsquerdo` é calculado como a diferença entre `meio` e `inicio`, mais 1. Isso representa o tamanho do subvetor esquerdo.
    - `fimDireito` é calculado como a diferença entre `fim` e `meio`. Isso representa o tamanho do subvetor direito.
    - Dois vetores temporários são criados, `vetorEsquerdo` e `vetorDireito`, para armazenar os subvetores esquerdo e direito, respectivamente.
3. **Cópia de elementos**:
    - Os elementos do vetor principal `vetor` são copiados para o vetor `vetorEsquerdo` usando um loop `for`. Isso cria uma cópia do subvetor esquerdo.
    - Os elementos do vetor principal `vetor` são copiados para o vetor `vetorDireito` usando outro loop `for`. Isso cria uma cópia do subvetor direito.
4. **Inicialização de variáveis de controle**:
    - `parada` é calculado como `fim + 1`. Isso representa o índice em que o processo de combinação será interrompido.
    - `indiceVetor` é inicializado com o valor de `inicio` e será usado para rastrear a posição atual no vetor principal `vetor`.
    - `indiceEsquerdo` e `indiceDireito` são inicializados com 0 e serão usados para rastrear as posições atuais nos subvetores esquerdo e direito.
5. **Combinação de elementos**:
    - Um loop `for` é iniciado, que itera de `indiceVetor` até `parada`.
    - Verifica-se se todos os elementos do subvetor esquerdo (`indiceEsquerdo >= fimEsquerdo`) já foram colocados. Se isso for verdade, os elementos restantes do subvetor direito são adicionados ao vetor principal.
    - Se todos os elementos do subvetor direito (`indiceDireito >= fimDireito`) já foram colocados, os elementos restantes do subvetor esquerdo são adicionados ao vetor principal.
    - Se ainda houver elementos em ambos os subvetores, compara-se o elemento atual em `vetorEsquerdo` com o elemento atual em `vetorDireito`. O elemento menor é adicionado ao vetor principal, e os índices correspondentes são atualizados.
    - Esse processo é repetido até que todos os elementos tenham sido colocados no vetor principal.
    
    Em resumo, a função `juntaVetor` é essencial para o algoritmo Merge Sort, pois combina dois subvetores ordenados em um único vetor ordenado, o que resulta na ordenação eficaz do vetor completo.