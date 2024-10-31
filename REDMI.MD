# Documentação do Código: Ordenação de Dados Populacionais em C++


## FUNCIONALIDADE DE PROGRAMA
Este programa em C++ permite ao usuário inserir dados populacionais para serem ordenados. Dependendo da quantidade de valores inseridos, ele escolhe automaticamente o algoritmo de ordenação:

## LÓGICA DO PROGRAMA
- **Insertion Sort**: Para listas com até 20 valores.
- **Bubble Sort**: Para listas entre 21 e 30 valores.
- **Selection Sort**: Para listas com mais de 30 valores.

Após a ordenação, o programa exibe a lista original, a lista ordenada e o nome do algoritmo usado.

## Estrutura e Funções Principais

### Função Principal (`main`)

Controla a entrada dos dados, verifica se os valores são válidos e seleciona o algoritmo de ordenação com base na quantidade de elementos.

### Funções de Ordenação

- **Insertion Sort**: Insere cada elemento na posição correta da lista.
- **Bubble Sort**: Compara e troca elementos adjacentes.
- **Selection Sort**: Encontra o menor valor e o coloca na posição correta.

## Tratamento de Erros

O programa verifica se o usuário inseriu algum valor negativo e pede uma nova entrada se necessário.

## Comentários e Explicações

Cada função tem comentários que explicam seu objetivo e funcionamento, ajudando a entender a lógica do programa e como cada parte funciona.

Esse programa permite ao usuário observar o comportamento de diferentes algoritmos de ordenação em listas de tamanhos variados.
