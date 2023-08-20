# Selection Sort

# Código

```c
/**
 * Ordena um array de inteiros usando o algoritmo de ordenação por seleção (selection sort).
 *
 * @param array - O array de inteiros a ser ordenado.
 * @param tamanho - O tamanho do array.
 */
void selectionSort(int array[], int tamanho)
{
    int indiceMin; // Variável para armazenar o índice do elemento mínimo.
    
    // Loop externo controla o número de passagens pelo array.
    for (int i = 0; i < tamanho - 1; i++)
    {
        indiceMin = i; // Assume que o elemento atual é o mínimo.
        
        // Loop interno encontra o índice do elemento mínimo não ordenado.
        for (int j = i; j < tamanho; j++)
        {
            if (array[j] < array[indiceMin])
            {
                indiceMin = j; // Atualiza o índice do elemento mínimo.
            }            
        }

        // Se o índice mínimo não for igual ao índice atual, troca os elementos.
        if (indiceMin != i)
        {
            swap(&array[i], &array[indiceMin]);
        }
    }
}
```

# Explicação

Este código implementa o algoritmo de ordenação por seleção (selection sort) para ordenar um array de inteiros em ordem crescente. Vou explicar o funcionamento do código passo a passo:

- `void selectionSort(int array[])`:
    - Esta é a definição de uma função chamada `selectionSort` que aceita um array de inteiros como argumento. A função é do tipo `void`, o que significa que não retorna nenhum valor.
- `int indiceMin;`: É declarada uma variável `indiceMin` para rastrear o índice do elemento mínimo no array.
- `for (int i = 0; i < tamanho - 1; i++)`:
    - Este é um loop externo que itera através do array. A variável `i` começa em 0 e vai até `tamanho - 1`, onde `tamanho` é o número de elementos no array. Esse loop controla o número de "passagens" pelo array. Cada passagem seleciona o elemento mínimo do subarray não ordenado.
- `indiceMin = i;`:
    - Inicializa a variável `indiceMin` com o valor de `i`, assumindo que o elemento atual é o mínimo no subarray não ordenado.
- `for (int j = i; j < tamanho; j++)`:
    - Este é um loop interno que começa a partir do elemento atual (`i`) e vai até o final do array. O objetivo deste loop interno é encontrar o índice do elemento mínimo no subarray não ordenado.
- `if (array[j] < array[indiceMin])`:
    - Dentro do loop interno, há uma condição que verifica se o elemento em `array[j]` é menor que o elemento em `array[indiceMin]`. Se esta condição for verdadeira, significa que encontramos um novo mínimo no subarray não ordenado, então atualizamos `indiceMin` para `j`.
- Após o loop interno, temos o índice de `indiceMin` apontando para o elemento mínimo no subarray não ordenado.
- `if (indiceMin != i)`:
    - Verifica se o `indiceMin` é diferente do índice atual `i`. Se for diferente, isso significa que encontramos um novo mínimo que é diferente do elemento atual. Nesse caso, trocamos os elementos nos índices `i` e `indiceMin` usando uma função `swap`. Isso coloca o elemento mínimo no lugar certo no subarray ordenado.
- O loop externo continua, repetindo esse processo para o próximo elemento não ordenado, até que todo o array esteja ordenado.

No final da execução desta função, o array estará completamente ordenado em ordem crescente. O algoritmo de seleção é ineficiente para grandes conjuntos de dados, pois sua complexidade é O(n^2), onde "n" é o número de elementos no array. No entanto, é simples de implementar e funciona bem para arrays pequenos ou parcialmente ordenados.