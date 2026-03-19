# Atividade 3 - Busca Heurística
Lucas Gonçalves Balduino - 22409139

## 1. Busca Heurística: O "Palpite" Inteligente
Diferente de uma busca exaustiva (que olha para todos os lados), a busca heurística utiliza uma **função heurística** $h(n)$ para estimar o custo do caminho mais curto de um nó atual até o objetivo. 

* **Definição:** É uma estratégia de busca que foca em áreas do espaço de estados que parecem mais promissoras, economizando tempo e processamento.
* **Exemplo:** Imagine que você está em um labirinto. Uma heurística simples seria "sempre escolher o caminho que diminui a distância em linha reta até a saída".

---

## 2. Algoritmo de Dijkstra: A Busca Pela Certeza
Criado por Edsger Dijkstra em 1956, este é o "pai" dos algoritmos de caminho mínimo em grafos ponderados.

* **Definição:** Ele garante encontrar o caminho mais curto entre um nó inicial e todos os outros (ou um destino específico), desde que os pesos das arestas não sejam negativos.
* **Como funciona:** Ele expande radialmente, visitando sempre o vizinho mais próximo ainda não explorado.
* **Aplicação:** Roteamento de pacotes na internet (protocolo OSPF) e redes de infraestrutura elétrica.

---

## 3. Algoritmo A* (A-Estrela): O Equilíbrio Perfeito
O A* é, essencialmente, o Dijkstra "bombado" com heurísticas. Ele é amplamente considerado o melhor algoritmo de busca de caminho.

* **Definição:** Ele usa uma função de avaliação $f(n) = g(n) + h(n)$, onde:
    * $g(n)$ é o custo real do início até o nó atual.
    * $h(n)$ é a estimativa heurística do nó atual até o objetivo.
* **Diferencial:** Enquanto o Dijkstra sai "tateando" em todas as direções, o A* foca na direção do objetivo, sendo muito mais rápido.
* **Aplicação:** Inteligência Artificial em jogos (NPCs se movendo no mapa) e robótica móvel.

---

## Comparativo Rápido

| Característica | Dijkstra | A* |
| :--- | :--- | :--- |
| **Tipo** | Busca Uniforme (Cega) | Busca Informada (Heurística) |
| **Garantia** | Sempre encontra o caminho mínimo | Encontra o mínimo se a heurística for *admissível* |
| **Performance** | Lento em mapas grandes | Extremamente eficiente |
| **Uso Ideal** | Quando o destino é desconhecido | Quando o destino é conhecido |

---

## Implementação Rápida (Python)

Uma forma simplificada de visualizar a lógica do A* usando uma fila de prioridade:

```python
import heapq

def a_star(grafo, inicio, objetivo, heuristica):
    fila_prioridade = [(0, inicio)]
    caminhos = {inicio: None}
    custo_acumulado = {inicio: 0}

    while fila_prioridade:
        f, atual = heapq.heappop(fila_prioridade)

        if atual == objetivo:
            return reconstruir_caminho(caminhos, objetivo)

        for vizinho, custo_aresta in grafo[atual].items():
            novo_custo = custo_acumulado[atual] + custo_aresta
            if vizinho not in custo_acumulado or novo_custo < custo_acumulado[vizinho]:
                custo_acumulado[vizinho] = novo_custo
                f_score = novo_custo + heuristica(vizinho, objetivo)
                heapq.heappush(fila_prioridade, (f_score, vizinho))
                caminhos[vizinho] = atual
```

---

## Estado da Arte em 2026
Hoje, o A* puro não é muito utilizado para problemas complexos. O "estado da arte" envolve:
1.  **Hierarchical Pathfinding (HPA*):** Divide mapas gigantes em sub-regiões para processamento ultrarrápido.
2.  **D* Lite:** Utilizado em robôs (como os rovers de Marte) que precisam recalcular rotas em tempo real conforme encontram obstáculos inesperados.
3.  **Neural Pathfinding:** Uso de Redes Neurais para aprender heurísticas complexas em ambientes onde a distância euclidiana não funciona bem.

---

## Referências Recomendadas
* **RUSSELL, S.; NORVIG, P.** *Inteligência Artificial: Uma Abordagem Moderna*.
* **HART, P. E.; NILSSON, N. J.; RAPHAEL, B.** *A Formal Basis for the Heuristic Determination of Minimum Cost Paths*.
* **CORMEN, T. H. et al.** *Algoritmos: Teoria e Prática*.
