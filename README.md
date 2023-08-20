# algoritmos-ordenacao

No vasto e fascinante campo da ciência da computação, a ordenação de dados é uma das tarefas fundamentais e amplamente aplicadas. A capacidade de organizar informações de maneira eficiente é essencial para a eficácia de sistemas de banco de dados, mecanismos de pesquisa na web, aplicativos de processamento de grandes volumes de dados e muito mais. Este repositório é uma coleção dedicada a explorar, entender e aprimorar algoritmos de ordenação.

Aqui, você encontrará uma rica variedade de algoritmos de ordenação, desde os mais simples e intuitivos até os mais complexos e sofisticados. Nosso objetivo é fornecer um recurso abrangente e prático para estudantes, desenvolvedores e entusiastas da ciência da computação que desejam aprender sobre diferentes abordagens de ordenação, entender seu funcionamento interno e aplicá-los em suas próprias aplicações.

Meus principais objetivos incluem:

1. **Aprendizado**: Fornecer explicações claras e exemplos de cada algoritmo de ordenação para ajudar a entender seus princípios fundamentais.
2. **Implementações**: Oferecer implementações de referência em linguagem C para auxiliar no uso prático desses algoritmos.
3. **Comparação de Desempenho**: Analisar e comparar o desempenho de diferentes algoritmos de ordenação em uma variedade de cenários e tamanhos de dados.
4. **Contribuições da Comunidade**: Incentivar contribuições da comunidade para enriquecer ainda mais esta coleção e promover o aprendizado colaborativo.

# [Bubble Sort](DocsAlgoritmos/Bubble%20Sort.md)

O Bubble Sort é um algoritmo de ordenação simples, mas ineficiente em termos de desempenho, que funciona comparando repetidamente pares de elementos adjacentes em uma lista e trocando-os se estiverem na ordem errada. Esse processo de comparação e troca é repetido até que toda a lista esteja ordenada. O nome "Bubble Sort" deriva da forma como os elementos menores "sobem" gradualmente para suas posições finais, semelhante a bolhas subindo na água.

Aqui está uma explicação passo a passo de como o Bubble Sort funciona:

1. **Comece pela primeira posição da lista**: O algoritmo começa na primeira posição da lista e compara o elemento atual com o próximo elemento.
2. **Compare os elementos adjacentes**: Ele compara o elemento atual com o próximo elemento. Se o elemento atual for maior que o próximo, eles são trocados. Caso contrário, nenhum movimento é feito.
3. **Continue percorrendo a lista**: O algoritmo então avança para a próxima posição na lista e repete o processo de comparação e, se necessário, troca. Esse processo é repetido até que todo o percurso pela lista seja concluído.
4. **Repetição**: O processo é repetido várias vezes, até que nenhuma troca seja necessária em um passe completo pela lista. Isso significa que a lista está ordenada.
5. **Lista ordenada**: Quando nenhuma troca é feita em um passe completo pela lista, significa que a lista está ordenada, e o algoritmo termina.

É importante notar que o Bubble Sort é ineficiente, especialmente em listas longas, porque ele faz muitas comparações e trocas, mesmo que a maior parte da lista já esteja ordenada. A complexidade de tempo média e pior caso do Bubble Sort é O(n^2), onde 'n' é o número de elementos na lista. Portanto, ele não é recomendado para grandes conjuntos de dados. Existem algoritmos de ordenação mais eficientes, como o Merge Sort e o Quick Sort, que têm um desempenho significativamente melhor em termos de tempo. O Bubble Sort é principalmente usado para fins educacionais ou em situações em que a simplicidade do código é mais importante do que o desempenho.

# [Insertion Sort](DocsAlgoritmos/Insertion%20Sort.md)

O Insertion Sort é um algoritmo de ordenação simples e eficaz para pequenos conjuntos de dados ou listas quase ordenadas. Ele funciona da seguinte maneira:

