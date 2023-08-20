# Bubble Sort

# Código

```c
/**
 * Ordena um array de inteiros usando o algoritmo de ordenação por bolha (bubble sort).
 *
 * @param array - O array de inteiros a ser ordenado.
 * @param tamanho - O tamanho do array.
 */
void bubbleSort(int array[], int tamanho)
{
    // Laço externo controla o número de passagens pelo array.
    for (int i = 0; i < tamanho - 1; i++)
    {
        // Laço interno compara e ajusta elementos adjacentes.
        for (int j = i + 1; j < tamanho; j++)
        {
            // Compara o elemento atual com o próximo.
            if (array[i] > array[j])
            {
                // Se o elemento atual for maior que o próximo, troca-os.
                swap(&array[i], &array[j]);
            }
        }
    }
}
```

# Explicação

Este código implementa o algoritmo de ordenação de bolha (bubble sort) para ordenar um array de inteiros em ordem crescente. Vou explicar o funcionamento do código passo a passo:

- `void bubbleSort(int array[])`:
    - Esta é a definição de uma função chamada `bubbleSort` que aceita um array de inteiros como argumento. A função é do tipo `void`, o que significa que não retorna nenhum valor.
- `for (int i = 0; i < tamanho - 1; i++)`:
    - Este é um loop externo que itera através do array. A variável `i` começa em 0 e vai até `tamanho - 1`, onde `tamanho` é o número de elementos no array. Este loop controla o número de "passagens" pelo array. Cada passagem compara e ajusta elementos adjacentes.
- `for (int j = i + 1; j < tamanho; j++)`:
    - Este é um loop interno que começa a partir do elemento imediatamente após o elemento atual apontado por `i` e vai até o final do array. O loop interno compara o elemento atual em `array[i]` com os elementos subsequentes no array.
- `if (array[i] > array[j])`:
    - Dentro do loop interno, há uma condição que verifica se o elemento atual em `array[i]` é maior do que o elemento em `array[j]`. Se esta condição for verdadeira, significa que os elementos estão fora de ordem e precisam ser trocados.
- `swap(&array[i], &array[j]);`:
    - Se a condição acima for verdadeira, este trecho de código é executado. Ele chama uma função `swap`  para trocar os valores dos elementos `array[i]` e `array[j]`. Isso faz com que os elementos menores se movam para a direita do array, enquanto os maiores se movem para a esquerda, efetivamente ordenando os elementos adjacentes.
- O loop interno continua a comparar e ajustar elementos adjacentes até que todos os elementos tenham sido comparados e ajustados.
- O loop externo continua a executar as passagens até que não seja mais necessário ajustar elementos, o que significa que o array está completamente ordenado.

No final da execução desta função, o array terá sido ordenado em ordem crescente. É um algoritmo de ordenação simples, mas não muito eficiente para grandes conjuntos de dados, pois sua complexidade é O(n^2), onde "n" é o número de elementos no array. Existem algoritmos de ordenação mais eficientes para lidar com grandes conjuntos de dados, como o merge sort ou o quicksort.