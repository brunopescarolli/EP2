# Arboricultura

Pesquisa de campo entre diferentes tipos de árvores.

## Estruturas

```
A recursão foi o ponto chave, utilizando nas duas variações de árvores. 
O relatório é divido em três: valores inseridos, média de tempo e média de altura.
```

## Aleatoriedade

```
Sabendo que a chance de um número se repetir entre 0 e 10
é bem maior que entre 0 e 100, o método rand proporciona um número astronomicamente 
grande que após a divisão para ser algo mais palpável, se torna não impossível, mas
muito difícil de se repetir
```
## Conclusão do experimento
```
Árvores AVL's sempre serão mais eficientes que árvores BST's comuns.
Essa diferença fica cada vez mais gritante quando aumentamos os valores tanto de
amostras quanto de nós(galhos/folhas).
Contraparte, essa eficiência tem um custo, que seria a diferença de tempo que as
duas levam para serem geradas, mas ao colocar na balança, se torna algo irrisório
dado a vantagem de uma AVL.
```
## Menor teste:
```
--------------------------------
BST

Experimento com A = 5 e N = 10

Tempo médio de construção: 0.000001s

Altura média: 5.80
--------------------------------
AVL

Experimento com A = 5 e N = 10

Tempo médio de construção: 0.000002s

Altura média: 4.00
--------------------------------
```
Maior teste:
```
--------------------------------
BST

Experimento com A = 50 e N = 5000

Tempo médio de construção: 0.000954s

Altura média: 28.84
--------------------------------
AVL

Experimento com A = 50 e N = 5000

Tempo médio de construção: 0.197325s

Altura média: 14.94
--------------------------------
```