1. **Divisão da lista**: Inicialmente, o algoritmo considera o primeiro elemento da lista como uma sublista ordenada e o restante como uma sublista não ordenada.
2. **Inserção**: O algoritmo começa a percorrer a sublista não ordenada, elemento por elemento, da esquerda para a direita.
3. **Comparação e Inserção**: Para cada elemento na sublista não ordenada, ele compara esse elemento com os elementos na sublista ordenada (que está à esquerda). O algoritmo move os elementos da sublista ordenada para a direita até encontrar a posição correta para inserir o elemento atual da sublista não ordenada.
4. **Continuação**: Esse processo de comparação e inserção é repetido até que todos os elementos da sublista não ordenada sejam movidos para a sublista ordenada. No final desse processo, a sublista ordenada contém todos os elementos da lista original, e a sublista não ordenada está vazia.
5. **Conclusão**: O algoritmo continua a repetir esse processo para cada elemento da lista, expandindo gradualmente a sublista ordenada até que todos os elementos estejam na posição correta. Quando o último elemento é movido para a sublista ordenada, a lista original estará completamente ordenada.

O Insertion Sort é eficiente em listas pequenas ou quase ordenadas, pois, em média, ele faz menos comparações e movimentos do que algoritmos como o Bubble Sort ou o Selection Sort. No entanto, sua complexidade de tempo no pior caso é O(n^2), onde 'n' é o número de elementos na lista. Portanto, para listas muito grandes, outros algoritmos de ordenação, como o Merge Sort ou o Quick Sort, são geralmente preferíveis.

O Insertion Sort é útil quando:

- A lista já está parcialmente ordenada.
- A lista é pequena e a simplicidade do código é importante.
- É necessário fazer ordenação em tempo real, já que o Insertion Sort pode ser adaptado para ordenar elementos à medida que eles são inseridos na lista.

Em resumo, o Insertion Sort é um algoritmo de ordenação que é fácil de entender e implementar, tornando-o uma escolha adequada em situações específicas.

# [Merge Sort](DocsAlgoritmos/Merge%20Sort.md)

O Merge Sort é um algoritmo de ordenação eficiente e de divisão e conquista. Ele funciona dividindo repetidamente uma lista em duas metades, ordenando cada metade e, em seguida, mesclando as duas metades ordenadas de volta em uma única lista ordenada. O processo de mesclagem é a chave para a eficiência desse algoritmo.

Aqui está uma explicação passo a passo de como o Merge Sort funciona:

1. **Divisão**: A lista não ordenada é dividida pela metade até que cada sublista contenha apenas um elemento. Isso é feito recursivamente até que não seja possível mais dividir.
2. **Ordenação**: Em seguida, as sublistas individuais são ordenadas. Isso é feito recursivamente por meio da divisão e ordenação das sublistas menores até que todas estejam ordenadas.
3. **Mesclagem**: O passo crucial do Merge Sort é a mesclagem das sublistas ordenadas. O algoritmo compara os elementos das duas sublistas ordenadas, começando pelo início de cada sublista. O elemento menor é selecionado e movido para a lista de saída. Esse processo é repetido até que todas as sublistas sejam mescladas em uma única lista ordenada.
4. **Conclusão**: O processo de mesclagem continua até que todas as sublistas estejam mescladas em uma única lista ordenada, que agora é a lista de saída.

A principal vantagem do Merge Sort é que ele é um algoritmo estável, ou seja, ele preserva a ordem relativa de elementos iguais. Além disso, a complexidade de tempo do Merge Sort é sempre O(n log n), independentemente da ordem dos elementos na lista. Isso torna o Merge Sort uma escolha eficiente para ordenar grandes conjuntos de dados.

No entanto, o Merge Sort requer espaço adicional para armazenar as sublistas temporárias durante a divisão e mesclagem, o que pode ser uma desvantagem em sistemas com restrições de memória. Além disso, seu desempenho em listas pequenas pode ser inferior a algoritmos mais simples, como o Insertion Sort. Portanto, a escolha do algoritmo de ordenação depende das características específicas do problema que você está resolvendo.

# [Quick Sort](DocsAlgoritmos/Quick%20Sort.md)

O Quick Sort é um algoritmo de ordenação eficiente que utiliza a estratégia de divisão e conquista para ordenar uma lista de elementos. Ele é conhecido por sua velocidade e é amplamente utilizado em muitas implementações de ordenação. O funcionamento do Quick Sort pode ser explicado em etapas:

1. **Escolha do Pivô**:
    - O primeiro passo do Quick Sort é escolher um elemento da lista como pivô. O pivô é um valor de referência que será usado para dividir a lista em duas partes: elementos menores que o pivô e elementos maiores que o pivô.
