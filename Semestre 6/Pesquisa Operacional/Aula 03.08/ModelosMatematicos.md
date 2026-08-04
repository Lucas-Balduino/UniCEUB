# Modelos Matemáticos

## Programação matemática

É a área da matemática que estuda problemas como os da cadeiras e mesas

## Programação Linear

Problemas que possuem função objetivo e restrições lineares

## Forma padrão

            Função objetivo
                    |
                    V
Maximizar z = c1x1 + c2x2 + ... + cnxn

Sujeito a
                Restrições
                    |
                    V
        a11x1 + a12x2 + ... + a1nxn <= b1
        a21x1 + a22x2 + ... + a2nxn <= b2
        am1x1 + am2x2 + ... + amnxn <= bn

Exemplo 1: 
Um fabricante de produtos de limpeza prepara dois tipos de polidores de metais por dia, tipo 1 e tipo 2, usando como matéria prima as soluções A e B. A tabela abaixo mostra a quantidade de solucoes a e b usadas para fabricação dos produtos de limpezas, a quantidade disponivel por dias das soluções e o lucro de cada produto

| Soluções | Quantidade de solvente em produto tipo 1 (litro) | Quantidade de solvente em produto tipo 2 (litro) | Quantidade máxima de solução disponível |
| --- | --- | --- | --- |
| **A** | 2 | 1 | 50 |
| **B** | 1 | 2 | 70 |
| **Lucro por litro** | R$ 8 | R$ 10 | — |

Variaveis de Decisao: x,y
funcao objetivo: z = 8*x + 10*y (Lucro)

Restrições:


Maximizar
        z = 8x+10y

Sujeito a 

        2x + y <= 50
        x + 2y <= 70


Exemplo 2: 
Um fabricante de produtos de limpeza prepara dois tipos de polidores de metais por dia, tipo 1 e tipo 2, usando como matéria prima as soluções A e B. A tabela abaixo mostra a quantidade de solucoes a e b usadas para fabricação dos produtos de limpezas, a quantidade disponivel por dias das soluções e o lucro de cada produto

| Fabrica | Quantidade do Produto 1 (em lote) | Quantidade do Produto 1 (em lote) | Tempo Produção disponivel disponível |
| --- | --- | --- | --- |
| **1** | 1 | 0 | 4 |
| **2** | 0 | 2 | 12 |
| **3** | 3 | 2 | 18 |
| **Lucro por Lote** | R$ 3000 | R$ 5000 | — |

Variaveis de Decisao: x,y -> Quantidade de produto 1 e 2
funcao objetivo: z = 3000*x + 5000*y (Lucro)

Restrições:


Maximizar
        z = 3000*x + 5000*y

Sujeito a 

        x*1 <= 4
        y*2 <= 12
        x*3 + y*2 <= 18
        x >= 0,
        y >= 0

## Método Gráfico
É aplicado quando o PPL possui duas variaveis de decisao.
É necessario determinar a região viável, transforme retrições em retas que vao limitar a área do grafico (Isole as variaveis x e y e iguale a 0 para encontrar os pontos que a reta passa pelos eixos), 
