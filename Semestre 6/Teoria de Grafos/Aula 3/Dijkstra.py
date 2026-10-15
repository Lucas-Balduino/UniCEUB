# Aula sobre caminhos de menor custo
# Prof. Renato Cristiano Torres
# Curso: Ciência da Computação
# Ano 2026


import heapq


def dijkstra(grafo, origem):
    """
    Calcula o menor caminho da origem para todos os outros vértices.

    grafo:
        Dicionário no formato:
        {
            'A': {'B': 4, 'C': 2},
            'B': {'A': 4, 'C': 1},
            ...
        }

    origem:
        Vértice inicial.
    """

    # Distância inicial de todos os vértices = infinito
    distancias = {vertice: float('inf') for vertice in grafo}

    # A distância da origem para ela mesma é zero
    distancias[origem] = 0

    # Guarda o vértice anterior para reconstruir o caminho
    anteriores = {vertice: None for vertice in grafo}

    # Fila de prioridade
    fila = [(0, origem)]

    while fila:

        distancia_atual, vertice_atual = heapq.heappop(fila)

        # Se já encontramos um caminho melhor anteriormente
        if distancia_atual > distancias[vertice_atual]:
            continue

        # Analisa todos os vizinhos
        for vizinho, peso in grafo[vertice_atual].items():

            nova_distancia = distancia_atual + peso

            # Relaxamento da aresta
            if nova_distancia < distancias[vizinho]:

                distancias[vizinho] = nova_distancia
                anteriores[vizinho] = vertice_atual

                heapq.heappush(
                    fila,
                    (nova_distancia, vizinho)
                )

    return distancias, anteriores


def caminho_minimo(anteriores, origem, destino):
    """
    Reconstrói o caminho mínimo entre origem e destino.
    """

    caminho = []
    atual = destino

    while atual is not None:
        caminho.append(atual)
        atual = anteriores[atual]

    caminho.reverse()

    if caminho[0] != origem:
        return None

    return caminho


# --------------------------------------------------
# EXEMPLO DE GRAFO
# --------------------------------------------------

grafo = {
    
    'A':{'B':6,'B':4,'C':4,'S':2},
    'B':{'A':6,'A':4,'C':2, 'D': 3},
    'C':{'A':4,'B':2, 'D': 1},
    'D':{'B':3,'C':1},
    'S':{'A':2,'B':5}
}

origem = 'S'

distancias, anteriores = dijkstra(grafo, origem)


print(f"Menores caminhos partindo de {origem}:\n")

for destino in grafo:

    caminho = caminho_minimo(
        anteriores,
        origem,
        destino
    )

    print(
        f"{origem} -> {destino}: "
        f"distância = {distancias[destino]}, "
        f"caminho = {caminho}"
    )
