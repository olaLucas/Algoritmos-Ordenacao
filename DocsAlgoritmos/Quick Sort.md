# Quick Sort

Recomendo fortemente assistir a este [video](https://www.youtube.com/watch?v=wx5juM9bbFo) caso tenha dificuldades para entender este algoritmo.

Este código implementa o algoritmo de rápido de ordenação (quick sort) para ordenar um array de inteiros em ordem crescente. Vou explicar o funcionamento do das principais funções passo a passo:

# quickSort()

## Código

```c
/**
 * Função: particiona
 *
 * Descrição: Esta função recebe um array, um índice inicial e um índice final e
 *             particiona o array em duas partes, colocando os elementos menores ou
 *             iguais ao pivô à esquerda e os elementos maiores à direita.
 *
 * Parâmetros:
 * - vetor[]: O array de inteiros a ser particionado.
 * - inicio: O índice inicial do subarray atual.
 * - fim: O índice final do subarray atual.
 *
 * Retorna:
 * - Um inteiro representando a posição do pivô após a partição.
 */
void quicksort(int vetor[], int inicio, int fim)
{
    // Verifica se o subarray contém mais de um elemento
    if (fim < inicio)
    {
        return; // Caso base: nenhum ou um elemento no subarray, nada a ser ordenado.
    }

    // Particiona o subarray e obtém a posição do pivô após a partição
    int pivo = particiona(vetor, inicio, fim);

    // Chama quicksort recursivamente para as partições esquerda e direita do pivô
    quicksort(vetor, inicio, pivo - 1); // Ordena os elementos menores que o pivô à esquerda
    quicksort(vetor, pivo + 1, fim);    // Ordena os elementos maiores que o pivô à direita
}
```

## Explicação

1. **Assinatura da função**: A função **`quicksort`** recebe três parâmetros:
    - **`vetor[]`**: Um array de inteiros que você deseja ordenar.
    - **`inicio`**: O índice de início do subarray atual que está sendo ordenado.
    - **`fim`**: O índice de fim do subarray atual que está sendo ordenado.
2. **Condição de Parada da Recursão**: A primeira coisa que a função faz é verificar se **`fim`** é menor do que **`inicio`**. Isso é uma condição de parada para a recursão. Se **`fim`** for menor que **`inicio`**, significa que o subarray que está sendo ordenado não contém elementos ou contém apenas um elemento, e, portanto, não há nada a ser ordenado. Nesse caso, a função simplesmente retorna, encerrando a chamada recursiva.
3. **Escolha do Pivô**: Se a condição de parada não for atendida, a função continua. Ela começa escolhendo um elemento do array como pivô. A escolha do pivô pode afetar o desempenho do quicksort, mas neste código, o pivô não é escolhido explicitamente; ele é determinado pela função **`particiona`**.
4. **Particionamento**: A função chama a função **`particiona`** para realizar o particionamento do array. O particionamento é o processo de rearranjar os elementos do array de forma que todos os elementos menores que o pivô estejam à esquerda do pivô e todos os elementos maiores estejam à direita. O índice do pivô após o particionamento é armazenado na variável **`pivo`**.
5. **Recursão para as Partes Menores e Maiores**: Após o particionamento, a função **`quicksort`** é chamada recursivamente duas vezes:
    - A primeira chamada **`quicksort(vetor, inicio, pivo - 1)`** ordena a parte à esquerda do pivô (contendo elementos menores que o pivô). Isso é feito passando o mesmo array, mas atualizando o índice de **`fim`** para **`pivo - 1`**.
    - A segunda chamada **`quicksort(vetor, pivo + 1, fim)`** ordena a parte à direita do pivô (contendo elementos maiores que o pivô). Isso é feito passando o mesmo array, mas atualizando o índice de **`inicio`** para **`pivo + 1`**.
6. **Recursão e Particionamento Repetidos**: Este processo de dividir o array em subarrays menores e ordená-los recursivamente continua até que a condição de parada seja atingida (quando **`fim`** é menor que **`inicio`** para um subarray específico). Nesse ponto, a recursão retorna e os subarrays são recombinados e ordenados até que o array inteiro esteja ordenado.
7. **Resultado**: Quando a recursão completa, o array original estará ordenado em ordem crescente. Cada chamada recursiva lida com uma parte menor do array, o que torna o quicksort um algoritmo eficiente para a ordenação de grandes conjuntos de dados.

# particiona()

## Código

```c
/**
 * Função: quicksort
 *
 * Descrição: Esta função implementa o algoritmo de ordenação rápida (quicksort)
 *             recursivamente para ordenar um array de inteiros.
 *
 * Parâmetros:
 * - vetor[]: O array de inteiros a ser ordenado.
 * - inicio: O índice inicial do subarray atual.
 * - fim: O índice final do subarray atual.
 */
int particiona(int vetor[], int inicio, int fim)
{
    int pivo = vetor[fim]; // Seleciona o elemento pivô como o último elemento do vetor
    int barraAmarela = inicio; // Inicializa uma variável para controlar a posição dos elementos menores que o pivô

    // Percorre o vetor a partir do início até o elemento antes do pivô (fim-1)
    for (int barraRoxa = inicio; barraRoxa < fim; barraRoxa++)
    {
        // Se o elemento atual for menor ou igual ao pivô, troca-o com o elemento na posição da "barra amarela"
        if (vetor[barraRoxa] <= pivo)
        {
            swap(&vetor[barraAmarela], &vetor[barraRoxa]); // Troca os elementos
            barraAmarela++; // Move a "barra amarela" para a próxima posição
            mostraVetor(vetor); // Mostra o vetor após cada troca (para visualização do processo)
        }
    }

    // Coloca o pivô na posição correta (entre os elementos menores e maiores)
    swap(&vetor[barraAmarela], &vetor[fim]);
    mostraVetor(vetor); // Mostra o vetor após a colocação do pivô em sua posição final

    return barraAmarela; // Retorna a posição do pivô
}
```

## Explicação

A função "particiona" desempenha um papel fundamental no quicksort, pois ela divide o array em duas partes menores, uma contendo elementos menores ou iguais ao pivô e outra contendo elementos maiores que o pivô.

Aqui está uma explicação passo a passo do código:

1. A função recebe três parâmetros:
    - `vetor[]`: um array de inteiros que você deseja ordenar.
    - `inicio`: o índice inicial do subarray atual que está sendo particionado.
    - `fim`: o índice final do subarray atual que está sendo particionado.
2. A função começa escolhendo o elemento de pivô. Neste caso, o pivô é escolhido como o último elemento do subarray (índice `fim`).
3. Dois índices são inicializados:
    - `barraAmarela`: Este índice será usado para rastrear a posição onde os elementos menores ou iguais ao pivô devem ser colocados.
    - `barraRoxa`: Este índice é usado para percorrer o subarray do início até o penúltimo elemento.
4. O loop `for` percorre o subarray da esquerda para a direita (do `inicio` até `fim - 1`).
5. Dentro do loop, verifica-se se o elemento atual (`vetor[barraRoxa]`) é menor ou igual ao pivô (`vetor[fim]`). Se for, isso significa que ele deve estar na parte esquerda da partição. Nesse caso, os elementos nas posições `barraAmarela` e `barraRoxa` são trocados usando a função `swap`.
6. Após a troca, `barraAmarela` é incrementada para refletir a nova posição onde os elementos menores ou iguais ao pivô devem ser colocados.
7. A função `mostraVetor(vetor)` é chamada para mostrar o estado atual do array após cada troca. Isso é útil para visualizar o processo de ordenação.
8. Após o término do loop, todos os elementos menores ou iguais ao pivô estão à esquerda de `barraAmarela`, e todos os elementos maiores que o pivô estão à direita.
9. O pivô é então colocado em sua posição correta trocando-o com o elemento em `vetor[barraAmarela]`. Isso garante que todos os elementos à esquerda do pivô sejam menores ou iguais a ele, e todos os elementos à direita sejam maiores.
10. A função `mostraVetor(vetor)` é chamada novamente para mostrar o array após o pivô ser colocado em sua posição correta.
11. A função retorna o índice `barraAmarela`, que agora indica a posição correta do pivô no array.

Essencialmente, esta função particiona o array em duas partes, de modo que os elementos menores ou iguais ao pivô estejam à esquerda e os elementos maiores estejam à direita. O quicksort utiliza recursão para ordenar as duas partições resultantes.