2. **Particionamento**:
    - Após a escolha do pivô, o algoritmo organiza os elementos da lista de forma que os elementos menores que o pivô fiquem à esquerda e os elementos maiores fiquem à direita. Isso é feito reorganizando os elementos de modo que todos os elementos menores que o pivô estejam à esquerda e todos os elementos maiores estejam à direita.
3. **Recursão**:
    - Neste ponto, a lista foi dividida em duas partes: uma contendo elementos menores que o pivô e outra com elementos maiores. O Quick Sort então é aplicado recursivamente a ambas as sub-listas. Isso significa que o processo de escolha do pivô e particionamento é repetido para as sublistas, e assim por diante, até que toda a lista esteja ordenada.
4. **Combinação**:
    - À medida que as chamadas recursivas retornam, as sublistas ordenadas são combinadas para formar a lista final ordenada. Isso acontece porque, como as sublistas são ordenadas recursivamente, sabemos que todos os elementos menores que o pivô estão à esquerda e todos os elementos maiores estão à direita.
5. **Pivôs Estratégicos**:
    - A escolha estratégica do pivô pode afetar o desempenho do Quick Sort. É comum escolher o pivô como o elemento do meio da lista, mas existem várias estratégias para a seleção do pivô, como escolher o primeiro ou o último elemento. Algoritmos mais avançados podem usar técnicas para escolher pivôs que otimizam o desempenho em casos específicos.

O Quick Sort é notável por sua eficiência média, pois sua complexidade de tempo médio é O(n log n), onde 'n' é o número de elementos na lista. No entanto, no pior caso, quando o pivô é escolhido de forma desfavorável e resulta em divisões desequilibradas, a complexidade de tempo pode ser O(n^2). Para evitar esse pior caso, é importante escolher pivôs estrategicamente.

O Quick Sort é amplamente utilizado em implementações de ordenação, especialmente quando a eficiência é uma prioridade, mas é importante considerar sua implementação corretamente para evitar problemas de desempenho no pior caso.

# [Selection Sort](DocsAlgoritmos/Selection%20Sort.md)

O Selection Sort é um algoritmo de ordenação simples, porém ineficiente para listas de tamanho considerável, que funciona selecionando iterativamente o menor (ou maior, dependendo da ordem desejada) elemento da lista não ordenada e movendo-o para a posição correta na lista ordenada. O processo de ordenação ocorre da seguinte forma:

1. **Divisão da Lista**: A lista de elementos é dividida em duas partes: uma parte ordenada e outra parte não ordenada. Inicialmente, a parte ordenada está vazia, e a parte não ordenada contém todos os elementos da lista.
2. **Seleção do Elemento Mínimo**: O algoritmo busca o elemento mínimo (ou máximo, dependendo da ordem desejada) na parte não ordenada da lista. Para fazer isso, ele percorre a parte não ordenada e compara cada elemento com o mínimo atualmente conhecido. Quando encontra um elemento menor, atualiza o mínimo.
3. **Troca de Elementos**: Após encontrar o mínimo (ou máximo), o algoritmo o move para a parte ordenada da lista. Isso é feito trocando o elemento mínimo com o primeiro elemento não ordenado da lista, efetivamente expandindo a parte ordenada e reduzindo a parte não ordenada.
4. **Repetição**: O processo descrito acima é repetido para a parte não ordenada restante da lista. Ou seja, encontra-se o próximo menor (ou maior) elemento na parte não ordenada e o move para a parte ordenada. Esse processo de seleção e troca continua até que toda a lista esteja ordenada.
5. **Conclusão**: Após a repetição do processo para todos os elementos da lista, a parte ordenada conterá todos os elementos em ordem crescente (ou decrescente, dependendo da ordem desejada), e a lista estará completamente ordenada.

O Selection Sort tem um desempenho relativamente ruim em comparação com algoritmos mais eficientes, como o Merge Sort ou o Quick Sort. Sua complexidade de tempo é sempre O(n^2), onde 'n' é o número de elementos na lista, independentemente de como os elementos estão inicialmente dispostos. Portanto, não é a escolha ideal para grandes conjuntos de dados.

O Selection Sort é principalmente usado para fins educacionais ou em situações em que a simplicidade da implementação é mais importante do que a eficiência. Em geral, para ordenação eficiente de grandes volumes de dados, é recomendável usar outros algoritmos, como os mencionados acima.

# Documentação dos códigos

[DocsAlgoritmos](DocsAlgoritmos/DocsAlgoritmos.md)
