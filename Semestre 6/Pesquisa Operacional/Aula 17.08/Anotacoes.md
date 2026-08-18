# Metodo Simplex

## Forma padrão:
    
    max L = 3000*x + 5000*y
    sujeito a 
        x <= 4 
        2y <= 12 
        3x + 2y <= 18
        x >= 0, y >= 0

    Com variáveis de folga: 

    max L = 3000*x + 5000*y
    sujeito a 
        x + s1 = 4 
        2y + s2 = 12 
        3x + 2y + 3 = 18
        x, y, s1, s2, s3 >= 0
        
        **Forma Aumentada**

Os pontos extremos na forma padrão:

    (0,0), (0,6), (2,6), (4,0) e (4,3)

Na forma aumentada:

    x = 0, y = 0, substituindo nas restrições:
    s1 = 4, s2 = 12, s3 = 18

    (0, 0, 4, 12, 18)

## Tabela de Pontos extremos

| --- | x | y | s1 | s2 | s3 |
| --- | --- | --- | --- |--- |--- |
| **1** | 0 | 0 | 4 | 12 | 18 |
| **2** | 0 | 6 | 4 | 0 | 18 |
| **3** | 2 | 6 | 2 | 0 | 0 |
| **4** | 4 | 0 | 0 | 12 | 6 |

Em um problema P.L. com k variáveis e q restrições, os pontos extremos da região viável tem (k - q) variáveis nulas.
As variávies não nulas são chamadas de variáveis básicas.

## Como funciona

    Ideia: scolhemos x e y inicialmente coo variáveis não básicas. Temos um sistema lnar. Resolve esse sistema. Critério ótimo.

    Forma/Método Tableau

    max L = 3000*x + 5000*y
    sujeito a 
        x + s1 = 4 
        2y + s2 = 12 
        3x + 2y + 3 = 18
        x, y, s1, s2, s3 >= 0

| Variáveis Basicas | x | y | s1 | s2 | s3 | Constantes |
| --- | --- | --- | --- |--- |--- | --- |
| **s1** | 1 | **0** | 1 | 0 | 0 | 4 |
| **s2** | 0 | **2** | 0 | 1 | 0 | 12 | 
| **s3** | 3 | **2** | 0 | 0 | 1 | 18 | 
| **Função Objetivo** | -3000 | **-5000** | 0 | 0 | 0 | 0 |

    Pego a coluna do numero mais negativo da função objetivo -> **Coluna Pivô**

    Eu faço o "teste da razão" e divido a constante pelo numero presente na Coluna Pivô, a linha que houver o menor resultado, será minha **Linha Pivô**

    Vou primeiro substituir os numeros na coluna pivô e linha pivô

| Variáveis Basicas | x | y | s1 | s2 | s3 | Constantes |
| --- | --- | --- | --- |--- |--- | --- |
| **s1** | 1 | **0** | 1 | 0 | 0 | 4 | -> Por ser 0 nao faço alteração
| **x** | 0 | **1** | 0 | 1/2 | 0 | 6 | -> Substituo a variável básica linha Pivô e divido por 2
| **s3** | 3 | **0** | 0 | -1 | 1 | 6 | -> Preciso zerar o elemento da Coluna Pivô, nesse caso, subtraio por 2 vezes a linha pivo
| **Função Objetivo** | -3000 | **0** | 0 | 2500 | 0 | 30000 | -> Preciso zerar o elemento da Coluna Pivô, nesse caso, somo com 5000 vezes a linha pivô

    Divido a linha pivo para o numero da coluna pivô seja igual a 1

    Repito o processo de escolher a coluna, linha Pivô ate que ao haja mais valores negativos na Função Objetivo

    Pego a coluna do numero mais negativo da função objetivo -> **Coluna Pivô**

    Eu faço o "teste da razão" e divido a constante pelo numero presente na Coluna Pivô, a linha que houver o menor resultado, será minha **Linha Pivô**

    Vou primeiro substituir os numeros na coluna pivô e linha pivô

| Variáveis Basicas | x | y | s1 | s2 | s3 | Constantes |
| --- | --- | --- | --- |--- |--- | --- |
| **s1** | **0** | 0 | 1 | 1/3 | -1/3 | 2 | -> Preciso zerar o elemento da Coluna Pivô, nesse caso, subtraio pela linha pivo
| **x** | **0** | 1 | 0 | 1/2 | 0 | **6** | -> Por ser 0 nao faço alteração
| **y** | **1** | 0 | 0 | -1/3 | 1/3 | **2** | -> Substituo a variável básica linha Pivô e divido por 3
| **Função Objetivo** | **0** | 0 | 0 | 1500 | 1000 | 36000 | -> Preciso zerar o elemento da Coluna Pivô, nesse caso, somo com 3000 vezes a linha pivô

Divido a linha pivo para o numero da coluna pivô seja igual a 1

Com nenhum numero negativo na Linha da Função Objetivo, chegou ate a solução ótima, entao extraímos os valores da variáveis de decisão:
    
    x = 6, y = 2, L = 36000