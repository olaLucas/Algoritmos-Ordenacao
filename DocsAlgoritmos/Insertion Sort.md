# Insertion Sort

# Código

```c
/**
 * Ordena um array de inteiros usando o algoritmo de ordenação por inserção (insertion sort).
 *
 * @param array - O array de inteiros a ser ordenado.
 * @param tamanho - O tamanho do array.
 */
void insertionSort(int array[], int tamanho)
{
    int navegador = 0; // Variável para navegar pelo array.
    
    // Loop externo que controla a inserção de elementos no subarray ordenado.
    for (int i = 1; i < tamanho; i++)
    {
        navegador = i; // Inicializa o navegador com o índice atual.
        
        // Loop interno que move elementos maiores para a direita até encontrar a posição correta.
        while (navegador > 0 && array[navegador] < array[navegador - 1] != 0)
        {
            // Compara o elemento atual com o elemento anterior e, se necessário, troca-os.
            swap(&array[navegador], &array[navegador - 1]);
            
            // Move o navegador para a posição anterior.
            navegador--;
            
            // Esta função (mostrarVetor) mostra o estado atual do vetor durante a ordenação.
            mostrarVetor(array);
        }
    }
}
```

# Explicação

Este código implementa o algoritmo de ordenação por inserção (insertion sort) para ordenar um array de inteiros em ordem crescente. Vou explicar o funcionamento do código passo a passo:

- `void insertionSort(int array[])`:
    - Esta é a definição de uma função chamada `insertionSort` que aceita um array de inteiros como argumento. A função parece ser uma implementação do algoritmo de ordenação por inserção.
- `int navegador = 0;`:
    - É declarada uma variável `navegador` para acompanhar a posição atual enquanto passamos pelo array.
- `for (int i = 1; i < tamanho; i++)`:
    - Este é um loop externo que percorre o array a partir do segundo elemento (índice 1). O objetivo é inserir o elemento atual em sua posição correta dentro do subarray ordenado à esquerda.
- `navegador = i;`:
    - Inicializa a variável `navegador` com o valor de `i`, que é a posição atual dentro do loop externo.
- `while (array[navegador] < array[navegador-1] != 0)`:
    - Este é um loop interno que verifica se o elemento atual no índice `navegador` é menor que o elemento anterior (índice `navegador - 1`). Se esta condição for verdadeira (ou seja, o elemento atual for menor que o elemento anterior), o loop interno continua.
- `swap(&array[navegador], &array[navegador-1]);`:
    - Dentro do loop interno, a função `swap` é usada para trocar os elementos no índice `navegador` e `navegador - 1`. Isso move o elemento atual para a posição correta no subarray ordenado à esquerda.
- `navegador--;`:
    - Após a troca, o `navegador` é decrementado, movendo a posição atual para a esquerda.
- `mostrarVetor(array);`:
    - Esta função (provavelmente definida em outro lugar) é chamada para mostrar o estado atual do vetor durante a ordenação. Ela é chamada após cada troca para visualizar o processo de ordenação.
- O loop interno continua até que o elemento atual não seja mais menor que o elemento anterior (ou seja, o subarray à esquerda está ordenado).
- O loop externo continua, repetindo esse processo para cada elemento não ordenado, até que todo o array esteja ordenado.

No final da execução desta função, o array estará completamente ordenado em ordem crescente. O algoritmo de ordenação por inserção é eficiente para arrays pequenos ou parcialmente ordenados, mas sua complexidade média é O(n^2), onde "n" é o número de elementos no array.