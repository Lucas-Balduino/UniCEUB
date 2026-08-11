### Problema de Programação Linear (PPL)
É quano a função objetivo e as restrições são lineare

### Método Gráfico
1) Aplicar apenas a problemas com duas variáveis decisão 
2) Encontrar a região viável:
Em cada restrição, trocamos a desigualdade por uma igualdade. Obtemos retas e determinamos os pontos que essas retas tocam os eixos
**Exemplo Wyndor Glass**
> max L = 3000*x + 5000*y
> sujeito à
> x <= 4
> y <= 6
> 3*x + 2*y <= 18
> x >= 0
> y >= 0

Região viável: Região que satisfaz todas as restrições

### Continuação Método Gráfico
Após determinar a região viável precisamos encontrar as coordenadas dos vértices.
No contexto PPL, os vértices são chamados de pontos extremos.

> **Teorema**
> A solução ótima é um ponto extremo

Para determinar as coordenadas dos pontos extremos, se usam as equações das restrições montar um sistema com as retas que em interssesao formam o ponto extremo.
Ao resolver o sistema linear se obtem as coordenadas de cada ponto extremo.

Com as coordenadas de cada ponto, avalie na função objetivo, os pares de variáveis que atingirem os melhores valores para a função objetivo.

**Exemplo 2**
Uma fárica produz dois produtos A e B cada um passando por uma máquina M1 e M2
Tempo Produto
| Máquinas | Produto A | Produto B | Tempo Máximo |
| --- | --- | --- | --- |
| **M1** | 4 | 6 | 24 |
| **M2** | 4 | 2 | 16 |
| **Lucro** | R$ 80 | R$ 60 | — |
Existe uma restrição de produção máxima de 3 produtos B.

Quantas unidades dever ser produzidas para obter lucro máximo
1) Variavel de decisão
x -> Numero de Produtos A
y -> Numero de Produtos B

2) Funcao objetivo
max L = 80*x + 60*y

3) Restrições
4*x + 6*y <= 24
4*x + 2*y <= 16
y >= 3

### Variável de Folga
Para problemas de programação linear com restrições do tipo:

ai1*x1 + ai2*x2 + ain*xn <= bi

Podemos somar si >= 0 tal que:

ai1*x1 + ai2*x2 + ain*xn + si <= bi

(Somar o que falta)

Dizemos que si é uma variável de folga. Podemos associar com recursos que nao foram utilizados.

**Exemplo**

4x + 6y + s1 = 24
4x + 2y + s2 = 16
y + s3 = 3 

Considere o ponto extremo (0,3)

18 + s1 = 24
6 + s2 = 16
3 + s3 = 3 

s1 = 6 -> Se eu produzisse 0 Produtos A e 3 Produtos B eu teria 6 horas de sobra da maquina 1
s2 = 4 -> Se eu produzisse 0 Produtos A e 3 Produtos B eu teria 10 horas de sobra da maquina 2
s3 = 0

